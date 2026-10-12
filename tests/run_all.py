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
    ("creation_flow_schema_test", [
        "test_package_creation_flow_and_theme_validate",
        "test_creation_flow_rejects_unsupported_field_type",
        "test_creation_flow_validates_package_declared_ability_rolls",
        "test_creation_flow_validates_roll_score_groups",
        "test_creation_flow_rejects_duplicate_step_and_invalid_definition_type",
        "test_theme_rejects_untrusted_tokens_and_asset_references",
        "test_theme_accepts_only_finite_local_ui_asset_slots",
        "test_initial_package_flows_match_available_definitions",
        "test_theme_profile_uses_default_and_falls_back_for_missing_assets",
        "test_theme_asset_must_support_requested_renderer",
        "test_theme_ui_assets_resolve_for_ui_and_fall_back_per_slot",
        "test_dnd_package_has_original_summary_for_every_feat",
    ]),
    ("creation_service_test", [
        "test_creation_service_lists_flows_and_runs_template_to_board",
        "test_creation_service_uses_generic_flows_and_validation_for_dark_heresy",
        "test_creation_service_uses_skill_ranks_for_dnd_and_training_for_dark_heresy",
        "test_creation_service_returns_actionable_errors_for_invalid_inputs",
        "test_creation_service_rolls_and_rerolls_individual_ability_scores",
        "test_creation_service_rolls_and_rerolls_ability_score_groups_atomically",
        "test_creation_service_group_roll_failure_preserves_existing_scores",
        "test_individual_roll_requires_score_group_configuration",
    ]),
    ("webgl_service_server_test", [
        "test_webgl_server_serves_api_static_files_and_gzip_headers",
    ]),
    ("evaluator_test", [
        "test_formula_is_deterministic_and_explainable",
        "test_unsafe_formula_is_rejected",
        "test_dynamic_system_stat_evaluation",
        "test_unsupported_stat_formula_is_actionable",
        "test_custom_ruleset_does_not_receive_d20_default_stats",
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
    ("character_store_test", [
        "test_character_round_trip_preserves_revision_and_references",
        "test_store_saves_separate_resumable_drafts_and_pinned_characters",
        "test_store_rejects_unsafe_record_identifiers",
    ]),
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
    ("unity_client_contract_test", [
        "test_unity_client_contract_files_exist",
        "test_unity_client_keeps_rules_out_of_projections",
        "test_unity_client_renders_package_flows_and_ruleset_themes_generically",
        "test_theme_surfaces_and_board_frame_adapt_without_changing_play_surface",
        "test_feat_detail_pane_separates_inspection_from_selection",
    ]),
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
        "test_creation_workflow_uses_package_flow_for_initial_and_new_rulesets",
        "test_package_fields_update_validate_and_finalize_character",
        "test_final_review_reports_prerequisites_provenance_and_package_versions",
        "test_presentation_profile_customization_and_validation",
        "test_ruleset_validated_equipment_and_slots",
        "test_talent_and_feat_prerequisite_validation",
        "test_feat_prerequisite_validation_supports_feats_skills_and_unknown_rules",
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
