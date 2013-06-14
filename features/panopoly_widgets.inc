<?php
/**
 * @file
 * Panopoly Widgets overrides
 */

/**
 * Implements hook_file_default_displays_alter() 
 */
if (!function_exists('panopoly_widgets_file_default_displays_alter')) {
  function panopoly_widgets_file_default_displays_alter(&$data) {
    
    /* Example: Override video__default__media_youtube_video
    if (isset($data['video__default__media_youtube_video'])) {
      $data['video__default__media_youtube_video']->settings['chromeless'] = 0; 
    }*/
    
  }
}

/**
 * Implements hook_field_default_fields_alter()
 */
if (!function_exists('panopoly_widgets_field_default_fields_alter')) {
  function panopoly_widgets_field_default_fields_alter(&$data) {

    /* Example: Extend, add in manual crop settings to fieldable_panels_pane-video-field_video_file
    if (isset($data['fieldable_panels_pane-video-field_video_file'])) {
      $data['fieldable_panels_pane-video-field_video_file']['field_instance']['widget']['settings']['manualcrop_crop_info'] = TRUE;
      $data['fieldable_panels_pane-video-field_video_file']['field_instance']['widget']['settings']['manualcrop_default_crop_area'] = TRUE;
      $data['fieldable_panels_pane-video-field_video_file']['field_instance']['widget']['settings']['manualcrop_instant_preview'] = TRUE;
      $data['fieldable_panels_pane-video-field_video_file']['field_instance']['widget']['settings']['manualcrop_styles_mode'] = 'include';
    }*/
    
    /* Example: Extend, add in manual crop settings to fieldable_panels_pane-image-field_basic_image_image
    if (isset($data['fieldable_panels_pane-image-field_basic_image_image'])) {
      $data['fieldable_panels_pane-image-field_basic_image_image']['field_instance']['widget']['settings']['manualcrop_crop_info'] = TRUE;
      $data['fieldable_panels_pane-image-field_basic_image_image']['field_instance']['widget']['settings']['manualcrop_default_crop_area'] = TRUE;
      $data['fieldable_panels_pane-image-field_basic_image_image']['field_instance']['widget']['settings']['manualcrop_instant_preview'] = TRUE;
      $data['fieldable_panels_pane-image-field_basic_image_image']['field_instance']['widget']['settings']['manualcrop_styles_mode'] = 'include';
    }*/

  }
}
