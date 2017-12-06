<?php
/**
 * @file
 * luggage_bean_card.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function luggage_bean_card_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_bean__card';
  $strongarm->value = array(
    'view_modes' => array(
      'default' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'label' => array(
          'weight' => '0',
        ),
        'title' => array(
          'weight' => '1',
        ),
        'revision' => array(
          'weight' => '8',
        ),
        'view_mode' => array(
          'weight' => '7',
        ),
      ),
      'display' => array(
        'title' => array(
          'default' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_bean__card'] = $strongarm;

  return $export;
}
