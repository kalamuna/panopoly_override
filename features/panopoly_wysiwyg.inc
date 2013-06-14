<?php
/**
 * @file
 * Panopoly Wysiwyg overrides
 */

/** 
 * Implements hook_filter_default_formats_alter()
 */
if (!function_exists('panopoly_wysiwyg_filter_default_formats_alter')) {
  function panopoly_wysiwyg_filter_default_formats_alter(&$data) {
    
    /* Example: Add some filter settings for lexicon
    if (isset($data['panopoly_wysiwyg_text'])) {  
      $data['panopoly_wysiwyg_text']['filters']['filter_lexicon'] = array(
        'settings' => array(),
        'status' => '1',
        'weight' => '-43',
      );
      
      // Unset cache
      // @todo: we might be able to remove this when we revert panopoly to rc3
      unset($data['panopoly_wysiwyg_text']['cache']);
    }*/ 
    
  }
}

/**
 * Implements hook_strongarm_alter()
 */
if (!function_exists('panopoly_wysiwyg_strongarm_alter')) {
  function panopoly_wysiwyg_strongarm_alter(&$data) {
    
    /* Example: Override media__wysiwyg_browser_plugins
    if (isset($data['media__wysiwyg_browser_plugins'])) {
      $data['media__wysiwyg_browser_plugins']->value['0'] = 'upload';
      $data['media__wysiwyg_browser_plugins']->value['1'] = 'media_default--media_browser_1';
      $data['media__wysiwyg_browser_plugins']->value['2'] = 'media_internet'; 
      unset($data['media__wysiwyg_browser_plugins']->value['library']);
      unset($data['media__wysiwyg_browser_plugins']->value['media_default--media_browser_1']);
      unset($data['media__wysiwyg_browser_plugins']->value['media_default--media_browser_my_files']);
      unset($data['media__wysiwyg_browser_plugins']->value['media_internet']);
      unset($data['media__wysiwyg_browser_plugins']->value['upload']);
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
if (!function_exists('panopoly_wysiwyg_system_info_alter')) {
  function panopoly_wysiwyg_system_info_alter(&$info, $file, $type) {
    if ($file->name == 'panopoly_wysiwyg') {
      
      /* Example: Add Lexicon as a dependency
      array_push($info['dependencies'], "lexicon");*/
      
    }
  }
}

