<?php
/**
 * @file
 * campuscms_feature_events.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function campuscms_feature_events_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-toolbar-administrator:node/add/event
  $menu_links['menu-toolbar-administrator:node/add/event'] = array(
    'menu_name' => 'menu-toolbar-administrator',
    'link_path' => 'node/add/event',
    'router_path' => 'node/add/event',
    'link_title' => 'Event',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-toolbar-content-editor:node/add/event
  $menu_links['menu-toolbar-content-editor:node/add/event'] = array(
    'menu_name' => 'menu-toolbar-content-editor',
    'link_path' => 'node/add/event',
    'router_path' => 'node/add/event',
    'link_title' => 'Event',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-toolbar-site-manager:node/add/event
  $menu_links['menu-toolbar-site-manager:node/add/event'] = array(
    'menu_name' => 'menu-toolbar-site-manager',
    'link_path' => 'node/add/event',
    'router_path' => 'node/add/event',
    'link_title' => 'Event',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => 'node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Event');


  return $menu_links;
}
