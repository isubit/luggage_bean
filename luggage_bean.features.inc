<?php
/**
 * @file
 * luggage_bean.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function luggage_bean_ctools_plugin_api($module = NULL, $api = NULL) {
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
function luggage_bean_image_default_styles() {
  $styles = array();

  // Exported image style: linkblock_short.
  $styles['linkblock_short'] = array(
    'label' => 'linkblock_short',
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

  // Exported image style: linkblock_square.
  $styles['linkblock_square'] = array(
    'label' => 'linkblock_square',
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

  // Exported image style: linkblock_tall.
  $styles['linkblock_tall'] = array(
    'label' => 'linkblock_tall',
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
