/**
 * Implements Drupal.behaviours
 */
Drupal.behaviors.flipcounter = function() {
  var flipcounters = [], i = 0;
  jQuery.each(Drupal.settings.flipcounter, function(selector, options){
    flipcounters[i] = new flipCounter(selector, options);
    i++;
  });
};
