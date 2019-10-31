#pragma once

class IGameEngineHost
{
public:
	static bool g_isHost;
	static void CreateClientConnection(u_short port = 0);
	static void CreateServerConnection();

	static bool g_enableGameEngineHostOverride;
	
	static IGameEngineHost g_gameEngineHost;

#pragma pack(push, 1)
	struct InputBuffer
	{
		int unknown0;
		char keyboardState[256];
		float MouseX;
		float MouseY;
		_QWORD unknown10C;
		char mouseButtonBits;
		char unknown115[19];
	};
#pragma pack(pop)
	static constexpr size_t InputBufferSize = sizeof(InputBuffer);
	static_assert(InputBufferSize == 0x128, "InputBuffer is incorrect size");
	
	IGameEngineHost();
	~IGameEngineHost();

	struct Member06Struct
	{
		BYTE data[0x584B8]; // game results??
	};
	static constexpr size_t Member06StructSize = sizeof(Member06Struct);
	static_assert(Member06StructSize == 0x584B8, "Member06Struct is incorrect size");
	
	struct Member22Struct
	{
		BYTE data[0x110];
	};
	static constexpr size_t Member22StructSize = sizeof(Member22Struct);
	static_assert(Member22StructSize == 0x110, "Member22Struct is incorrect size");
	
	struct Member28Struct
	{
		int width;
		int height;
		BYTE data8[0x178];
	};
	static constexpr size_t Member28StructSize = sizeof(Member28Struct);
	static_assert(Member28StructSize == 0x180, "Member28Struct is incorrect size");
	
	struct Member29Struct
	{
		BYTE data[0x664];
	};
	static constexpr size_t Member29StructSize = sizeof(Member29Struct);
	static_assert(Member29StructSize == 0x664, "Member29Struct is incorrect size");
	
	struct s_transport_address;
	




































































	enum NetworkID : unsigned __int64
	{
		Invalid,
		Unknown1,
		Unknown2,
		Unknown3,
		k_NumNetworkID
	};


	/* 0  */ virtual char Member00();
	/* 1  */ virtual void Member01(IDXGISwapChain *, _QWORD);
	/* 2  */ virtual void Member02(__int64, unsigned int, __int64, float, float, float, float);
	/* 3  */ virtual void GameStatusUpdated(unsigned int);
	/* 4  */ virtual __int64 GameExited(unsigned int a1, char* a2, int);
	/* 5  */ virtual __int64 __fastcall WriteBufferToFile(LPVOID, size_t);
	/* 6  */ virtual void Member06(Member06Struct *buffer);
	/* 7  */ virtual void Member07(unsigned int);
	/* 8  */ virtual void Member08(const wchar_t *, const wchar_t *);
	/* 9  */ virtual void Member09(wchar_t [1024], wchar_t [1024]);
	/* 10 */ virtual IGameEvents* GetGameEvents();
	/* 11 */ virtual void GameVariantCreated(IGameVariant *);
	/* 12 */ virtual void MapVariantCreated(IMapVariant *);
	/* 13 */ virtual void Member13(const wchar_t *, const wchar_t *, const void *, unsigned int);
	/* 14 */ virtual char Member14(int, BYTE *);
	/* 15 */ virtual char Member15(int, BYTE *);
	/* 16 */ virtual char GetNextLevelInfo(e_map_id *, int *, FILETIME *, _DWORD *);
	/* 17 */ virtual bool Member17(int);
	/* 18 */ virtual void Member18(int);
	/* 19 */ virtual __int64 __fastcall MapLoadPecentStatus(__int64, __int64, float);
	/* 20 */ virtual void Member20(__int64, __int8);
	/* 21 */ virtual __int64 __fastcall GetMachineIdentifier(_QWORD);
	/* 22 */ virtual __int64 Member22(Member22Struct *buffer, __int64);
	/* 23 */ virtual char Member23(__int64, __int64);
	/* 24 */ virtual void GetSessionInfo(s_session_info_part *buffer);
	/* 25 */ virtual void __fastcall MembershipUpdate(s_session_membership *buffer, uint32_t playercount);
	/* 26 */ virtual bool __fastcall Member26();
	/* 27 */ virtual bool __fastcall Member27();
	/* 28 */ virtual bool __fastcall Member28(Member28Struct *buffer);
	/* 29 */ virtual __int64 __fastcall Member29(wchar_t playerNames[4][32], Member29Struct *buffer);
	/* 30 */ virtual bool __fastcall __fastcall Member30(_QWORD, InputBuffer* pInputBuffer);
	/* 31 */ virtual void test();
	/* 32 */ virtual void test2();
	/* 33 */ virtual bool __fastcall __fastcall UpdatePlayerNames(__int64*, wchar_t playerNames[4][32], size_t dataSize);
	/* 34 */ virtual void __fastcall Member32(const wchar_t*, const wchar_t*);
	/* 35 */ virtual bool __fastcall Member33(wchar_t*, __int64);
	/* 36 */ virtual __int64 __fastcall NetworkSendTo(NetworkID networkID, char* buffer, uint32_t buffersize, int a5);
	/* 37 */ virtual __int64 __fastcall NetworkReceiveFrom(char* buffer, uint32_t buffersize, __int64 a4, s_transport_address* transport_address);
	/* 38 */ virtual char* __fastcall Member36(unsigned int);
	/* 39 */ virtual int __fastcall Member37(BYTE* buffer);
	/* 40 */ virtual bool __fastcall Member38(signed int, __int64, __int64);
	/* 41 */ virtual void __fastcall FireFightNew(__int64, float);
	/* 42 */ virtual BOOL __fastcall Member40(__int64, __int64);
	/* 43 */ virtual bool __fastcall GetPathByType(int pathType, char* buffer, size_t bufferlength);
	/* 44 */ virtual bool __fastcall GetWidePathByType(int pathType, wchar_t* buffer, size_t bufferlength); // is now 44
	/* 45 */ virtual unsigned __int8* __fastcall Member43(_QWORD, unsigned __int8*, _QWORD);

	// DATA
	
	IGameEvents* pGameEvents;
	QWORD data1[5863];
	
	// IGameEngineHost bypass functions

	enum class GEHCBypassType // GameEngineHostCallbackType
	{
		UseValidPointer,
		UseNullPointer
	};

	template<GEHCBypassType type, typename T, typename IGameEngineHostRefType>
	static decltype(auto) GEHCBypass(IGameEngineHostRefType& game_engine_host_pointer, T&& functionPtr, bool forceDisable = false) // GameEngineHostCallback
	{
		using return_type = decltype(functionPtr());

		IGameEngineHost* pGameEngineHostBefore = game_engine_host_pointer;

		if constexpr (type == GEHCBypassType::UseValidPointer)
		{
			if (g_enableGameEngineHostOverride && !forceDisable)
			{
				game_engine_host_pointer = &g_gameEngineHost;
			}
		}
		else
		{
			if (g_enableGameEngineHostOverride && !forceDisable)
			{
				game_engine_host_pointer = nullptr;
			}
		}

		if constexpr (std::is_same<return_type, void>::value)
		{
			functionPtr();

			if (g_enableGameEngineHostOverride && !forceDisable)
			{
				game_engine_host_pointer = pGameEngineHostBefore;
			}
		}
		else
		{
			decltype(functionPtr()) result = functionPtr();

			if (g_enableGameEngineHostOverride && !forceDisable)
			{
				game_engine_host_pointer = pGameEngineHostBefore;
			}

			return result;
		}
	}
};
//static constexpr size_t IGameEngineHostSize = sizeof(IGameEngineHost);
//static_assert(IGameEngineHostSize == 0xB748, "IGameEngineHost is incorrect");
