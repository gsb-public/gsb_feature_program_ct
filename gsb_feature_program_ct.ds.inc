<?php
/**
 * @file
 * gsb_feature_program_ct.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gsb_feature_program_ct_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_additional_pages|default';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_additional_pages';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_overview' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_page_link' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h3',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['field_collection_item|field_additional_pages|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|program|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'program';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'program_application_reqs_header' => array(
      'weight' => '71',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
        'conditions' => array(),
      ),
    ),
    'program_curriculum_header' => array(
      'weight' => '65',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
        'conditions' => array(),
      ),
    ),
    'program_participant_header' => array(
      'weight' => '68',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
        'conditions' => array(),
      ),
    ),
    'program_faculty_cta' => array(
      'weight' => '15',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
        'conditions' => array(),
      ),
    ),
    'field_event_who_attend' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Who Should Attend',
          'lb-el' => 'h3',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'show-more-less show-more-less-num-7 show-more-less-min-10',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'ul',
          'fis-cl' => '',
          'fis-at' => '',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'li',
          'fi-cl' => 'show-more-less-wrapper',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_featured_event' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_featured_superhead' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_key_benefits_description' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'show-more-less show-more-less-num-7 show-more-less-min-10',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'show-more-less-wrapper format-body',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_overview_description' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'show-more-less show-more-less-num-7 show-more-less-min-10',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'show-more-less-wrapper format-body',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_program_director_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Contact',
          'lb-el' => 'h3',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_additional_pages' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_key_benefits_intro' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Key Benefits',
          'lb-el' => 'h3',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'format-body',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_overview_intro' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_video' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|program|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|program|field_program_ctas';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'program';
  $ds_fieldsetting->view_mode = 'field_program_ctas';
  $ds_fieldsetting->settings = array(
    'field_application_requirements' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_cta1' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_cta2' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|program|field_program_ctas'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|program|field_program_curriculum';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'program';
  $ds_fieldsetting->view_mode = 'field_program_curriculum';
  $ds_fieldsetting->settings = array(
    'field_curriculum_intro' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|program|field_program_curriculum'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|program|field_program_curriculum_one';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'program';
  $ds_fieldsetting->view_mode = 'field_program_curriculum_one';
  $ds_fieldsetting->settings = array(
    'field_curriculum_description_1' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|program|field_program_curriculum_one'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|program|field_program_curriculum_two';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'program';
  $ds_fieldsetting->view_mode = 'field_program_curriculum_two';
  $ds_fieldsetting->settings = array(
    'field_curriculum_description_2' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|program|field_program_curriculum_two'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|program|field_program_director';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'program';
  $ds_fieldsetting->view_mode = 'field_program_director';
  $ds_fieldsetting->settings = array(
    'field_program_director_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|program|field_program_director'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|program|field_program_related';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'program';
  $ds_fieldsetting->view_mode = 'field_program_related';
  $ds_fieldsetting->settings = array(
    'related_title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
        'conditions' => array(),
      ),
    ),
    'field_file_unlimited_public' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_link_unlimited' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_related_idea_story' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_related_other_unlimited' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_related_programs' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|program|field_program_related'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|program|idea_story_related';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'program';
  $ds_fieldsetting->view_mode = 'idea_story_related';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
        'conditions' => array(),
      ),
    ),
    'field_overview_teaser' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_program_category' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'suffix' => '<span class="pipe">|</span>',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|program|idea_story_related'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|program|program_explore_other';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'program';
  $ds_fieldsetting->view_mode = 'program_explore_other';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h4',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
        'conditions' => array(),
      ),
    ),
    'field_image_key_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|program|program_explore_other'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function gsb_feature_program_ct_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'program_application_reqs_header';
  $ds_field->label = 'Program: Application Reqs Header';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'program|default';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<h3><a href="[node:field-application-requirements:url]" title="Application Requirements">Application Requirements</a></h3>',
      'format' => 'gsb_html_text',
    ),
    'use_token' => 1,
  );
  $export['program_application_reqs_header'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'program_curriculum_header';
  $ds_field->label = 'Program: Curriculum Header';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'program|default';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<h3><a href="curriculum" title="Curriculum">Curriculum</a></h3>',
      'format' => 'gsb_html_text',
    ),
    'use_token' => 0,
  );
  $export['program_curriculum_header'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'program_faculty_cta';
  $ds_field->label = 'Program Faculty CTA';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'program|default';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<div class="program-faculty-cta-wrapper"><div class="program-faculty-cta"><a href="faculty" title="See All Faculty">See All Faculty</a></div></div>',
      'format' => 'gsb_html_text',
    ),
    'use_token' => 0,
  );
  $export['program_faculty_cta'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'program_participant_header';
  $ds_field->label = 'Program: Participant Profile Header';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'program|default';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<h3><a href="participant" title="Participant Profile">Participant Profile</a></h3>',
      'format' => 'gsb_html_text',
    ),
    'use_token' => 0,
  );
  $export['program_participant_header'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'program_programs_cta';
  $ds_field->label = 'Program Programs CTA';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'program|default';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<div class="program-programs-cta-wrapper"><div class="program-programs-cta"><a href="" title="See All Programs">See All Programs</a></div></div>',
      'format' => 'gsb_html_text',
    ),
    'use_token' => 0,
  );
  $export['program_programs_cta'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gsb_feature_program_ct_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_additional_pages|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_additional_pages';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_page_link',
        1 => 'field_overview',
      ),
    ),
    'fields' => array(
      'field_page_link' => 'ds_content',
      'field_overview' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['field_collection_item|field_additional_pages|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|program|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'program';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'program_overview';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_overview_intro',
        1 => 'field_overview_description',
        2 => 'field_key_benefits_intro',
        3 => 'field_key_benefits_description',
        4 => 'field_event_who_attend',
      ),
      'right' => array(
        5 => 'group_wrapper_featured_item',
        6 => 'gsb_program_program_instance_fields',
        7 => 'field_featured_superhead',
        8 => 'field_featured_event',
        9 => 'field_program_director_name',
      ),
      'learn' => array(
        10 => 'field_video',
        11 => 'group_wrapper_learn',
        19 => 'group_wrapper_curriculum',
        20 => 'group_wrapper_application_req',
        21 => 'program_curriculum_header',
        22 => 'gsb_program_curriculum_blurb',
        23 => 'group_wrapper_participant',
        24 => 'field_additional_pages',
        25 => 'program_participant_header',
        26 => 'gsb_program_participant_profile_blurb',
        27 => 'program_application_reqs_header',
        28 => 'gsb_program_application_requirements_blurb',
      ),
      'faculty' => array(
        12 => 'gsb_program_program_instance_faculty_fields',
        14 => 'program_faculty_cta',
      ),
      'footer' => array(
        13 => 'field_program_topics',
        18 => 'group_wrapper_taxonomy',
      ),
      'cta' => array(
        15 => 'field_cta1',
        16 => 'field_cta2',
      ),
      'explore' => array(
        17 => 'gsb_program_explore_more',
      ),
    ),
    'fields' => array(
      'field_overview_intro' => 'left',
      'field_overview_description' => 'left',
      'field_key_benefits_intro' => 'left',
      'field_key_benefits_description' => 'left',
      'field_event_who_attend' => 'left',
      'group_wrapper_featured_item' => 'right',
      'gsb_program_program_instance_fields' => 'right',
      'field_featured_superhead' => 'right',
      'field_featured_event' => 'right',
      'field_program_director_name' => 'right',
      'field_video' => 'learn',
      'group_wrapper_learn' => 'learn',
      'gsb_program_program_instance_faculty_fields' => 'faculty',
      'field_program_topics' => 'footer',
      'program_faculty_cta' => 'faculty',
      'field_cta1' => 'cta',
      'field_cta2' => 'cta',
      'gsb_program_explore_more' => 'explore',
      'group_wrapper_taxonomy' => 'footer',
      'group_wrapper_curriculum' => 'learn',
      'group_wrapper_application_req' => 'learn',
      'program_curriculum_header' => 'learn',
      'gsb_program_curriculum_blurb' => 'learn',
      'group_wrapper_participant' => 'learn',
      'field_additional_pages' => 'learn',
      'program_participant_header' => 'learn',
      'gsb_program_participant_profile_blurb' => 'learn',
      'program_application_reqs_header' => 'learn',
      'gsb_program_application_requirements_blurb' => 'learn',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
      'learn' => 'div',
      'faculty' => 'div',
      'cta' => 'div',
      'explore' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|program|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|program|field_program_ctas';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'program';
  $ds_layout->view_mode = 'field_program_ctas';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_application_requirements',
        1 => 'field_cta1',
        2 => 'field_cta2',
      ),
    ),
    'fields' => array(
      'field_application_requirements' => 'ds_content',
      'field_cta1' => 'ds_content',
      'field_cta2' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|program|field_program_ctas'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|program|field_program_curriculum';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'program';
  $ds_layout->view_mode = 'field_program_curriculum';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_curriculum_intro',
      ),
    ),
    'fields' => array(
      'field_curriculum_intro' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|program|field_program_curriculum'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|program|field_program_curriculum_one';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'program';
  $ds_layout->view_mode = 'field_program_curriculum_one';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_curriculum_description_1',
      ),
    ),
    'fields' => array(
      'field_curriculum_description_1' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|program|field_program_curriculum_one'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|program|field_program_curriculum_two';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'program';
  $ds_layout->view_mode = 'field_program_curriculum_two';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_curriculum_description_2',
      ),
    ),
    'fields' => array(
      'field_curriculum_description_2' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|program|field_program_curriculum_two'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|program|field_program_director';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'program';
  $ds_layout->view_mode = 'field_program_director';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_program_director_name',
      ),
    ),
    'fields' => array(
      'field_program_director_name' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|program|field_program_director'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|program|field_program_related';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'program';
  $ds_layout->view_mode = 'field_program_related';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_wrapper_related',
        1 => 'related_title',
        2 => 'field_related_idea_story',
        3 => 'field_related_other_unlimited',
        4 => 'field_related_programs',
        5 => 'field_link_unlimited',
        6 => 'field_file_unlimited_public',
      ),
    ),
    'fields' => array(
      'group_wrapper_related' => 'ds_content',
      'related_title' => 'ds_content',
      'field_related_idea_story' => 'ds_content',
      'field_related_other_unlimited' => 'ds_content',
      'field_related_programs' => 'ds_content',
      'field_link_unlimited' => 'ds_content',
      'field_file_unlimited_public' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|program|field_program_related'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|program|idea_story_related';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'program';
  $ds_layout->view_mode = 'idea_story_related';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_wrapper_title',
        1 => 'field_program_category',
        2 => 'title',
        3 => 'field_overview_teaser',
      ),
    ),
    'fields' => array(
      'group_wrapper_title' => 'ds_content',
      'field_program_category' => 'ds_content',
      'title' => 'ds_content',
      'field_overview_teaser' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|program|idea_story_related'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|program|program_explore_other';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'program';
  $ds_layout->view_mode = 'program_explore_other';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image_key_image',
        1 => 'title',
      ),
    ),
    'fields' => array(
      'field_image_key_image' => 'ds_content',
      'title' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|program|program_explore_other'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function gsb_feature_program_ct_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'field_program_ctas';
  $ds_view_mode->label = 'Program CTA block';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['field_program_ctas'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'field_program_curriculum';
  $ds_view_mode->label = 'Program Curriculum block intro';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['field_program_curriculum'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'field_program_curriculum_one';
  $ds_view_mode->label = 'Program Curriculum block one';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['field_program_curriculum_one'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'field_program_curriculum_two';
  $ds_view_mode->label = 'Program Curriculum block two';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['field_program_curriculum_two'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'field_program_director';
  $ds_view_mode->label = 'Program Contact block';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['field_program_director'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'field_program_related';
  $ds_view_mode->label = 'Program Related block';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['field_program_related'] = $ds_view_mode;

  return $export;
}
