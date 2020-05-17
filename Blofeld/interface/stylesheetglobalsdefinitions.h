#pragma once

namespace blofeld
{

	extern const char* text_case_enum_strings[];
	extern s_string_list_definition text_case_enum;
	extern const char* justification_enum_strings[];
	extern s_string_list_definition justification_enum;
	extern const char* alignment_enum_strings[];
	extern s_string_list_definition alignment_enum;
	extern const char* drop_shadow_style_enum_strings[];
	extern s_string_list_definition drop_shadow_style_enum;
	extern const char* style_sheet_language_enum_definition_strings[];
	extern s_string_list_definition style_sheet_language_enum_definition;
	extern const char* gradient_shape_enum_strings[];
	extern s_string_list_definition gradient_shape_enum;

	constexpr unsigned long STYLE_SHEET_LIST_TAG = 'uiss';

	extern s_tag_group style_sheet_list_group;

	extern s_tag_block_definition style_sheet_list_block_block;
	extern s_tag_struct UserInterfaceStyleSheetLanguagesBlock_block_struct;
	extern s_tag_block_definition UserInterfaceStyleSheetLanguagesBlock_block;
	extern s_tag_struct UserInterfaceStyleSheetsFontBlock_block_struct;
	extern s_tag_block_definition UserInterfaceStyleSheetsFontBlock_block;
	extern s_tag_struct UserInterfaceStyleSheetFontIdBlock_block_struct;
	extern s_tag_block_definition UserInterfaceStyleSheetFontIdBlock_block;
	extern s_tag_struct UserInterfaceStyleSheetTextCaseBlock_block_struct;
	extern s_tag_block_definition UserInterfaceStyleSheetTextCaseBlock_block;
	extern s_tag_struct UserInterfaceStyleSheetJustificationBlock_block_struct;
	extern s_tag_block_definition UserInterfaceStyleSheetJustificationBlock_block;
	extern s_tag_struct UserInterfaceStyleSheetAlignmentBlock_block_struct;
	extern s_tag_block_definition UserInterfaceStyleSheetAlignmentBlock_block;
	extern s_tag_struct UserInterfaceStyleSheetScaleBlock_block_struct;
	extern s_tag_block_definition UserInterfaceStyleSheetScaleBlock_block;
	extern s_tag_struct UserInterfaceStyleSheetFixedHeightBlock_block_struct;
	extern s_tag_block_definition UserInterfaceStyleSheetFixedHeightBlock_block;
	extern s_tag_struct UserInterfaceStyleSheetsVisualBlock_block_struct;
	extern s_tag_block_definition UserInterfaceStyleSheetsVisualBlock_block;
	extern s_tag_struct UserInterfaceStyleSheetDropShadowStyleBlock_block_struct;
	extern s_tag_block_definition UserInterfaceStyleSheetDropShadowStyleBlock_block;
	extern s_tag_struct UserInterfaceStyleSheetColorBlock_block_struct;
	extern s_tag_block_definition UserInterfaceStyleSheetColorBlock_block;
	extern s_tag_struct UserInterfaceStyleSheetGradientBlock_block_struct;
	extern s_tag_block_definition UserInterfaceStyleSheetGradientBlock_block;
	extern s_tag_struct UserInterfaceStyleSheetDropshadowBlock_block_struct;
	extern s_tag_block_definition UserInterfaceStyleSheetDropshadowBlock_block;
	extern s_tag_struct UserInterfaceStyleSheetOuterGlowBlock_block_struct;
	extern s_tag_block_definition UserInterfaceStyleSheetOuterGlowBlock_block;

	extern s_tag_struct style_sheet_list_struct_definition_struct_definition; // tag group

} // namespace blofeld

