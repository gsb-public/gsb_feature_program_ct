<?php

function gsb_feature_program_ct_preprocess_gsb_feature_program_ct_ee_section_apply_brochure(&$vars) {

  $node = menu_get_object();

  if (empty($node)) {
    return;
  }

  if ($node->type != 'program') {
    return;
  }

  $language = $node->language;

  $nid = $node->nid;
  $node_wrapper = entity_metadata_wrapper('node', $nid);
  $link_apply_button = $node_wrapper->field_link_apply_button->value();
  $prequalification_url = $node_wrapper->field_prequalification_url->value();

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
    $brochure_option = $instance_wrapper->field_brochure_options->value();
    $download_brochure_link = $instance_wrapper->field_download_brochure_link->value();
    $brochure_pdf = $instance_wrapper->field_brochure_pdf->value();
    $link_options = array(
      'brochure_link_pdf',
      'brochure_link_ee_lead_form',
      'brochure_link_other'
    );
    if (in_array($brochure_option, $link_options)) {
      $link = array();
      $link['text'] = 'Download Brochure';
      $link['options']['attributes'] = array();
      if ($brochure_option == 'brochure_link_pdf') {
        $link['path'] = $brochure_pdf['uri'];
      }
      if ($brochure_option == 'brochure_link_ee_lead_form') {
        $link['path'] = '/exec-ed/programs/download-brochure';
      }
      else {
        $link['options']['attributes'] = $download_brochure_link['attributes'];
        $link['path'] = $download_brochure_link['url'];
      }
      $link['options']['html'] = null;
      $link['options']['attributes']['class'] = array('ee-section-apply-brochure-download-link');
      $vars['ee_section_apply_brochure_brochure_download_link'] = theme('link', $link);
    }
    else {
      $vars['ee_section_apply_brochure_brochure_download_link'] = null;
    }
    if ($display_on_finder && $is_application_open && !empty($link_apply_button['url'])) {
      $link = array();
      $link['text'] = t('Apply');
      $link['path'] = $link_apply_button['url'];
      $link['options']['html'] = null;
      $link['options']['attributes'] = $link_apply_button['attributes'];
      $link['options']['attributes']['class'] = array('ee-section-apply-brochure-apply-button-link');
      $vars['ee_section_apply_brochure_apply_button'] = theme('link', $link);
    } else {
      $vars['ee_section_apply_brochure_apply_button'] = null;
    }
    if (!empty($prequalification_url['url'])) {
      $link = array();
      $link['text'] = $prequalification_url['title'];
      $link['path'] = $prequalification_url['url'];
      $link['options']['html'] = $prequalification_url['html'];
      $link['options']['attributes'] = $prequalification_url['attributes'];
      $link['options']['attributes']['class'] = array('ee-section-pre-qualification-link');
      $vars['ee_section_pre_qualification_link'] = theme('link', $link);
    }
    else {
      $vars['ee_section_pre_qualification_link'] = null;
    }
  }
}
