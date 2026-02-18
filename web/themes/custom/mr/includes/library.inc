<?php

use Drupal\artisan\ArtisanLibraries;

/**
 * @file
 * Theme and preprocess functions for library definitions.
 */

/**
 * Implements hook_starterkit_library_info_alter().
 */
function mr_library_info_alter(&$libraries, $extension) {
  $artisan_libraries = new ArtisanLibraries('mr');
  $artisan_libraries->alter($libraries, $extension);
}
