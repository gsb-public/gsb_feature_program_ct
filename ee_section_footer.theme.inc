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

  drupal_add_js(drupal_get_path('module', 'gsb_social') . '/js/gsb_social.js');
  drupal_add_css(drupal_get_path('module', 'gsb_social') . '/css/gsb_social.css');

  $vars['ee_section_footer_subject_to_change'] = t('Program dates, fees, and faculty subject to change.');
  $vars['ee_section_footer_title'] = $node->title;
  $vars['ee_section_footer_menu'] = theme('gsb_feature_program_ct_program_menu');

  $vars['object'] = $node;
  $vars['options'] = array();
  $vars['ee_section_footer_social_buttons'] = theme_gsb_social_buttons($vars);

}
