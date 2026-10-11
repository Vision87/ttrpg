"""Run the repository's standard-library test functions without external tooling."""

from __future__ import annotations

import importlib


TESTS = [
    ("renderer_contract_poc", ["main"]),
    ("hybrid_persistence_poc", ["main"]),
    ("shared_conventions_poc", ["main"]),
    ("package_resolver_test", ["test_package_resolution_and_operations", "test_missing_dependency_is_actionable"]),
    ("rules_schema_test", [
        "test_representative_definition_validates",
        "test_invalid_definition_reports_field",
        "test_generalized_ruleset_package_dice_models",
        "test_invalid_dice_model_rejected",
    ]),
    ("evaluator_test", [
        "test_formula_is_deterministic_and_explainable",
        "test_unsafe_formula_is_rejected",
        "test_dynamic_system_stat_evaluation",
    ]),
    ("sandbox_test", ["test_sandbox_accepts_granted_operations", "test_sandbox_rejects_ungranted_operations_without_state_access"]),
    ("content_seed_test", [
        "test_seeded_core_and_selected_content_resolve",
        "test_dark_heresy_core_package_resolves",
    ]),
    ("character_model_test", ["test_derived_values_recalculate_from_explicit_choices", "test_presentation_is_separate_from_mechanics"]),
    ("template_test", ["test_template_application_is_a_copy", "test_personal_template_preserves_creation_inputs_not_campaign_state"]),
    ("builder_test", ["test_beginner_builder_starts_from_template", "test_expert_builder_requires_a_valid_draft"]),
    ("expert_builder_test", ["test_homebrew_policy_exposes_prerequisite_warning"]),
    ("equipment_test", ["test_equipment_budget_and_proficiency", "test_loadout_is_named_and_reusable"]),
    ("presentation_test", ["test_presentation_profile_updates_without_rules_data"]),
    ("character_store_test", ["test_character_round_trip_preserves_revision_and_references"]),
    ("campaign_model_test", ["test_campaign_records_locked_packages_and_policy", "test_incarnation_state_is_campaign_local"]),
    ("compatibility_test", ["test_missing_custom_package_blocks_play_and_supports_read_only_preview", "test_migration_creates_a_new_branch_and_preserves_source"]),
    ("session_runtime_test", ["test_authorized_action_is_atomic_and_replayable", "test_unauthorized_action_is_rejected_without_state_change"]),
    ("session_sync_test", ["test_duplicate_submission_does_not_duplicate_event"]),
    ("controller_authorization_test", [
        "test_gm_controller_omniscient_actions",
        "test_player_controller_restricted_permissions",
        "test_autonomous_director_controller_permissions",
    ]),
    ("snapshot_visibility_test", [
        "test_hiding_unrevealed_monsters_and_tiles_from_player_snapshot",
    ]),
    ("combat_sequencing_test", [
        "test_universal_initiative_sorting_and_turn_progression",
    ]),
    ("solo_oracle_test", [
        "test_oracle_determines_probabilistic_narrative_outcomes",
        "test_oracle_scene_advancement_and_interruption",
        "test_autonomous_director_session_submission",
    ]),
    ("npc_combat_ai_test", [
        "test_npc_melee_movement_and_attack_turn",
        "test_npc_ranged_attack_without_closing_distance",
    ]),
    ("projections_test", ["test_2d_and_3d_projections_share_authoritative_state", "test_immersive_projection_uses_fallback_asset", "test_tactical_projection_reports_out_of_range_target"]),
    ("entry_test", ["test_incompatible_character_can_preview_but_not_play"]),
    ("assets_test", ["test_asset_revision_and_renderer_fallback", "test_invalid_asset_metadata_is_rejected"]),
    ("presentation_resolver_test", ["test_asset_reference_stays_pinned_until_explicit_update", "test_missing_presentation_asset_is_diagnostic_only"]),
    ("integration_test", ["test_beginner_character_to_2d_and_3d_play", "test_homebrew_character_is_blocked_and_branchable", "test_cross_campaign_state_and_asset_independence"]),
    ("unity_client_contract_test", ["test_unity_client_contract_files_exist", "test_unity_client_keeps_rules_out_of_projections"]),
    ("multimedia_presentation_test", [
        "test_presentation_event_mapping_registry",
        "test_token_animation_state_machine_transitions",
        "test_spatial_3d_audio_and_ambient_soundscapes",
        "test_visual_fx_particle_and_aoe_bounds",
    ]),
    ("resolution_test", [
        "test_d20_resolution_and_modifier_stacking",
        "test_d100_roll_under_and_degrees_of_success",
        "test_dice_pool_resolution",
    ]),
    ("quest_test", [
        "test_quest_text_parsing_to_ism",
        "test_board_grid_synthesis_and_topology",
        "test_npc_generation_with_ruleset_definitions",
        "test_party_entry_anchors_and_deployment",
        "test_interactive_hazard_and_trigger_synthesis",
    ]),
    ("character_suite_test", [
        "test_ruleset_driven_creation_workflow_dnd_and_dark_heresy",
        "test_presentation_profile_customization_and_validation",
        "test_ruleset_validated_equipment_and_slots",
        "test_talent_and_feat_prerequisite_validation",
    ]),
    ("platform_e2e_integration_test", [
        "test_e2e_solo_session_ingestion_and_ai_combat",
        "test_e2e_multi_user_session_synchronization_and_fog_of_war",
    ]),
]


def main() -> None:
    for module_name, functions in TESTS:
        module = importlib.import_module(f"tests.{module_name}")
        for function_name in functions:
            getattr(module, function_name)()
    print(f"all standard-library checks passed ({sum(len(items) for _, items in TESTS)} checks)")


if __name__ == "__main__":
    main()
