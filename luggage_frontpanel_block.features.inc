<?php
/**
 * @file
 * luggage_frontpanel_block.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function luggage_frontpanel_block_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function luggage_frontpanel_block_image_default_styles() {
  $styles = array();

  // Exported image style: frontblock_short.
  $styles['frontblock_short'] = array(
    'label' => 'frontblock_short',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 565.8,
          'height' => 271.58,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: frontblock_square.
  $styles['frontblock_square'] = array(
    'label' => 'frontblock_square',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 565.8,
          'height' => 565.8,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: frontblock_tall.
  $styles['frontblock_tall'] = array(
    'label' => 'frontblock_tall',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 565.8,
          'height' => 682.28,
        ),
        'weight' => 1,
      ),
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 565.8,
          'height' => 682.28,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
