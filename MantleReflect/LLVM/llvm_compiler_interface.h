#pragma once

class c_legacy_ast_source_generator;
class c_reflection_type_container;
class c_llvm_class_visitor;

class c_llvm_compiler_interface
{
public:
	friend c_llvm_class_visitor;

	c_llvm_compiler_interface() = delete;
	c_llvm_compiler_interface(const c_llvm_compiler_interface&) = delete;
	c_llvm_compiler_interface& operator=(const c_llvm_compiler_interface&) = delete;

	explicit c_llvm_compiler_interface(const char* executable_path, const char* reflection_source_file);
	~c_llvm_compiler_interface();

	void register_ast_source_generator(c_legacy_ast_source_generator* source_generator);
	void set_source_file(std::string source_file);
	void add_quote_include_directory(std::string directory);
	void add_system_include_directory(std::string directory);
	void add_macro(std::string macro);
	void add_command_line(std::string command_line);
	int run();

	virtual c_reflection_type_container* create_reflected_type(
		clang::ASTContext& ast_context,
		const clang::QualType* record_qualified_type,
		const clang::RecordDecl& record_declaration,
		bool is_primitive = false) = 0;

protected:
	int execute_llvm_compiler();
	virtual void execute_type_generator() = 0;
	void execute_source_generator(c_legacy_ast_source_generator* source_generator);

	static clang::LangOptions const k_clang_language_options;
	static clang::PrintingPolicy const k_clang_printing_policy;

	std::vector<c_reflection_type_container*> reflection_type_containers;
	std::vector<c_legacy_ast_source_generator*> ast_source_generators;
	std::string const executable_path;
	std::string const reflection_source_file;
	std::string source_file;
	std::vector<std::string> command_line;
};
