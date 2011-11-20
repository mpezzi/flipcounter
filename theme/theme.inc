<?php

/**
 * @file
 * Provides theme functions for flipcounter.module
 */


/**
 * Provides variables to flipcounter.tpl.php
 */
function template_preprocess_flipcounter(&$vars) {
  flipcounter_add();

  // Set default options.
  $vars['options'] += array(
    'value' => $vars['value'],
    'auto' => FALSE,
  );

  $vars['id'] = 'flipcounter-' . $vars['name'];

  drupal_add_js(array('flipcounter' => array($vars['id'] => $vars['options'])), 'setting');
}
