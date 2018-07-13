<div class="ee-section-header">
  <?php if (!empty($ee_section_header_image)) : ?>
    <div class="ee-section-header-image">
      <?php print $ee_section_header_image; ?>
    </div>
  <?php endif; ?>
  <div class="ee-section-header-overlay">
    <div class="overlay-inner-wrapper">
      <?php if (!empty($ee_section_header_title)) : ?>
        <span class="ee-section-header-title"><?php print $ee_section_header_title; ?></span>
      <?php endif; ?>
      <?php if (!empty($ee_section_header_menu)) : ?>
        <div class="ee-section-header-menu">
          <?php print $ee_section_header_menu; ?>
        </div>
      <?php endif; ?>
      <?php if (!empty($ee_section_header_social_buttons)) : ?>
        <div class="ee-section-header-social-buttons">
          <?php print $ee_section_header_social_buttons; ?>
        </div>
      <?php endif; ?>
    </div>
  </div>
</div>
