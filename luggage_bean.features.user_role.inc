<?php
/**
 * @file
 * luggage_bean.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function luggage_bean_user_default_roles() {
  $roles = array();

  // Exported role: bean editor.
  $roles['bean editor'] = array(
    'name' => 'bean editor',
    'weight' => 9,
  );

  return $roles;
}
