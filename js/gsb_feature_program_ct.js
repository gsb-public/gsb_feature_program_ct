(function ($) {

  Drupal.behaviors.gsb_feature_program_ct = {
    attach: function (context, settings) {

      $(document).ready(function() {

        if ($('.instance-show-information').length > 1) {

          // hide all the instance-information sections
          $('.instance-show-information').each(function() {
            $(this).next().hide();
            $(this).next().addClass('hide_this');
          });

          // show the first instance-information section
          $('.instance-show-information').first().next().show(1000);
          $('.instance-show-information').first().next().removeClass('hide_this');

          $('.instance-show-information').click(function (e) {
            e.preventDefault();
            if (isHidden($(this))) {
              hideAll();
              $(this).next().show(1000);
              $(this).next().removeClass('hide_this');
            }
          });

        }

        if ($('#edit-field-program-detail-und-1').is(':checked')) {
          cleanupFieldsets($('#edit-field-program-detail-und-1').val());
        }

        $("[id^=edit-field-program-detail-und-]").change(function () {
          cleanupFieldsets($(this).val());
        });

      });

      // check if the instance-information section is currently hidden
      var isHidden = function(target) {
        return $(target).next().hasClass('hide_this');
      };

      // hide all the instance-information sections
      var hideAll = function() {
        $('.instance-show-information').each(function() {
          $(this).next().hide(1000);
          $(this).next().addClass('hide_this');
        });
      };

      var cleanupFieldsets = function($program_detail_checked) {

        // vertical tabs to be hidden
        var hide_vertical_groups = {
          LearnMore: "Learn More",
          CallToActions: "Call-to-Actions (CTAs)",
          RelatedContent: "Related Content",
          FeaturedNewsEvent: "Featured News or Event"
        };

        // horizontal tabs to be hidden
        var hide_horizontal_groups = {
          Curriculum: "Curriculum",
          Participants: "Participants"
        };

        // show/hide vertical tabs

        $(".field-group-tabs-wrapper  .vertical-tab-button").each(function () {
          for (var key in hide_vertical_groups) {
            if ($program_detail_checked == 1) {
              if ($(this).text().indexOf(hide_vertical_groups[key]) != -1) {
                $(this).hide();
              }
            }
            else {
              $(this).show();
            }

          }
        });

        // show/hide horizontal tabs

        $(".field-group-htabs-wrapper  .horizontal-tab-button").each(function () {
          for (var key in hide_horizontal_groups) {
            if ($program_detail_checked == 1) {
              if ($(this).text().indexOf(hide_horizontal_groups[key]) != -1) {
                $(this).hide();
              }
            }
            else {
              $(this).show();
            }

          }
        });

      } // end of cleanupFieldsets

    }
  };

})(jQuery);
