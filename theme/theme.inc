<?php

/**
 * @file
 * Provides theme functions for flipcounter.module
 */


/**
 * Provides variables to flipcounter.tpl.php
 */
function template_preprocess_flipcounter(&$vars) {
  // Set default options.
  $vars['options'] += array(
    'value' => $vars['value'],
    'auto' => FALSE,
  );

  $vars['id'] = 'flipcounter-' . $vars['name'];

  flipcounter_add($vars['id'], $vars['options']);
}
