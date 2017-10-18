<?php
/**
 * @file
 * luggage_bean.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function luggage_bean_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access bean overview'.
  $permissions['access bean overview'] = array(
    'name' => 'access bean overview',
    'roles' => array(
      'bean editor' => 'bean editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'administer beans'.
  $permissions['administer beans'] = array(
    'name' => 'administer beans',
    'roles' => array(
      'bean editor' => 'bean editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any link_block bean'.
  $permissions['create any link_block bean'] = array(
    'name' => 'create any link_block bean',
    'roles' => array(
      'bean editor' => 'bean editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any link_block bean'.
  $permissions['delete any link_block bean'] = array(
    'name' => 'delete any link_block bean',
    'roles' => array(
      'bean editor' => 'bean editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any link_block bean'.
  $permissions['edit any link_block bean'] = array(
    'name' => 'edit any link_block bean',
    'roles' => array(
      'bean editor' => 'bean editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any link_block bean'.
  $permissions['view any link_block bean'] = array(
    'name' => 'view any link_block bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view bean page'.
  $permissions['view bean page'] = array(
    'name' => 'view bean page',
    'roles' => array(
      'bean editor' => 'bean editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view bean revisions'.
  $permissions['view bean revisions'] = array(
    'name' => 'view bean revisions',
    'roles' => array(
      'bean editor' => 'bean editor',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
