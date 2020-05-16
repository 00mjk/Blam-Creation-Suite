#pragma once

namespace blofeld
{

extern s_tag_struct medal_challenge_aggregator_list_struct_definition_struct_definition;
extern s_tag_struct medal_commendation_aggregator_list_struct_definition_struct_definition;
extern s_tag_struct medalAggregator_struct_definition;

extern s_tag_struct medalChallengeAggregator_struct_definition;
extern s_tag_block_definition medalChallengeAggregator;
extern s_tag_struct medalAggregatorEntry_struct_definition;
extern s_tag_block_definition medalAggregatorEntry;
extern s_tag_struct medalCommendationAggregator_struct_definition;
extern s_tag_block_definition medalCommendationAggregator;

constexpr unsigned long MEDAL_CHALLENGE_AGGREGATOR_LIST_TAG = 'mech';

extern s_tag_block_definition medal_challenge_aggregator_list_block;
extern s_tag_group medal_challenge_aggregator_list_group;
constexpr unsigned long MEDAL_COMMENDATION_AGGREGATOR_LIST_TAG = 'meco';

extern s_tag_block_definition medal_commendation_aggregator_list_block;
extern s_tag_group medal_commendation_aggregator_list_group;
} // namespace blofeld
