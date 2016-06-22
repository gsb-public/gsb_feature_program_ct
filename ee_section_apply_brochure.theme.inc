<?php

function gsb_feature_program_ct_preprocess_gsb_feature_program_ct_ee_section_apply_brochure(&$vars) {

  $node = menu_get_object();

  if (empty($node)) {
    return;
  }

  if ($node->type != 'program' && $node->type != 'program_panelized_page') {
    return;
  }

  if ($node->type == 'program_panelized_page') {
    $program_id = $node->field_program[$node->language][0]['target_id'];
    $node = node_load($program_id);
  }

  $language = $node->language;

  $nid = $node->nid;
  $node_wrapper = entity_metadata_wrapper('node', $nid);
  $link_apply_button = $node_wrapper->field_link_apply_button->value();
  $program_category = $node_wrapper->field_program_category->value();
  if ($program_category) {
    $program_category = $program_category->name;
  }
  $prequalification_url = $node_wrapper->field_prequalification_url->value();

  $brochure_option = $node_wrapper->field_brochure_options->value();
  $download_brochure_link = $node_wrapper->field_download_brochure_link->value();
  $brochure_pdf = $node_wrapper->field_brochure_pdf->value();
  $link_options = array(
    'brochure_link_pdf',
    'brochure_link_ee_lead_form',
    'brochure_link_other'
  );
  $display_brochure = FALSE;
  if (in_array($brochure_option, $link_options)) {
    $attributes = array();
    $query = array();
    if ($brochure_option == 'brochure_link_pdf' && !empty($brochure_pdf)) {
      $path = file_create_url($brochure_pdf['uri']);
      //$attributes['target'] = 'blank';
      $display_brochure = TRUE;
    } elseif ($brochure_option == 'brochure_link_ee_lead_form' && !empty($brochure_pdf)) {
      $path = '/exec-ed/programs/download-brochure';
      $query['pid'] = $nid;
      //$attributes['target'] = 'blank';
      $display_brochure = TRUE;
    }
    elseif (!empty($download_brochure_link['url'])) {
      $attributes = $download_brochure_link['attributes'];
      $path = $download_brochure_link['url'];
      $display_brochure = TRUE;
    }
    if ($display_brochure) {
      $attributes['class'] = array('ee-section-apply-brochure-download-link');
      $vars['ee_section_apply_brochure_brochure_download_link'] = l(t('Download Brochure'), $path, array(
        'attributes' => $attributes,
        'query' => $query
      ));
    }
  }
  else {
    $vars['ee_section_apply_brochure_brochure_download_link'] = null;
  }

  // Lookup the program instances for this program
  $query = db_select('node', 'n');
  $query->fields('n', array('nid', 'status', 'type'));
  $query->join('field_data_field_program', 'fp', "n.nid = fp.entity_id AND fp.entity_type = 'node' AND fp.deleted = '0'");
  $query->fields('fp', array('entity_id', 'entity_type', 'deleted', 'field_program_target_id'));
  $query->join('node', 'nodefp', 'fp.field_program_target_id = nodefp.nid');
  $query->fields('nodefp', array('nid'));
  $query->join('field_data_field_instance_date', 'fid', "n.nid = fid.entity_id AND fid.entity_type = 'node' AND fid.deleted = '0'");
  $query->fields('fid', array('field_instance_date_value'));
  $query->join('field_data_field_display_on_finder', 'dof', "n.nid = dof.entity_id AND dof.entity_type = 'node' AND dof.deleted = '0'");
  $query->fields('dof', array('field_display_on_finder_value'));
  $query->join('field_data_field_is_application_open', 'ao', "n.nid = ao.entity_id AND ao.entity_type = 'node' AND ao.deleted = '0'");
  $query->fields('ao', array('field_is_application_open_value'));
  $query->condition('nodefp.nid', $nid);
  $query->condition('n.status', '1');
  $query->condition('n.type', 'program_instance');
  $query->condition('dof.field_display_on_finder_value', '1');
  $query->condition('ao.field_is_application_open_value', '1');
  $query->orderBy('fid.field_instance_date_value', 'ASC');
  $query->range(0,1);
  $results = $query->execute();

  $vars['ee_section_apply_brochure_apply_button'] = null;
  $vars['ee_section_pre_qualification_link'] = null;
  foreach ($results as $record) {
    $instance_wrapper = entity_metadata_wrapper('node', $record->nid);
    $display_on_finder = $instance_wrapper->field_display_on_finder->value();
    $is_application_open = $instance_wrapper->field_is_application_open->value();
    if ($display_on_finder && $is_application_open) {
      $apply_button_url = '';
      $query = '';
      if ($program_category == 'Exec Ed Program') {
        $apply_button_url = '/exec-ed/admission';
        $query = array('program' => $nid);
      }
      else if (!empty($link_apply_button['url'])) {
        $apply_button_url = $link_apply_button['url'];
      }
      $link = array();
      $link['text'] = t('Apply');
      $link['path'] = $apply_button_url;
      if ($query != '') {
        $link['options']['query'] = $query;
      }
      $link['options']['html'] = null;
      $link['options']['attributes'] = $link_apply_button['attributes'];
      $link['options']['attributes']['class'] = array('ee-section-apply-brochure-apply-button-link');
      $vars['ee_section_apply_brochure_apply_button'] = theme('link', $link);
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
  }
}
