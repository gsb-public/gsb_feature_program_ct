<?php
/**
 * @file
 * gsb_feature_program_ct.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gsb_feature_program_ct_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__program';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'field_program_curriculum' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'act_project_by_criteria' => array(
        'custom_settings' => FALSE,
      ),
      'act_project_listing' => array(
        'custom_settings' => FALSE,
      ),
      'alumni_name' => array(
        'custom_settings' => FALSE,
      ),
      'alumni_reunion_agenda_list' => array(
        'custom_settings' => FALSE,
      ),
      'compact' => array(
        'custom_settings' => FALSE,
      ),
      'expanded' => array(
        'custom_settings' => FALSE,
      ),
      'views_content_pane' => array(
        'custom_settings' => FALSE,
      ),
      'event_contacts' => array(
        'custom_settings' => FALSE,
      ),
      'event_listing' => array(
        'custom_settings' => FALSE,
      ),
      'event_upcoming' => array(
        'custom_settings' => FALSE,
      ),
      'featured' => array(
        'custom_settings' => FALSE,
      ),
      'alumni_featured_content' => array(
        'custom_settings' => FALSE,
      ),
      'idea_story_latest_stories' => array(
        'custom_settings' => FALSE,
      ),
      'idea_story_related' => array(
        'custom_settings' => TRUE,
      ),
      'idea_story_top_stories' => array(
        'custom_settings' => FALSE,
      ),
      'insight_featured_card' => array(
        'custom_settings' => FALSE,
      ),
      'megamenu' => array(
        'custom_settings' => FALSE,
      ),
      'news_listing' => array(
        'custom_settings' => FALSE,
      ),
      'people_fpp' => array(
        'custom_settings' => FALSE,
      ),
      'phd_job_market_candidate' => array(
        'custom_settings' => FALSE,
      ),
      'featured_program' => array(
        'custom_settings' => FALSE,
      ),
      'media_contact' => array(
        'custom_settings' => FALSE,
      ),
      'program_director' => array(
        'custom_settings' => FALSE,
      ),
      'main_list' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_listing' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'field_program_ctas' => array(
        'custom_settings' => TRUE,
      ),
      'field_program_related' => array(
        'custom_settings' => TRUE,
      ),
      'field_program_director' => array(
        'custom_settings' => TRUE,
      ),
      'field_program_curriculum_one' => array(
        'custom_settings' => TRUE,
      ),
      'field_program_curriculum_two' => array(
        'custom_settings' => TRUE,
      ),
      'program_contact' => array(
        'custom_settings' => FALSE,
      ),
      'program_explore_other' => array(
        'custom_settings' => TRUE,
      ),
      'faculty_leadership' => array(
        'custom_settings' => FALSE,
      ),
      'faculty_one' => array(
        'custom_settings' => FALSE,
      ),
      'faculty_two' => array(
        'custom_settings' => FALSE,
      ),
      'field_program_faculty' => array(
        'custom_settings' => FALSE,
      ),
      'guest_speakers_advisors' => array(
        'custom_settings' => FALSE,
      ),
      'field_program_participants_desc' => array(
        'custom_settings' => TRUE,
      ),
      'field_program_participants_intro' => array(
        'custom_settings' => TRUE,
      ),
      'field_program_participant_intro' => array(
        'custom_settings' => FALSE,
      ),
      'field_program_participant_one' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '4',
        ),
        'title' => array(
          'weight' => '2',
        ),
        'path' => array(
          'weight' => '3',
        ),
        'redirect' => array(
          'weight' => '2',
        ),
        'gsb_program_instance_listing_eva_field_form' => array(
          'weight' => '7',
        ),
        'workbench_access' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(
        'gsb_program_explore_more' => array(
          'teaser' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '16',
            'visible' => TRUE,
          ),
          'program_explore_other' => array(
            'weight' => '22',
            'visible' => FALSE,
          ),
          'field_program_participants_desc' => array(
            'weight' => '34',
            'visible' => FALSE,
          ),
          'field_program_participants_intro' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
          'field_program_curriculum' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'field_program_curriculum_one' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'field_program_curriculum_two' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
        'gsb_program_program_instance_fields' => array(
          'teaser' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
          'program_explore_other' => array(
            'weight' => '23',
            'visible' => FALSE,
          ),
          'field_program_participants_desc' => array(
            'weight' => '26',
            'visible' => FALSE,
          ),
          'field_program_participants_intro' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'field_program_curriculum' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'field_program_curriculum_one' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'field_program_curriculum_two' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
        'gsb_program_program_instance_faculty_fields' => array(
          'default' => array(
            'weight' => '12',
            'visible' => TRUE,
          ),
          'field_program_participants_desc' => array(
            'weight' => '30',
            'visible' => FALSE,
          ),
          'field_program_participants_intro' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'field_program_curriculum' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'field_program_curriculum_one' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'field_program_curriculum_two' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
        'gsb_program_curriculum_blurb' => array(
          'default' => array(
            'weight' => '66',
            'visible' => TRUE,
          ),
          'field_program_participants_desc' => array(
            'weight' => '63',
            'visible' => FALSE,
          ),
          'field_program_participants_intro' => array(
            'weight' => '66',
            'visible' => FALSE,
          ),
          'field_program_curriculum' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'field_program_curriculum_one' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'field_program_curriculum_two' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
        'gsb_program_participant_profile_blurb' => array(
          'default' => array(
            'weight' => '69',
            'visible' => TRUE,
          ),
          'field_program_participants_desc' => array(
            'weight' => '64',
            'visible' => FALSE,
          ),
          'field_program_participants_intro' => array(
            'weight' => '69',
            'visible' => FALSE,
          ),
          'field_program_curriculum' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'field_program_curriculum_one' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'field_program_curriculum_two' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
        'gsb_program_application_requirements_blurb' => array(
          'default' => array(
            'weight' => '72',
            'visible' => TRUE,
          ),
          'field_program_participants_desc' => array(
            'weight' => '65',
            'visible' => FALSE,
          ),
          'field_program_participants_intro' => array(
            'weight' => '72',
            'visible' => FALSE,
          ),
          'field_program_curriculum' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'field_program_curriculum_one' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'field_program_curriculum_two' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
        'gsb_program_topics_location_category' => array(
          'default' => array(
            'weight' => '19',
            'visible' => TRUE,
          ),
          'field_program_participants_desc' => array(
            'weight' => '45',
            'visible' => FALSE,
          ),
          'field_program_participants_intro' => array(
            'weight' => '27',
            'visible' => FALSE,
          ),
          'field_program_curriculum' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'field_program_curriculum_one' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'field_program_curriculum_two' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
        'gsb_program_show_all_programs' => array(
          'default' => array(
            'weight' => '17',
            'visible' => TRUE,
          ),
          'field_program_participants_desc' => array(
            'weight' => '19',
            'visible' => FALSE,
          ),
          'field_program_participants_intro' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'field_program_curriculum' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'field_program_curriculum_one' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'field_program_curriculum_two' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__program'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hs_config_taxonomy-key_program_topic';
  $strongarm->value = array(
    'config_id' => 'taxonomy-key_program_topic',
    'save_lineage' => '0',
    'enforce_deepest' => '0',
    'resizable' => '1',
    'level_labels' => array(
      'status' => 0,
      'labels' => array(
        0 => '',
      ),
    ),
    'dropbox' => array(
      'status' => 1,
      'title' => 'All selections',
      'limit' => '3',
      'reset_hs' => '1',
    ),
    'editability' => array(
      'status' => 0,
      'item_types' => array(
        0 => '',
      ),
      'allowed_levels' => array(
        0 => 1,
      ),
      'allow_new_levels' => 0,
      'max_levels' => '0',
    ),
  );
  $export['hs_config_taxonomy-key_program_topic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hs_config_taxonomy-program_topic';
  $strongarm->value = array(
    'config_id' => 'taxonomy-program_topic',
    'save_lineage' => '0',
    'enforce_deepest' => '0',
    'resizable' => '1',
    'level_labels' => array(
      'status' => 0,
      'labels' => array(
        0 => '',
      ),
    ),
    'dropbox' => array(
      'status' => 1,
      'title' => 'All selections',
      'limit' => '0',
      'reset_hs' => '1',
    ),
    'editability' => array(
      'status' => 0,
      'item_types' => array(
        0 => '',
      ),
      'allowed_levels' => array(
        0 => 1,
      ),
      'allow_new_levels' => 0,
      'max_levels' => '0',
    ),
  );
  $export['hs_config_taxonomy-program_topic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_program';
  $strongarm->value = array();
  $export['menu_options_program'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_program';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_program'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_program';
  $strongarm->value = array(
    0 => 'force_pathauto',
    1 => 'moderation',
    2 => 'revision',
  );
  $export['node_options_program'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_program';
  $strongarm->value = '0';
  $export['node_preview_program'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_program';
  $strongarm->value = 1;
  $export['node_submitted_program'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_program_pattern';
  $strongarm->value = '[node:field-program-category:field-program-listing-page-url:url]/[node:field_pathauto_title_alias]';
  $export['pathauto_node_program_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_node_type_program';
  $strongarm->value = 1;
  $export['workbench_access_node_type_program'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_program';
  $strongarm->value = 'draft';
  $export['workbench_moderation_default_state_program'] = $strongarm;

  return $export;
}
