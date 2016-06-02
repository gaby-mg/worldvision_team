<?php
/**
 * @file
 * worldvision_team.features.inc
 */

/**
 * Implements hook_views_api().
 */
function worldvision_team_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function worldvision_team_node_info() {
  $items = array(
    'staff' => array(
      'name' => t('Miembro del equipo'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
