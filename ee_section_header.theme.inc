<?php

function gsb_feature_program_ct_preprocess_gsb_feature_program_ct_ee_section_header(&$vars) {

  $node = menu_get_object();

  $language = $node->language;

  if ($node->type == 'program_panelized_page') {
    if (empty($node->field_program[$language][0]['target_id'])) {
      return;
    }
    $program_nid = $node->field_program[$language][0]['target_id'];
    $node = node_load($program_nid);
  }

  if (!empty($node->field_display_image[$language][0])) {
    $alt = !empty($node->field_display_image[$language][0]['alt']) ? $node->field_display_image[$language][0]['alt'] : '';
    $vars['ee_section_header_image'] = theme('image' , array('path' => $node->field_display_image[$language][0]['uri'], 'alt' => $alt));
  }
  if (!empty($node->title)) {
    $vars['ee_section_header_title'] = $node->title;
  }
  $vars['ee_section_header_menu'] = theme('gsb_feature_program_ct_program_menu');

  drupal_add_js(drupal_get_path('module', 'gsb_social') . '/js/gsb_social.js');
  drupal_add_css(drupal_get_path('module', 'gsb_social') . '/css/gsb_social.css');

  $vars['object'] = $node;
  $vars['options'] = array();
  $vars['ee_section_header_social_buttons'] = theme_gsb_social_buttons($vars);
}
