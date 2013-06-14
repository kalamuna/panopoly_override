<?php
/**
 * @file
 * Panopoly Core overrides
 */

/**
 * Implements hook_field_default_fields_alter()
 */
if (!function_exists('panopoly_core_field_default_fields_alter')) {
  function panopoly_core_field_default_fields_alter(&$data) {
    
    /* Example: Extend, add in manual crop settings to fieldable_panels_pane-image-field_basic_image_image
    if (isset($data['taxonomy_term-panopoly_categories-field_featured_image'])) {
      $data['taxonomy_term-panopoly_categories-field_featured_image']['field_instance']['widget']['settings']['manualcrop_crop_info'] = TRUE;
      $data['taxonomy_term-panopoly_categories-field_featured_image']['field_instance']['widget']['settings']['manualcrop_default_crop_area'] = TRUE;
      $data['taxonomy_term-panopoly_categories-field_featured_image']['field_instance']['widget']['settings']['manualcrop_instant_preview'] = TRUE;
      $data['taxonomy_term-panopoly_categories-field_featured_image']['field_instance']['widget']['settings']['manualcrop_styles_mode'] = 'include';
    }*/

  }
}

/**
 * Implements hook_system_info_alter()
 * 
 * This is used to alter features info files. This may be useful for removing fields from entities,
 * dependencies, etc.
 * 
 */
if (!function_exists('panopoly_core_system_info_alter')) {
  function panopoly_core_system_info_alter(&$info, $file, $type) {
    
    /* Example: Remove a dependency
    if ($file->name == 'panopoly_core') {
      if(($key = array_search('views_ui', $info['dependencies'])) !== false) {
        unset($info['dependencies'][$key]);
      }
    }*/
    
  }
}
