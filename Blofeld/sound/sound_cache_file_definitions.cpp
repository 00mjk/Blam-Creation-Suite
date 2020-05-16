#include <blofeld-private-pch.h>

namespace blofeld
{

TAG_STRUCT(cache_file_sound_struct_definition)
{
	FIELD( _field_word_flags, "flags" ),
	FIELD( _field_char_enum, "sound class*" ),
	FIELD( _field_char_integer, "pitch range count" ),
	FIELD( _field_short_integer, "codec index" ),
	FIELD( _field_short_integer, "first pitch range index" ),
	FIELD( _field_short_integer, "first language duration pitch range index" ),
	FIELD( _field_short_integer, "runtime gestalt index storage~" ),
	FIELD( _field_short_integer, "sub priority" ),
	FIELD( _field_short_integer, "playback index" ),
	FIELD( _field_short_integer, "scale index" ),
	FIELD( _field_char_integer, "promotion index" ),
	FIELD( _field_char_integer, "custom playback index" ),
	FIELD( _field_short_integer, "extra info index" ),
	FIELD( _field_pad, "pad", 2 ),
	FIELD( _field_long_integer, "maximum play time:ms" ),
	FIELD( _field_pageable, "sound data resource" ),
	FIELD( _field_terminator )
};

TAG_STRUCT(sound_cache_file_gestalt_struct_definition)
{
	FIELD( _field_block, "codecs", &sound_gestalt_codec_block ),
	FIELD( _field_block, "playbacks", &sound_gestalt_playback_block ),
	FIELD( _field_block, "scales", &sound_gestalt_scale_block ),
	FIELD( _field_block, "import names", &sound_gestalt_import_names_block ),
	FIELD( _field_block, "pitch range distances", &sound_pitch_range_distances_block ),
	FIELD( _field_block, "pitch range parameters", &sound_gestalt_pitch_range_parameters_block ),
	FIELD( _field_block, "pitch ranges", &sound_gestalt_pitch_ranges_block ),
	FIELD( _field_block, "permutations", &sound_gestalt_permutations_block ),
	FIELD( _field_block, "permutation languages", &sound_gestalt_permutation_languages_block ),
	FIELD( _field_block, "custom playbacks", &sound_gestalt_custom_playback_block ),
	FIELD( _field_block, "language durations", &sound_language_info_block ),
	FIELD( _field_block, "runtime permutation flags", &sound_gestalt_runtime_permutation_bit_vector_block ),
	FIELD( _field_data, "naive sample data" ),
	FIELD( _field_long_integer, "no one listens to me" ),
	FIELD( _field_long_integer, "but now I\'m used to it" ),
	FIELD( _field_block, "chunks", &sound_permutation_chunk_block ),
	FIELD( _field_block, "promotions", &sound_gestalt_promotions_block ),
	FIELD( _field_block, "facial animations", &sound_gestalt_facial_animation_block ),
	FIELD( _field_block, "layer markers", &sound_gestalt_layer_markers_block ),
	FIELD( _field_terminator )
};

TAG_BLOCK(sound_gestalt_codec_block, SHORT_MAX)
{
	FIELD( _field_char_enum, "sample rate*" ),
	FIELD( _field_char_enum, "encoding*" ),
	FIELD( _field_char_enum, "compression*" ),
	FIELD( _field_terminator )
};

TAG_BLOCK(sound_gestalt_playback_block, SHORT_MAX)
{
	FIELD( _field_struct, "playback!", &sound_playback_parameters_struct_struct_definition ),
	FIELD( _field_terminator )
};

TAG_BLOCK(sound_gestalt_scale_block, SHORT_MAX)
{
	FIELD( _field_struct, "scale!", &sound_scale_modifiers_struct_struct_definition ),
	FIELD( _field_terminator )
};

TAG_BLOCK(sound_gestalt_import_names_block, SHORT_MAX)
{
	FIELD( _field_string_id, "import name^" ),
	FIELD( _field_terminator )
};

TAG_BLOCK(sound_gestalt_pitch_range_parameters_block, SHORT_MAX)
{
	FIELD( _field_short_integer, "natural pitch:cents" ),
	FIELD( _field_short_integer, "PAD" ),
	FIELD( _field_short_bounds, "bend bounds:cents#the range of pitches that will be represented using this sample." ),
	FIELD( _field_short_bounds, "max gain pitch bounds:cents" ),
	FIELD( _field_short_bounds, "playback pitch bounds:cents" ),
	FIELD( _field_terminator )
};

TAG_BLOCK(sound_gestalt_pitch_ranges_block, SHORT_MAX)
{
	FIELD( _field_short_block_index, "name^" ),
	FIELD( _field_short_block_index, "parameters" ),
	FIELD( _field_short_integer, "encoded permutation data" ),
	FIELD( _field_short_integer, "first runtime permutation flag index~" ),
	FIELD( _field_long_integer, "encoded first permutation and counts" ),
	FIELD( _field_terminator )
};

TAG_BLOCK(sound_gestalt_permutations_block, k_maximum_sound_cache_file_gestalt_permutations)
{
	FIELD( _field_short_block_index, "name^" ),
	FIELD( _field_short_integer, "encoded skip fraction" ),
	FIELD( _field_long_integer, "uncompressed sample count" ),
	FIELD( _field_long_integer, "first chunk index" ),
	FIELD( _field_short_integer, "chunk count" ),
	FIELD( _field_char_integer, "encoded gain:dB" ),
	FIELD( _field_char_integer, "permutation info index" ),
	FIELD( _field_word_integer, "first layer marker index" ),
	FIELD( _field_word_integer, "layer marker count" ),
	FIELD( _field_terminator )
};

TAG_BLOCK(sound_gestalt_permutation_languages_block, k_maximum_sound_cache_file_gestalt_permutation_languages)
{
	FIELD( _field_long_integer, "permutation index" ),
	FIELD( _field_long_integer, "english uncompressed sample count" ),
	FIELD( _field_long_integer, "english first chunk index" ),
	FIELD( _field_long_integer, "english chunk count" ),
	FIELD( _field_long_integer, "japanese uncompressed sample count" ),
	FIELD( _field_long_integer, "japanese first chunk index" ),
	FIELD( _field_long_integer, "japanese chunk count" ),
	FIELD( _field_long_integer, "german uncompressed sample count" ),
	FIELD( _field_long_integer, "german first chunk index" ),
	FIELD( _field_long_integer, "german chunk count" ),
	FIELD( _field_long_integer, "french uncompressed sample count" ),
	FIELD( _field_long_integer, "french first chunk index" ),
	FIELD( _field_long_integer, "french chunk count" ),
	FIELD( _field_long_integer, "spanish uncompressed sample count" ),
	FIELD( _field_long_integer, "spanish first chunk index" ),
	FIELD( _field_long_integer, "spanish chunk count" ),
	FIELD( _field_long_integer, "mexican_spanish uncompressed sample count" ),
	FIELD( _field_long_integer, "mexican_spanish first chunk index" ),
	FIELD( _field_long_integer, "mexican_spanish chunk count" ),
	FIELD( _field_long_integer, "italian uncompressed sample count" ),
	FIELD( _field_long_integer, "italian first chunk index" ),
	FIELD( _field_long_integer, "italian chunk count" ),
	FIELD( _field_long_integer, "korean uncompressed sample count" ),
	FIELD( _field_long_integer, "korean first chunk index" ),
	FIELD( _field_long_integer, "korean chunk count" ),
	FIELD( _field_long_integer, "traditional_chinese uncompressed sample count" ),
	FIELD( _field_long_integer, "traditional_chinese first chunk index" ),
	FIELD( _field_long_integer, "traditional_chinese chunk count" ),
	FIELD( _field_long_integer, "simplified_chinese uncompressed sample count" ),
	FIELD( _field_long_integer, "simplified_chinese first chunk index" ),
	FIELD( _field_long_integer, "simplified_chinese chunk count" ),
	FIELD( _field_long_integer, "portuguese uncompressed sample count" ),
	FIELD( _field_long_integer, "portuguese first chunk index" ),
	FIELD( _field_long_integer, "portuguese chunk count" ),
	FIELD( _field_long_integer, "polish uncompressed sample count" ),
	FIELD( _field_long_integer, "polish first chunk index" ),
	FIELD( _field_long_integer, "polish chunk count" ),
	FIELD( _field_long_integer, "russian uncompressed sample count" ),
	FIELD( _field_long_integer, "russian first chunk index" ),
	FIELD( _field_long_integer, "russian chunk count" ),
	FIELD( _field_long_integer, "danish uncompressed sample count" ),
	FIELD( _field_long_integer, "danish first chunk index" ),
	FIELD( _field_long_integer, "danish chunk count" ),
	FIELD( _field_long_integer, "finnish uncompressed sample count" ),
	FIELD( _field_long_integer, "finnish first chunk index" ),
	FIELD( _field_long_integer, "finnish chunk count" ),
	FIELD( _field_long_integer, "dutch uncompressed sample count" ),
	FIELD( _field_long_integer, "dutch first chunk index" ),
	FIELD( _field_long_integer, "dutch chunk count" ),
	FIELD( _field_long_integer, "norwegian uncompressed sample count" ),
	FIELD( _field_long_integer, "norwegian first chunk index" ),
	FIELD( _field_long_integer, "norwegian chunk count" ),
	FIELD( _field_terminator )
};

TAG_BLOCK(sound_gestalt_custom_playback_block, SHORT_MAX)
{
	FIELD( _field_struct, "playback definition", &platform_sound_playback_struct_struct_definition ),
	FIELD( _field_terminator )
};

TAG_BLOCK(sound_gestalt_runtime_permutation_bit_vector_block, SHORT_MAX)
{
	FIELD( _field_char_integer, "runtime permutation bit vector~!" ),
	FIELD( _field_terminator )
};

TAG_BLOCK(sound_gestalt_promotions_block, 127 + 1)
{
	FIELD( _field_struct, "runtime promotion storage~!", &sound_promotion_parameters_struct_struct_definition ),
	FIELD( _field_terminator )
};

TAG_BLOCK(sound_gestalt_facial_animation_block, SHORT_MAX)
{
	FIELD( _field_pageable, "facial animation resource" ),
	FIELD( _field_terminator )
};

TAG_BLOCK(sound_gestalt_layer_markers_block, SHORT_MAX)
{
	FIELD( _field_long_integer, "sample offset" ),
	FIELD( _field_terminator )
};

TAG_GROUP(cache_file_sound_block, CACHE_FILE_SOUND_TAG)
{
	FIELD( _field_word_flags, "flags" ),
	FIELD( _field_char_enum, "sound class*" ),
	FIELD( _field_char_integer, "pitch range count" ),
	FIELD( _field_short_integer, "codec index" ),
	FIELD( _field_short_integer, "first pitch range index" ),
	FIELD( _field_short_integer, "first language duration pitch range index" ),
	FIELD( _field_short_integer, "runtime gestalt index storage~" ),
	FIELD( _field_short_integer, "sub priority" ),
	FIELD( _field_short_integer, "playback index" ),
	FIELD( _field_short_integer, "scale index" ),
	FIELD( _field_char_integer, "promotion index" ),
	FIELD( _field_char_integer, "custom playback index" ),
	FIELD( _field_short_integer, "extra info index" ),
	FIELD( _field_pad, "pad", 2 ),
	FIELD( _field_long_integer, "maximum play time:ms" ),
	FIELD( _field_pageable, "sound data resource" ),
	FIELD( _field_terminator )
};

TAG_GROUP(sound_cache_file_gestalt_block, SOUND_CACHE_FILE_GESTALT_TAG)
{
	FIELD( _field_block, "codecs", &sound_gestalt_codec_block ),
	FIELD( _field_block, "playbacks", &sound_gestalt_playback_block ),
	FIELD( _field_block, "scales", &sound_gestalt_scale_block ),
	FIELD( _field_block, "import names", &sound_gestalt_import_names_block ),
	FIELD( _field_block, "pitch range distances", &sound_pitch_range_distances_block ),
	FIELD( _field_block, "pitch range parameters", &sound_gestalt_pitch_range_parameters_block ),
	FIELD( _field_block, "pitch ranges", &sound_gestalt_pitch_ranges_block ),
	FIELD( _field_block, "permutations", &sound_gestalt_permutations_block ),
	FIELD( _field_block, "permutation languages", &sound_gestalt_permutation_languages_block ),
	FIELD( _field_block, "custom playbacks", &sound_gestalt_custom_playback_block ),
	FIELD( _field_block, "language durations", &sound_language_info_block ),
	FIELD( _field_block, "runtime permutation flags", &sound_gestalt_runtime_permutation_bit_vector_block ),
	FIELD( _field_data, "naive sample data" ),
	FIELD( _field_long_integer, "no one listens to me" ),
	FIELD( _field_long_integer, "but now I\'m used to it" ),
	FIELD( _field_block, "chunks", &sound_permutation_chunk_block ),
	FIELD( _field_block, "promotions", &sound_gestalt_promotions_block ),
	FIELD( _field_block, "facial animations", &sound_gestalt_facial_animation_block ),
	FIELD( _field_block, "layer markers", &sound_gestalt_layer_markers_block ),
	FIELD( _field_terminator )
};

} // namespace blofeld
