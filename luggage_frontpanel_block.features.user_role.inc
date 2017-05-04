<?php
/**
 * @file
 * luggage_frontpanel_block.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function luggage_frontpanel_block_user_default_roles() {
  $roles = array();

  // Exported role: bean editor.
  $roles['bean editor'] = array(
    'name' => 'bean editor',
    'weight' => 9,
  );

  return $roles;
}
