<?php

function gsb_feature_program_ct_preprocess_gsb_feature_program_ct_fieldset_wrapper(&$vars) {
  if (!empty($vars['']['field_key_benefits_intro']) && !empty($vars['']['field_key_benefits_description'])) {
    $vars['']['#children'] =
      '<div class="show-more-less show-more-less-num-7 show-more-less-min-10">' .
      '<div class="show-more-less-wrapper format-body" style="overflow: hidden;">' . $vars['']['#children'] .
      '</div></div>';
  }
}