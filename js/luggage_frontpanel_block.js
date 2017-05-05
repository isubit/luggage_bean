(function ($) {
  $(document).ready(function() {
    $('select#edit-field-front-block-label-icon-und').change(function(){
        if ($('select#edit-field-front-block-label-icon-und') != '_none') {
          if ($('i.select').length == 0) {
            $('<i class=\"fa '+ $('select#edit-field-front-block-label-icon-und').val() +' select\"></i>').insertAfter("#edit-field-front-block-label-icon-und");
          } else {
            $('i.select').attr('class', 'fa '+ $('select#edit-field-front-block-label-icon-und').val() +' select');
          }
        }
      });
  });
})(jQuery);
