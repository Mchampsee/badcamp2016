<?php
/**
 * @file
 * feature_badcamp_training_reg.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function feature_badcamp_training_reg_taxonomy_default_vocabularies() {
  return array(
    'training_locations' => array(
      'name' => 'Training Locations',
      'machine_name' => 'training_locations',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
