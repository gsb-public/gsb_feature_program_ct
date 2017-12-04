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
  $field_group->identifier = 'group_additional_pages|node|program|form';
  $field_group->group_name = 'group_additional_pages';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_administration';
  $field_group->data = array(
    'label' => 'Link to an Additional Page',
    'weight' => '6',
    'children' => array(
      0 => 'field_additional_pages',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Link to an Additional Page',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-additional-pages field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_additional_pages|node|program|form'] = $field_group;

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
      2 => 'field_taxonomy_vtab_prefix',
      3 => 'field_pathauto_title_alias',
      4 => 'title',
      5 => 'workbench_access',
      6 => 'group_additional_pages',
      7 => 'group_taxonomy',
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
  $field_group->parent_name = 'group_taxonomy';
  $field_group->data = array(
    'label' => 'All Topics',
    'weight' => '56',
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
  $field_group->identifier = 'group_application_requirements|node|program|form';
  $field_group->group_name = 'group_application_requirements';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_overview_vtab';
  $field_group->data = array(
    'label' => 'Admission & Application',
    'weight' => '22',
    'children' => array(
      0 => 'field_application_requirements',
      1 => 'field_link_apply_button',
      2 => 'field_prequalification_url',
      3 => 'field_sample_application_file',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Admission & Application',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-application-requirements field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_application_requirements|node|program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_awarded_upon_completion|node|program|form';
  $field_group->group_name = 'group_awarded_upon_completion';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_overview_vtab';
  $field_group->data = array(
    'label' => 'Awarded Upon Completion',
    'weight' => '17',
    'children' => array(
      0 => 'field_awarded_upon_completion',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-awarded-upon-completion field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_awarded_upon_completion|node|program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_brochure|node|program|form';
  $field_group->group_name = 'group_brochure';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_overview_vtab';
  $field_group->data = array(
    'label' => 'Brochure & Download Link',
    'weight' => '23',
    'children' => array(
      0 => 'field_brochure_options',
      1 => 'field_brochure_pdf',
      2 => 'field_brochure_program_topics',
      3 => 'field_download_brochure_link',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-brochure field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_brochure|node|program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_career_level|node|program|form';
  $field_group->group_name = 'group_career_level';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_taxonomy';
  $field_group->data = array(
    'label' => 'Career Level',
    'weight' => '53',
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
  $field_group->parent_name = 'group_overview_vtab';
  $field_group->data = array(
    'label' => 'Call-to-Actions (CTAs)',
    'weight' => '20',
    'children' => array(
      0 => 'field_cta1',
      1 => 'field_cta2',
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
    'weight' => '4',
    'children' => array(
      0 => 'field_curriculum_description_1',
      1 => 'field_curriculum_description_2',
      2 => 'field_curriculum_intro',
      3 => 'field_edit_curriculum_page',
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
  $field_group->identifier = 'group_featured_item_vtab|node|program|form';
  $field_group->group_name = 'group_featured_item_vtab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_overview_vtab';
  $field_group->data = array(
    'label' => 'Featured News or Event',
    'weight' => '16',
    'children' => array(
      0 => 'field_featured_event',
      1 => 'field_featured_superhead',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Featured News or Event',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-featured-item-vtab field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_featured_item_vtab|node|program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_images|node|program|form';
  $field_group->group_name = 'group_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_overview_vtab';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '12',
    'children' => array(
      0 => 'field_display_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-images field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_images|node|program|form'] = $field_group;

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
    'weight' => '6',
    'children' => array(
      0 => 'gsb_program_instance_listing_eva_field_form',
    ),
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
  $field_group->identifier = 'group_key_benefits|node|program|default';
  $field_group->group_name = 'group_key_benefits';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Key Benefits',
    'weight' => '2',
    'children' => array(
      0 => 'field_key_benefits_description',
      1 => 'field_key_benefits_intro',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Key Benefits',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-key-benefits field-group-fieldset',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_key_benefits|node|program|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_key_benefits|node|program|form';
  $field_group->group_name = 'group_key_benefits';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_overview_vtab';
  $field_group->data = array(
    'label' => 'Key Benefits',
    'weight' => '14',
    'children' => array(
      0 => 'field_key_benefits_description',
      1 => 'field_key_benefits_intro',
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
  $field_groups['group_key_benefits|node|program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_key_topics|node|program|form';
  $field_group->group_name = 'group_key_topics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_taxonomy';
  $field_group->data = array(
    'label' => 'Key Topics',
    'weight' => '55',
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
  $field_group->identifier = 'group_keyword|node|program|form';
  $field_group->group_name = 'group_keyword';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_taxonomy';
  $field_group->data = array(
    'label' => 'Keyword',
    'weight' => '57',
    'children' => array(
      0 => 'field_tag',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-keyword field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_keyword|node|program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_leadership_level|node|program|form';
  $field_group->group_name = 'group_leadership_level';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_taxonomy';
  $field_group->data = array(
    'label' => 'Leadership Level',
    'weight' => '52',
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
  $field_group->parent_name = 'group_overview_vtab';
  $field_group->data = array(
    'label' => 'Learn More',
    'weight' => '19',
    'children' => array(
      0 => 'field_learn_more_photo',
      1 => 'field_image_or_video',
      2 => 'field_video',
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
      1 => 'group_curriculum',
      2 => 'group_instances',
      3 => 'group_overview_htab',
      4 => 'group_participants',
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
    'weight' => '2',
    'children' => array(
      0 => 'group_overview_vtab',
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
  $field_group->identifier = 'group_overview_tab|node|program|form';
  $field_group->group_name = 'group_overview_tab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_overview_vtab';
  $field_group->data = array(
    'label' => 'Overview Text',
    'weight' => '13',
    'children' => array(
      0 => 'field_overview_description',
      1 => 'field_overview_intro',
      2 => 'field_editorial_summary',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Overview Text',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-overview-tab field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_overview_tab|node|program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_overview_vtab|node|program|form';
  $field_group->group_name = 'group_overview_vtab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_overview_htab';
  $field_group->data = array(
    'label' => '',
    'weight' => '9',
    'children' => array(
      0 => 'group_application_requirements',
      1 => 'group_awarded_upon_completion',
      2 => 'group_brochure',
      3 => 'group_ctas',
      4 => 'group_featured_item_vtab',
      5 => 'group_images',
      6 => 'group_key_benefits',
      7 => 'group_learn_more',
      8 => 'group_overview_tab',
      9 => 'group_program_lead',
      10 => 'group_related_content',
      11 => 'group_who_should',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-overview-vtab field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_overview_vtab|node|program|form'] = $field_group;

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
    'children' => array(
      0 => 'field_participant_description',
      1 => 'field_participant_intro',
      2 => 'field_edit_participants_page',
    ),
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
  $field_group->parent_name = 'group_taxonomy';
  $field_group->data = array(
    'label' => 'Program Category',
    'weight' => '51',
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
  $field_group->parent_name = 'group_overview_vtab';
  $field_group->data = array(
    'label' => 'Program Contact',
    'weight' => '18',
    'children' => array(
      0 => 'field_program_contact_link',
      1 => 'field_program_director_name',
      2 => 'field_program_contact_options',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Program Contact',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
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
  $field_group->parent_name = 'group_overview_vtab';
  $field_group->data = array(
    'label' => 'Related Content',
    'weight' => '21',
    'children' => array(
      0 => 'field_file_unlimited_public',
      1 => 'field_link_unlimited',
      2 => 'field_related_idea_story',
      3 => 'field_related_other_unlimited',
      4 => 'field_related_programs',
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
  $field_groups['group_related_content|node|program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taxonomy|node|program|form';
  $field_group->group_name = 'group_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_administration';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '8',
    'children' => array(
      0 => 'group_all_topics',
      1 => 'group_career_level',
      2 => 'group_key_topics',
      3 => 'group_keyword',
      4 => 'group_leadership_level',
      5 => 'group_program_category',
      6 => 'group_time_commitment',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-taxonomy field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_taxonomy|node|program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_time_commitment|node|program|form';
  $field_group->group_name = 'group_time_commitment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_taxonomy';
  $field_group->data = array(
    'label' => 'Time Commitment',
    'weight' => '54',
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
  $field_group->identifier = 'group_who_should_attend|node|program|default';
  $field_group->group_name = 'group_who_should_attend';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Who Should Attend',
    'weight' => '3',
    'children' => array(
      0 => 'field_event_who_attend',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Who Should Attend',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-who-should-attend field-group-fieldset format-body show-more-less show-more-less-num-7 show-more-less-min-10',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_who_should_attend|node|program|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_who_should_attend|node|program|field_program_who_should_attend';
  $field_group->group_name = 'group_who_should_attend';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'field_program_who_should_attend';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Who Should Attend',
    'weight' => '0',
    'children' => array(
      0 => 'field_event_who_attend',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Who Should Attend',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-who-should-attend field-group-fieldset format-body show-more-less show-more-less-num-7 show-more-less-min-10',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_who_should_attend|node|program|field_program_who_should_attend'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_who_should|node|program|form';
  $field_group->group_name = 'group_who_should';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_overview_vtab';
  $field_group->data = array(
    'label' => 'Who Should Attend',
    'weight' => '15',
    'children' => array(
      0 => 'field_event_who_attend',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-who-should field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_who_should|node|program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_application_req|node|program|default';
  $field_group->group_name = 'group_wrapper_application_req';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_wrapper_learn';
  $field_group->data = array(
    'label' => 'Application Req wrapper',
    'weight' => '65',
    'children' => array(
      0 => 'gsb_program_application_requirements_blurb',
      1 => 'program_application_reqs_header',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Application Req wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wrapper-application-req field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_application_req|node|program|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_curriculum|node|program|default';
  $field_group->group_name = 'group_wrapper_curriculum';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_wrapper_learn';
  $field_group->data = array(
    'label' => 'Curriculum wrapper',
    'weight' => '64',
    'children' => array(
      0 => 'gsb_program_curriculum_blurb',
      1 => 'program_curriculum_header',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Curriculum wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wrapper-curriculum field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_curriculum|node|program|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_featured_item|node|program|default';
  $field_group->group_name = 'group_wrapper_featured_item';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Featured Item wrapper',
    'weight' => '4',
    'children' => array(
      0 => 'field_featured_event',
      1 => 'field_featured_superhead',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Featured Item wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wrapper-featured-item field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_featured_item|node|program|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_learn|node|program|default';
  $field_group->group_name = 'group_wrapper_learn';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Learn More About the Program',
    'weight' => '10',
    'children' => array(
      0 => 'field_additional_pages',
      1 => 'group_wrapper_application_req',
      2 => 'group_wrapper_curriculum',
      3 => 'group_wrapper_participant',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Learn More About the Program',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wrapper-learn field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_learn|node|program|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_participant|node|program|default';
  $field_group->group_name = 'group_wrapper_participant';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_wrapper_learn';
  $field_group->data = array(
    'label' => 'Participant wrapper',
    'weight' => '67',
    'children' => array(
      0 => 'gsb_program_participant_profile_blurb',
      1 => 'program_participant_header',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Participant wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wrapper-participant field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_participant|node|program|default'] = $field_group;

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
  $field_group->identifier = 'group_wrapper_taxonomy|node|program|default';
  $field_group->group_name = 'group_wrapper_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomy wrapper',
    'weight' => '29',
    'children' => array(
      0 => 'field_program_topics',
    ),
    'format_type' => 'gsb_field_formatter_group_comma_separator',
    'format_settings' => array(
      'label' => 'Taxonomy wrapper',
      'instance_settings' => array(
        'item_count' => '0',
        'classes' => 'group-wrapper-taxonomy field-group-gsb_field_formatter_group_comma_separator',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_taxonomy|node|program|default'] = $field_group;

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
  t('Admission & Application');
  t('All Topics');
  t('Application Req wrapper');
  t('Awarded Upon Completion');
  t('Brochure & Download Link');
  t('Call-to-Actions (CTAs)');
  t('Career Level');
  t('Curriculum');
  t('Curriculum wrapper');
  t('Featured Item wrapper');
  t('Featured News or Event');
  t('Images');
  t('Instances');
  t('Key Benefits');
  t('Key Topics');
  t('Keyword');
  t('Leadership Level');
  t('Learn More');
  t('Learn More About the Program');
  t('Link to an Additional Page');
  t('Main');
  t('Overview');
  t('Overview Text');
  t('Participant wrapper');
  t('Participants');
  t('Program Category');
  t('Program Contact');
  t('Related');
  t('Related Content');
  t('Taxonomy');
  t('Taxonomy wrapper');
  t('Time Commitment');
  t('Title wrapper');
  t('Who Should Attend');

  return $field_groups;
}
