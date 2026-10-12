using System;
using UnityEngine;

[Serializable]
public class SessionSnapshotDto
{
    public string session_id;
    public EntityDto[] entities;
    public TilemapDto tilemap;
}

[Serializable]
public class TilemapDto
{
    public int width;
    public int height;
    public TileDto[] tiles;
}

[Serializable]
public class TileDto
{
    public int x;
    public int y;
    public string terrain;
    public bool walkable;
    public bool blocks_vision;
}

[Serializable]
public class EntityDto
{
    public string id;
    public string kind;
    public string name;
    public PositionDto position;
    public int hit_points;
    public string animation_state;
    public CharacterPresentationDto presentation;
}

[Serializable]
public class CharacterPresentationDto
{
    public string portrait;
    public string token;
    public string token_frame;
    public string model;
    public float scale;
    public string animation_style;
}

[Serializable]
public class ThemeTokensDto
{
    public string background;
    public string surface;
    public string primary;
    public string secondary;
    public string accent;
    public string text;
}

[Serializable]
public class ThemeAssetDto
{
    public string slot;
    public string asset;
}

[Serializable]
public class ThemeDiagnosticDto
{
    public string code;
    public string slot;
    public string asset;
}

[Serializable]
public class ThemeDto
{
    public ThemeTokensDto tokens;
    public ThemeAssetDto[] assets;
    public ThemeDiagnosticDto[] diagnostics;
}

[Serializable]
public class PositionDto
{
    public int x;
    public int y;
    public int z;
}

[Serializable]
public class AudioCueDto
{
    public string sound_ref;
    public PositionDto position;
    public float volume;
    public bool spatial;
}

[Serializable]
public class FxCueDto
{
    public string particle_ref;
    public PositionDto position;
    public PositionDto origin;
    public float duration;
    public float aoe_radius;
}

[Serializable]
public class AnimationCueDto
{
    public string entity_id;
    public string clip;
    public float duration;
}

[Serializable]
public class SessionEventDto
{
    public string id;
    public string type;
    public string actor_id;
    public string target_id;
    public PositionDto position;
    public int amount;
    public string damage_type;
    public AnimationCueDto animation_cue;
    public AudioCueDto audio_cue;
    public FxCueDto fx_cue;
}

[Serializable]
public class SessionEnvelopeDto
{
    public SessionSnapshotDto snapshot;
    public SessionEventDto[] events;
    public ThemeDto theme;
}

[Serializable]
public class RulesetOptionDto
{
    public string id;
    public string version;
    public string name;
    public ThemeDto theme;
    public CharacterTemplateOptionDto[] templates;
}

[Serializable]
public class CharacterTemplateOptionDto
{
    public string id;
    public string name;
}

[Serializable]
public class RulesetListDto
{
    public RulesetOptionDto[] rulesets;
}

[Serializable]
public class CreationOptionDto
{
    public string id;
    public string label;
    public string parent_id;
    public string detail;
    public string description;
    public CreationPrerequisiteDto[] prerequisites;
    public bool trained_only;
    public bool is_class_skill;
    public int maximum_ranks;
    public int cost_per_rank;
    public float ranks;
    public bool language_skill;
}

[Serializable]
public class CreationPrerequisiteDto
{
    public string rule;
    public string definition_id;
    public string skill_id;
    public int minimum;
    public string description;
}

[Serializable]
public class CreationFieldDto
{
    public string id;
    public string label;
    public string type;
    public string attribute;
    public string category;
    public string definition_type;
    public string skill_selection;
    public string target;
    public string slot;
    public int minimum;
    public int maximum;
    public int minimum_length;
    public int maximum_length;
    public bool required;
    public bool multiple;
    public AbilityRollConfigurationDto roll;
    public CreationOptionDto[] options;
}

[Serializable]
public class AbilityRollConfigurationDto
{
    public int dice_count;
    public int die_sides;
    public int drop_lowest;
    public bool allow_reroll;
}

[Serializable]
public class CreationStepDto
{
    public string id;
    public string label;
    public CreationFieldDto[] fields;
}

[Serializable]
public class CreationFlowDto
{
    public string[] validation_rules;
    public CreationStepDto[] steps;
    public CreationScoreGroupDto[] score_groups;
}

[Serializable]
public class CreationScoreGroupDto
{
    public string id;
    public string[] field_ids;
    public bool allow_reroll;
}

[Serializable]
public class RulesetFlowDto
{
    public string ruleset_id;
    public CreationFlowDto creation_flow;
    public CharacterTemplateOptionDto[] templates;
    public ThemeDto theme;
}

[Serializable]
public class DraftFieldValueDto
{
    public string field_id;
    public string text_value;
    public string[] selected_values;
    public SkillAllocationDto skill_allocation;
    public float number_value;
    public bool is_number;
    public int[] roll_dice;
    public int[] roll_dropped;
    public int roll_score;
    public int roll_count;
}

[Serializable]
public class SkillAllocationDto
{
    public string class_name;
    public int available_points;
    public float spent_points;
    public SkillAllocationOptionDto[] options;
}

[Serializable]
public class SkillAllocationOptionDto
{
    public string skill_id;
    public string label;
    public string detail;
    public bool is_class_skill;
    public int maximum_ranks;
    public int cost_per_rank;
    public float ranks;
    public bool language_skill;
}

[Serializable]
public class SkillRankEntryDto
{
    public string skill_id;
    public float ranks;
}

[Serializable]
public class SkillRanksFieldRequestDto
{
    public string field_id;
    public SkillRankEntryDto[] value;
}

[Serializable]
public class DraftRecordDto
{
    public string id;
    public string name;
    public string ruleset_id;
    public int current_step_index;
    public string template_id;
    public AbilityRollEventDto[] ability_roll_events;
}

[Serializable]
public class AbilityRollEventDto
{
    public string scope;
    public string field_id;
    public string group_id;
}

[Serializable]
public class ValidationIssueDto
{
    public string code;
    public string severity;
    public string path;
    public string message;
}

[Serializable]
public class ReviewDto
{
    public bool can_finalize;
    public ValidationIssueDto[] issues;
}

[Serializable]
public class DraftResponseDto
{
    public DraftRecordDto draft;
    public string current_step;
    public DraftFieldValueDto[] field_values;
    public ReviewDto review;
    public ThemeDto theme;
}

[Serializable]
public class DraftListDto
{
    public DraftRecordDto[] drafts;
}

[Serializable]
public class CreateDraftRequestDto
{
    public string ruleset_id;
    public string name;
    public string policy;
    public string template_id;
}

[Serializable]
public class StringFieldRequestDto
{
    public string field_id;
    public string value;
}

[Serializable]
public class IntegerFieldRequestDto
{
    public string field_id;
    public int value;
}

[Serializable]
public class RollFieldRequestDto
{
    public string field_id;
}

[Serializable]
public class RollGroupRequestDto
{
    public string group_id;
}

[Serializable]
public class FloatFieldRequestDto
{
    public string field_id;
    public float value;
}

[Serializable]
public class MultipleChoiceFieldRequestDto
{
    public string field_id;
    public string[] value;
}

[Serializable]
public class FinalizedCharacterDto
{
    public CharacterRecordDto character;
}

[Serializable]
public class CharacterRecordDto
{
    public string id;
    public string name;
}
