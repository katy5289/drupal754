<?php
/**
 * @file
 * my_photo_gallery.features.inc
 */

/**
 * Implements hook_views_api().
 */
function my_photo_gallery_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function my_photo_gallery_image_default_styles() {
  $styles = array();

  // Exported image style: 300px_wide.
  $styles['300px_wide'] = array(
    'name' => '300px_wide',
    'effects' => array(
      1 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => '300',
          'height' => '225',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function my_photo_gallery_node_info() {
  $items = array(
    'photo_gallery' => array(
      'name' => t('Photo Gallery'),
      'base' => 'node_content',
      'description' => t('A collection of photos'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
