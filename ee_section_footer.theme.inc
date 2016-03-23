<?php

function gsb_feature_program_ct_preprocess_gsb_feature_program_ct_ee_section_footer(&$vars) {

  $node = menu_get_object();

  $language = $node->language;

  if ($node->type == 'program_panelized_page') {
    if (empty($node->field_program[$language][0]['target_id'])) {
      return;
    }
    $program_nid = $node->field_program[$language][0]['target_id'];
    $node = node_load($program_nid);
  }

  if (empty($node)) {
    return;
  }

  $vars['ee_section_footer_subject_to_change'] = t('Program dates, fees, and faculty subject to change.');
  $vars['ee_section_footer_title'] = $node->title;
  $vars['ee_section_footer_menu'] = theme('gsb_feature_program_ct_program_menu');

  $vars['object'] = $node;
}
