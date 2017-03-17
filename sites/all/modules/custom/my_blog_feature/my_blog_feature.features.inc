<?php
/**
 * @file
 * my_blog_feature.features.inc
 */

/**
 * Implements hook_views_api().
 */
function my_blog_feature_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function my_blog_feature_node_info() {
  $items = array(
    'blog_post' => array(
      'name' => t('Blog Post'),
      'base' => 'node_content',
      'description' => t('A <em>News</em> entry displayed in order of most recent date.'),
      'has_title' => '1',
      'title_label' => t('Blog Post Title'),
      'help' => '',
    ),
  );
  return $items;
}
