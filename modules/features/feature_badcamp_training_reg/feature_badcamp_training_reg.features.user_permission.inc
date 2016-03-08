<?php
/**
 * @file
 * feature_badcamp_training_reg.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_badcamp_training_reg_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer training registration'.
  $permissions['administer training registration'] = array(
    'name' => 'administer training registration',
    'roles' => array(
      'administrator' => 'administrator',
      'site editor' => 'site editor',
    ),
    'module' => 'training_reg',
  );

  // Exported permission: 'register for training'.
  $permissions['register for training'] = array(
    'name' => 'register for training',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'training_reg',
  );

  return $permissions;
}
