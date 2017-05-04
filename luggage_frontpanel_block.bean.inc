<?php
/**
 * @file
 * luggage_frontpanel_block.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function luggage_frontpanel_block_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'front_block';
  $bean_type->label = 'Front Block';
  $bean_type->options = '';
  $bean_type->description = 'Block that has styling for the front page';
  $export['front_block'] = $bean_type;

  return $export;
}
