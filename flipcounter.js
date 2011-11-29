/**
 * Implements Drupal.behaviours
 */
Drupal.behaviors.flipcounter = function() {
  var flipcounters = [], i = 0;
  jQuery.each(Drupal.settings.flipcounter, function(selector, options){
    if ( $('#' + selector).length > 0 ) {
      flipcounters[i] = new flipCounter(selector, options);
      i++;
    }
  });
};
