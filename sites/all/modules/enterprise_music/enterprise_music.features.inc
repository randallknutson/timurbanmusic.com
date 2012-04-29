<?php
/**
 * @file
 * enterprise_music.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function enterprise_music_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function enterprise_music_node_info() {
  $items = array(
    'song' => array(
      'name' => t('Song'),
      'base' => 'node_content',
      'description' => t('A song with an image, description and download'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
