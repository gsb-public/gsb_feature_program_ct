<?php

function gsb_feature_program_ct_preprocess_gsb_feature_program_ct_ee_section_header(&$vars) {

  $node = menu_get_object();

  if ($node->type == 'program_panelized_page') {
    $program_nid = $node->field_program['und'][0]['target_id'];
    $node = node_load($program_nid);
  }

  $language = $node->language;

  if (!empty($node->field_display_image[$language][0])) {
    $vars['ee_section_header_image'] = theme('image' , array('path' => $node->field_display_image[$language][0]['uri']));
  }
  $vars['ee_section_header_title'] = $node->title;
  $vars['ee_section_header_follow_us'] = theme('gsb_public_custom_blocks_follow_us');
  $vars['ee_section_header_menu'] = theme('gsb_feature_program_ct_program_menu');
}
