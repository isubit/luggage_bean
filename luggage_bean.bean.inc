<?php
/**
 * @file
 * luggage_bean.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function luggage_bean_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'link_block';
  $bean_type->label = 'Link Block';
  $bean_type->options = '';
  $bean_type->description = 'Block that lets users customize image, color, and URL location';
  $export['link_block'] = $bean_type;

  return $export;
}
