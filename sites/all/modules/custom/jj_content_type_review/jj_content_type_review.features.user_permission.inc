<?php
/**
 * @file
 * jj_content_type_review.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function jj_content_type_review_user_default_permissions() {
  $permissions = array();

  // Exported permission: create field_review_business.
  $permissions['create field_review_business'] = array(
    'name' => 'create field_review_business',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create review content.
  $permissions['create review content'] = array(
    'name' => 'create review content',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit field_review_business.
  $permissions['edit field_review_business'] = array(
    'name' => 'edit field_review_business',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_review_business.
  $permissions['edit own field_review_business'] = array(
    'name' => 'edit own field_review_business',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_review_business.
  $permissions['view field_review_business'] = array(
    'name' => 'view field_review_business',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_review_business.
  $permissions['view own field_review_business'] = array(
    'name' => 'view own field_review_business',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
