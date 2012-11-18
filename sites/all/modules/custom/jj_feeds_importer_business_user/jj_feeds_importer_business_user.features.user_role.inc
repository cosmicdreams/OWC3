<?php
/**
 * @file
 * jj_feeds_importer_business_user.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function jj_feeds_importer_business_user_user_default_roles() {
  $roles = array();

  // Exported role: business owner.
  $roles['business owner'] = array(
    'name' => 'business owner',
    'weight' => '3',
  );

  return $roles;
}
