<?php
/**
 * @file
 * gsb_feature_program_ct.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_program_ct_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_admin_details|node|program|form';
  $field_group->group_name = 'group_admin_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_administration';
  $field_group->data = array(
    'label' => '',
    'weight' => '8',
    'children' => array(
      0 => 'group_program_category',
      1 => 'group_leadership_level',
      2 => 'group_time_commitment',
      3 => 'group_career_level',
      4 => 'group_key_topics',
      5 => 'group_all_topics',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-admin-details field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_admin_details|node|program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_administration|node|program|form';
  $field_group->group_name = 'group_administration';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Administration',
    'weight' => '1',
    'children' => array(
      0 => 'field_link_single',
      1 => 'field_program_detail',
      2 => 'field_application_open',
      3 => 'field_additional_pages',
      4 => 'gsb_program_instance_listing_eva_field_form',
      5 => 'title',
      6 => 'workbench_access',
      7 => 'group_admin_details',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-administration field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_administration|node|program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_all_topics|node|program|form';
  $field_group->group_name = 'group_all_topics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_admin_details';
  $field_group->data = array(
    'label' => 'All Topics',
    'weight' => '14',
    'children' => array(
      0 => 'field_program_topics',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_all_topics|node|program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_career_level|node|program|form';
  $field_group->group_name = 'group_career_level';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_admin_details';
  $field_group->data = array(
    'label' => 'Career Level',
    'weight' => '11',
    'children' => array(
      0 => 'field_career_level',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_career_level|node|program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctas|node|program|form';
  $field_group->group_name = 'group_ctas';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_overview_htab';
  $field_group->data = array(
    'label' => 'Call-to-Actions (CTAs)',
    'weight' => '16',
    'children' => array(
      0 => 'field_cta1',
      1 => 'field_cta2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ctas field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_ctas|node|program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_curriculum|node|program|form';
  $field_group->group_name = 'group_curriculum';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Curriculum',
    'weight' => '6',
    'children' => array(
      0 => 'field_curriculum_description_1',
      1 => 'field_curriculum_description_2',
      2 => 'field_curriculum_intro',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-curriculum field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_curriculum|node|program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_featured_item|node|program|form';
  $field_group->group_name = 'group_featured_item';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_overview_htab';
  $field_group->data = array(
    'label' => 'Featured Item',
    'weight' => '6',
    'children' => array(
      0 => 'field_featured_event',
      1 => 'field_featured_superhead',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-featured-item field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_featured_item|node|program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_instances|node|program|form';
  $field_group->group_name = 'group_instances';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Instances',
    'weight' => '4',
    'children' => array(),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-instances field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_instances|node|program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_key_benefits|node|program|form';
  $field_group->group_name = 'group_key_benefits';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_overview_htab';
  $field_group->data = array(
    'label' => 'Key Benefits',
    'weight' => '8',
    'children' => array(
      0 => 'field_key_benefits_description',
      1 => 'field_key_benefits_teaser',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-key-benefits field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_key_benefits|node|program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_key_topics|node|program|form';
  $field_group->group_name = 'group_key_topics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_admin_details';
  $field_group->data = array(
    'label' => 'Key Topics',
    'weight' => '13',
    'children' => array(
      0 => 'field_key_program_topics',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_key_topics|node|program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_leadership_level|node|program|form';
  $field_group->group_name = 'group_leadership_level';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_admin_details';
  $field_group->data = array(
    'label' => 'Leadership Level',
    'weight' => '10',
    'children' => array(
      0 => 'field_leadership_level',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_leadership_level|node|program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_learn_more|node|program|form';
  $field_group->group_name = 'group_learn_more';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_overview_htab';
  $field_group->data = array(
    'label' => 'Learn More',
    'weight' => '15',
    'children' => array(
      0 => 'field_learn_more_photo',
      1 => 'field_learn_more_video_title',
      2 => 'field_video_description',
      3 => 'field_video_url',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-learn-more field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_learn_more|node|program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main|node|program|form';
  $field_group->group_name = 'group_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main',
    'weight' => '0',
    'children' => array(
      0 => 'group_administration',
      1 => 'group_overview_htab',
      2 => 'group_instances',
      3 => 'group_participants',
      4 => 'group_curriculum',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-main field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_main|node|program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_overview_htab|node|program|form';
  $field_group->group_name = 'group_overview_htab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Overview',
    'weight' => '3',
    'children' => array(
      0 => 'field_application_requirements',
      1 => 'field_awarded_upon_completion',
      2 => 'field_display_image',
      3 => 'field_event_who_attend',
      4 => 'field_financial_assist_statement',
      5 => 'field_image_key_image',
      6 => 'group_ctas',
      7 => 'group_featured_item',
      8 => 'group_key_benefits',
      9 => 'group_learn_more',
      10 => 'group_overview',
      11 => 'group_related_content',
      12 => 'group_program_lead',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-overview-htab field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_overview_htab|node|program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_overview|node|program|form';
  $field_group->group_name = 'group_overview';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_overview_htab';
  $field_group->data = array(
    'label' => 'Overview',
    'weight' => '7',
    'children' => array(
      0 => 'field_overview_teaser',
      1 => 'field_overview_description',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Overview',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-overview field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_overview|node|program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_participants|node|program|form';
  $field_group->group_name = 'group_participants';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Participants',
    'weight' => '5',
    'children' => array(),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-participants field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_participants|node|program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_program_category|node|program|form';
  $field_group->group_name = 'group_program_category';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_admin_details';
  $field_group->data = array(
    'label' => 'Program Category',
    'weight' => '9',
    'children' => array(
      0 => 'field_program_category',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_program_category|node|program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_program_lead|node|program|form';
  $field_group->group_name = 'group_program_lead';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_overview_htab';
  $field_group->data = array(
    'label' => 'Program Lead',
    'weight' => '11',
    'children' => array(
      0 => 'field_program_contact_link',
      1 => 'field_program_director_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-program-lead field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_program_lead|node|program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|program|form';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_overview_htab';
  $field_group->data = array(
    'label' => 'Related Content',
    'weight' => '18',
    'children' => array(
      0 => 'field_file_unlimited_public',
      1 => 'field_link_unlimited',
      2 => 'field_related_idea_story',
      3 => 'field_related_other_unlimited',
      4 => 'field_related_programs',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-related-content field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_related_content|node|program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_time_commitment|node|program|form';
  $field_group->group_name = 'group_time_commitment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_admin_details';
  $field_group->data = array(
    'label' => 'Time Commitment',
    'weight' => '12',
    'children' => array(
      0 => 'field_part_time_details',
      1 => 'field_time_commitment',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_time_commitment|node|program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_related|node|program|field_program_related';
  $field_group->group_name = 'group_wrapper_related';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'field_program_related';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related',
    'weight' => '0',
    'children' => array(
      0 => 'field_file_unlimited_public',
      1 => 'field_link_unlimited',
      2 => 'field_related_idea_story',
      3 => 'field_related_other_unlimited',
      4 => 'field_related_programs',
      5 => 'related_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-wrapper-related field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_wrapper_related|node|program|field_program_related'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_title|node|program|idea_story_related';
  $field_group->group_name = 'group_wrapper_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'idea_story_related';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Title wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'field_program_category',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Title wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wrapper-title field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_title|node|program|idea_story_related'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Administration');
  t('All Topics');
  t('Call-to-Actions (CTAs)');
  t('Career Level');
  t('Curriculum');
  t('Featured Item');
  t('Instances');
  t('Key Benefits');
  t('Key Topics');
  t('Leadership Level');
  t('Learn More');
  t('Main');
  t('Overview');
  t('Participants');
  t('Program Category');
  t('Program Lead');
  t('Related');
  t('Related Content');
  t('Time Commitment');
  t('Title wrapper');

  return $field_groups;
}
