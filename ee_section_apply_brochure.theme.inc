<?php

function gsb_feature_program_ct_preprocess_gsb_feature_program_ct_ee_section_apply_brochure(&$vars) {

  $node = menu_get_object();

  if (empty($node)) {
    return;
  }

  $language = $node->language;

  $nid = $node->nid;

  // Lookup the program instances for this program
  $query = db_select('node', 'n');
  $query->fields('n', array('nid', 'status', 'type'));
  $query->join('field_data_field_program', 'fp', "n.nid = fp.entity_id AND fp.entity_type = 'node' AND fp.deleted = '0'");
  $query->fields('fp', array('entity_id', 'entity_type', 'deleted', 'field_program_target_id'));
  $query->join('node', 'nodefp', 'fp.field_program_target_id = nodefp.nid');
  $query->fields('nodefp', array('nid'));
  $query->join('field_data_field_instance_date', 'fid', "n.nid = fid.entity_id AND fid.entity_type = 'node' AND fid.deleted = '0'");
  $query->fields('fid', array('field_instance_date_value'));
  $query->condition('nodefp.nid', $nid);
  $query->condition('n.status', '1');
  $query->condition('n.type', 'program_instance');
  $query->orderBy('fid.field_instance_date_value', 'ASC');
  $query->range(0,1);
  $results = $query->execute();

  foreach ($results as $record) {
    $instance_wrapper = entity_metadata_wrapper('node', $record->nid);
    $display_on_finder = $instance_wrapper->field_display_on_finder->value();
    $is_application_open = $instance_wrapper->field_is_application_open->value();
    $link_apply_button = $instance_wrapper->field_link_apply_button->value();
    if ($display_on_finder && $is_application_open) {
      $link = array();
      $link['text'] = 'Apply';
      $link['path'] = $link_apply_button['url'];
      $link['options']['html'] = null;
      $link['options']['attributes'] = $link_apply_button['attributes'];
      $link['options']['attributes'] = array('class' => array('ee-section-apply-brochure-apply-button-link'));
      $vars['ee_section_apply_brochure_apply_button'] = theme('link', $link);
    } else {
      $vars['ee_section_apply_brochure_apply_button'] = null;
    }
  }
}