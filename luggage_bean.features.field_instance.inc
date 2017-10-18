<?php
/**
 * @file
 * luggage_bean.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function luggage_bean_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-link_block-field_link_block_image'.
  $field_instances['bean-link_block-field_link_block_image'] = array(
    'bundle' => 'link_block',
    'deleted' => 0,
    'description' => 'This will be the image that appears on your link block.
The image width will scale to the block size, so try to have images with the same dimensions.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_link_block_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'linkblock/images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'insert' => 0,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 0,
          'icon_link' => 0,
          'image' => 0,
          'image_announcement_full' => 0,
          'image_flexslider_full' => 0,
          'image_flexslider_thumbnail' => 0,
          'image_linkblock_short' => 'image_linkblock_short',
          'image_linkblock_square' => 'image_linkblock_square',
          'image_linkblock_tall' => 'image_linkblock_tall',
          'image_large' => 0,
          'image_medium' => 0,
          'image_people_full' => 0,
          'image_people_thumb' => 0,
          'image_sceenshot_medium_200' => 0,
          'image_screenshot_thumbnail' => 0,
          'image_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'large',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'bean-link_block-field_link_block_image_style'.
  $field_instances['bean-link_block-field_link_block_image_style'] = array(
    'bundle' => 'link_block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Choose the image style for your link block image. This style will scale according to the width of your link block pane and the height of other items in the block\'s row.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_link_block_image_style',
    'label' => 'Image Style',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'bean-link_block-field_link_block_label_color'.
  $field_instances['bean-link_block-field_link_block_label_color'] = array(
    'bundle' => 'link_block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is your link block\'s label color. If no color is selected, label will be red.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_link_block_label_color',
    'label' => 'Color',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'bean-link_block-field_link_block_label_icon'.
  $field_instances['bean-link_block-field_link_block_label_icon'] = array(
    'bundle' => 'link_block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is the icon that will appear before your link block\'s label. You can also choose to not have an icon.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_link_block_label_icon',
    'label' => 'Icon',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'bean-link_block-field_link_block_url'.
  $field_instances['bean-link_block-field_link_block_url'] = array(
    'bundle' => 'link_block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the URL that you want your link block to link to here.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_link_block_url',
    'label' => 'URL',
    'required' => 1,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 0,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Choose the image style for your link block image. This style will scale according to the width of your link block pane and the height of other items in the block\'s row.');
  t('Color');
  t('Enter the URL that you want your link block to link to here.');
  t('Icon');
  t('Image');
  t('Image Style');
  t('This is the icon that will appear before your link block\'s label. You can also choose to not have an icon.');
  t('This is your link block\'s label color. If no color is selected, label will be red.');
  t('This will be the image that appears on your link block.
The image width will scale to the block size, so try to have images with the same dimensions.');
  t('URL');

  return $field_instances;
}
