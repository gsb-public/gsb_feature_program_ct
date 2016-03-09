<?php

function gsb_feature_program_ct_preprocess_gsb_feature_program_ct_program_menu(&$vars) {

  $node = menu_get_object();

  $program_node = null;
  if ($node->type == 'program') {
    $program_node = $node;
  }
  else if ($node->type == 'program_instance' || $node->type == 'program_panelized_page') {
    $program_nid = $node->field_program['und'][0]['target_id'];
    $program_node = node_load($program_nid);
  }
  else {
    return;
  }

  $program_path_alias = $program_node->path['alias'];
  $program_path_alias_title = explode('/', $program_path_alias);
  $program_path_alias_title = $program_path_alias_title[sizeof($program_path_alias_title) - 1];

  $path = 'exec-ed/programs/' . $program_path_alias_title;

  $program_links = array(
    'Overview' => '',
    'Curriculum' => 'curriculum',
    'Faculty' => 'faculty',
    'Participant Profile' => 'participant'
  );
  
  $links = array();

  foreach($program_links as $link_title => $path_suffix) {
    $link['text'] = $link_title;
    $link['path'] = $path . '/' . $path_suffix;
    $link['options']['attributes'] = array('class' => array('program_menu_item'));
    $link['options']['html'] = null;
    $links[] = theme('link', $link);
  }

  $wrapper = entity_metadata_wrapper('node', $program_node->nid);
  $additional_pages = $wrapper->field_additional_pages->value();

  if (!empty($additional_pages->field_page_link['und'])) {
    $link = array();
    $link['text'] = $additional_pages->field_page_link['und'][0]['title'];
    $link['path'] = $additional_pages->field_page_link['und'][0]['url'];
    $link['options']['attributes'] = array('class' => array('program_menu_item'));
    $link['options']['html'] = null;
    $links[] = theme('link', $link);
  }
  
  $vars['program_menu'] = theme('item_list', array('items' => $links));
}
