<?php
/**
 * @file
 * gsb_feature_program_ct.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_program_ct_field_group_info() {
  $export = array();

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
    'weight' => '5',
    'children' => array(
      0 => 'field_overview_teaser',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Overview',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-overview field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_overview|node|program|form'] = $field_group;

  return $export;
}
