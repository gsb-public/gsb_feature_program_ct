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
  $field_group->identifier = 'group_ctas|node|program|form';
  $field_group->group_name = 'group_ctas';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Call-to-Actions (CTAs)',
    'weight' => '25',
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
  $field_group->identifier = 'group_featured_item|node|program|form';
  $field_group->group_name = 'group_featured_item';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Featured Item',
    'weight' => '22',
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
  $field_group->identifier = 'group_key_benefits|node|program|form';
  $field_group->group_name = 'group_key_benefits';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Key Benefits',
    'weight' => '17',
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
  $field_group->identifier = 'group_learn_more|node|program|form';
  $field_group->group_name = 'group_learn_more';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Learn More',
    'weight' => '24',
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
  $field_group->identifier = 'group_overview|node|program|form';
  $field_group->group_name = 'group_overview';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Overview',
    'weight' => '16',
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
  $field_group->identifier = 'group_related_content|node|program|form';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related Content',
    'weight' => '27',
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

  // Translatables
  // Included for use with string extractors like potx.
  t('Call-to-Actions (CTAs)');
  t('Featured Item');
  t('Key Benefits');
  t('Learn More');
  t('Overview');
  t('Related');
  t('Related Content');

  return $field_groups;
}
