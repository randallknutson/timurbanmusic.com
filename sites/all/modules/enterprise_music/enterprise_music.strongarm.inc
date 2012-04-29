<?php
/**
 * @file
 * enterprise_music.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function enterprise_music_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_song';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_song'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_song';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_song'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_song';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_song'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_song';
  $strongarm->value = '0';
  $export['node_preview_song'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_song';
  $strongarm->value = 0;
  $export['node_submitted_song'] = $strongarm;

  return $export;
}
