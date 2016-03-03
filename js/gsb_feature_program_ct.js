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

    }
  };

})(jQuery);