<div class="ee-section-footer">
    <?php if (!empty($ee_section_footer_subject_to_change)) : ?>
      <div class="ee-section-footer-subject-to-change">
        <em><?php print $ee_section_footer_subject_to_change; ?></em>
      </div>
    <?php endif; ?>
  <div class="ee-section-footer-overlay">
    <div class="overlay-inner-wrapper">
      <?php if (!empty($ee_section_footer_title)) : ?>
        <h1 class="ee-section-footer-title"><?php print $ee_section_footer_title; ?></h1>
      <?php endif; ?>
      <?php if (!empty($ee_section_footer_menu)) : ?>
        <div class="ee-section-footer-menu">
          <?php print $ee_section_footer_menu; ?>
        </div>
      <?php endif; ?>
    </div>
  </div>
</div>
