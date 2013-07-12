<?php
/**
 * @file
 * Panopoly Search overrides
 */

/**
 * Implements hook_strongarm_alter()
 */
if (!function_exists('panopoly_search_strongarm_alter')) {
  function panopoly_search_strongarm_alter(&$data) {

    // Override search_api_facets_search_ids
    /*
    if (isset($data['search_api_facets_search_ids'])) {
      $data['search_api_facets_search_ids']->value['node_index']['search_api_views:greenopedia_search:article_results'] = 'search_api_views:greenopedia_search:article_results';
    }
    */
  }
}
