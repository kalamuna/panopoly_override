<?php
/**
 * @file
 * Panopoly Pages overrides
 */

/**
 * Implements hook_field_default_fields_alter()
 */
if (!function_exists('panopoly_pages_field_default_fields_alter')) {
  function panopoly_pages_field_default_fields_alter(&$data) {

    /* Example: Add some filter settings for profile2 to node-panopoly_page-body
    if (isset($data['node-panopoly_page-body'])) {
      $data['node-panopoly_page-body']['field_config']['settings']['profile2_private'] = FALSE;
    }*/

    /* Example: Remove field, we aren't using it, although we should have
    if (isset($data['node-panopoly_page-field_featured_categories'])) {
      unset($data['node-panopoly_page-field_featured_categories']);
    }*/

    /* Example: Add some settings for profile2 and manual crop
    if (isset($data['node-panopoly_page-field_featured_image'])) {
      $data['node-panopoly_page-field_featured_image']['field_config']['settings']['profile2_private'] = FALSE;

      $data['node-panopoly_page-field_featured_image']['field_instance']['widget']['settings']['manualcrop_crop_info'] = TRUE;
      $data['node-panopoly_page-field_featured_image']['field_instance']['widget']['settings']['manualcrop_default_crop_area'] = TRUE;
      $data['node-panopoly_page-field_featured_image']['field_instance']['widget']['settings']['manualcrop_enable'] = FALSE;
      $data['node-panopoly_page-field_featured_image']['field_instance']['widget']['settings']['manualcrop_inline_crop'] = FALSE;
      $data['node-panopoly_page-field_featured_image']['field_instance']['widget']['settings']['manualcrop_instant_crop'] = FALSE;
      $data['node-panopoly_page-field_featured_image']['field_instance']['widget']['settings']['manualcrop_instant_preview'] = TRUE;
      $data['node-panopoly_page-field_featured_image']['field_instance']['widget']['settings']['manualcrop_require_cropping'] = array();
      $data['node-panopoly_page-field_featured_image']['field_instance']['widget']['settings']['manualcrop_styles_list'] = array();
      $data['node-panopoly_page-field_featured_image']['field_instance']['widget']['settings']['manualcrop_styles_mode'] = 'exclude';
      $data['node-panopoly_page-field_featured_image']['field_instance']['widget']['settings']['manualcrop_thumblist'] = FALSE;
    }*/

    /* Example: Change the value of the allowed settings, random weight quote thing
    if (isset($data['node-panopoly_page-field_featured_status'])) {
      $data['node-panopoly_page-field_featured_status']['field_config']['settings']['allowed_values'] = array(
        0 => 'No',
        1 => 'Yes',
      );
      $data['node-panopoly_page-field_featured_status']['field_instance']['display']['default']['weight'] = 2;
    }*/ 
    
  }
}

/**
 * Implements hook_field_default_fields_alter()
 */
if (!function_exists('panopoly_pages_panelizer_defaults_override_alter')) {
  function panopoly_pages_panelizer_defaults_override_alter(&$data) {
   
    /* Example: Rebuild the panelizer defaults for panopoly_page
    // 
    // I think generally you don't want to completely rebuild objects like this
    // 
    if (isset($data['node:panopoly_page:default'])) {
      // Wipe old defaults
      unset($data['node:panopoly_page:default']);

      // Rebuild node:panopoly_page:default
      $panelizer = new stdClass();
      $panelizer->disabled = FALSE; 
      $panelizer->api_version = 1;
      $panelizer->name = 'node:panopoly_page:default';
      $panelizer->title = 'Default';
      $panelizer->panelizer_type = 'node';
      $panelizer->panelizer_key = 'panopoly_page';
      $panelizer->no_blocks = FALSE;
      $panelizer->css_id = 'page-page';
      $panelizer->css = '';
      $panelizer->pipeline = 'ipe';
      $panelizer->contexts = array();
      $panelizer->relationships = array();
      $panelizer->access = '';
      $panelizer->view_mode = 'page_manager';
      $panelizer->css_class = '';
      $panelizer->title_element = 'H2';
      $panelizer->link_to_entity = TRUE;
      $panelizer->extra = '';
      $display = new panels_display();
      $display->layout = 'brenham_flipped';
      $display->layout_settings = array();
      $display->panel_settings = array(
        'style_settings' => array(
          'default' => NULL,
          'column1' => NULL,
          'column2' => NULL,
          'sidebar' => NULL,
          'contentmain' => NULL,
          'header' => NULL,
        ),
      );
      $display->cache = array();
      $display->title = '%node:title';
      $display->content = array();
      $display->panels = array();
        $pane = new stdClass();
        $pane->pid = 'new-1';
        $pane->panel = 'contentmain';
        $pane->type = 'entity_field';
        $pane->subtype = 'node:field_featured_image';
        $pane->shown = TRUE;
        $pane->access = array();
        $pane->configuration = array(
          'label' => 'hidden',
          'formatter' => 'image',
          'delta_limit' => 0,
          'delta_offset' => '0',
          'delta_reversed' => FALSE,
          'formatter_settings' => array(
            'image_link' => 'content',
            'image_style' => 'panopoly_image_half',
          ),
          'context' => 'panelizer',
          'override_title' => 0,
          'override_title_text' => '',
        );
        $pane->cache = array();
        $pane->style = array(
          'settings' => NULL,
        );
        $pane->css = array();
        $pane->extras = array();
        $pane->position = 0;
        $pane->locks = array();
        $display->content['new-1'] = $pane;
        $display->panels['contentmain'][0] = 'new-1';
        $pane = new stdClass();
        $pane->pid = 'new-2';
        $pane->panel = 'contentmain';
        $pane->type = 'entity_field';
        $pane->subtype = 'node:body';
        $pane->shown = TRUE;
        $pane->access = array();
        $pane->configuration = array(
          'label' => 'hidden',
          'formatter' => 'text_default',
          'delta_limit' => 0,
          'delta_offset' => '0',
          'delta_reversed' => FALSE,
          'formatter_settings' => array(
            'trim_length' => '250',
          ),
          'context' => 'panelizer',
          'override_title' => 0,
          'override_title_text' => '',
        );
        $pane->cache = array();
        $pane->style = array(
          'settings' => NULL,
        );
        $pane->css = array();
        $pane->extras = array();
        $pane->position = 1;
        $pane->locks = array();
        $display->content['new-2'] = $pane;
        $display->panels['contentmain'][1] = 'new-2';
        $pane = new stdClass();
        $pane->pid = 'new-3';
        $pane->panel = 'contentmain';
        $pane->type = 'node_links';
        $pane->subtype = 'node_links';
        $pane->shown = TRUE;
        $pane->access = array();
        $pane->configuration = array(
          'override_title' => FALSE,
          'override_title_text' => '',
          'build_mode' => 'featured',
          'identifier' => '',
          'link' => TRUE,
          'context' => 'panelizer',
        );
        $pane->cache = array();
        $pane->style = array(
          'settings' => NULL,
        );
        $pane->css = array(
          'css_class' => 'link-wrapper',
        );
        $pane->extras = array();
        $pane->position = 2;
        $pane->locks = array();
        $display->content['new-3'] = $pane;
        $display->panels['contentmain'][2] = 'new-3';
        $pane = new stdClass();
        $pane->pid = 'new-4';
        $pane->panel = 'contentmain';
        $pane->type = 'entity_field';
        $pane->subtype = 'node:field_featured_categories';
        $pane->shown = TRUE;
        $pane->access = array();
        $pane->configuration = array(
          'label' => 'inline',
          'formatter' => 'taxonomy_term_reference_link',
          'delta_limit' => 0,
          'delta_offset' => '0',
          'delta_reversed' => FALSE,
          'formatter_settings' => array(),
          'context' => 'panelizer',
          'override_title' => 0,
          'override_title_text' => '',
        );
        $pane->cache = array();
        $pane->style = array(
          'settings' => NULL,
        );
        $pane->css = array();
        $pane->extras = array();
        $pane->position = 3;
        $pane->locks = array();
        $display->content['new-4'] = $pane;
        $display->panels['contentmain'][3] = 'new-4';
        $pane = new stdClass();
        $pane->pid = 'new-5';
        $pane->panel = 'header';
        $pane->type = 'custom';
        $pane->subtype = 'custom';
        $pane->shown = TRUE;
        $pane->access = array();
        $pane->configuration = array(
          'admin_title' => 'Page Title',
          'title' => '',
          'body' => '<h1>%node:title</h1>',
          'format' => 'full_html',
          'substitute' => 1,
        );
        $pane->cache = array();
        $pane->style = array(
          'settings' => NULL,
        );
        $pane->css = array(
          'css_id' => '',
          'css_class' => 'header-middle',
        );
        $pane->extras = array();
        $pane->position = 0;
        $pane->locks = array();
        $display->content['new-5'] = $pane;
        $display->panels['header'][0] = 'new-5';
        $pane = new stdClass();
        $pane->pid = 'new-6';
        $pane->panel = 'sidebar';
        $pane->type = 'menu_tree';
        $pane->subtype = 'main-menu';
        $pane->shown = TRUE;
        $pane->access = array();
        $pane->configuration = array(
          'menu_name' => 'main-menu',
          'parent_mlid' => 'main-menu:0',
          'title_link' => 0,
          'admin_title' => '',
          'level' => '2',
          'follow' => 0,
          'depth' => 0,
          'expanded' => 1,
          'sort' => 0,
          'override_title' => 1,
          'override_title_text' => '',
        );
        $pane->cache = array();
        $pane->style = array(
          'settings' => NULL,
        );
        $pane->css = array();
        $pane->extras = array();
        $pane->position = 0;
        $pane->locks = array();
        $display->content['new-6'] = $pane;
        $display->panels['sidebar'][0] = 'new-6';
      $display->hide_title = PANELS_TITLE_FIXED;
      $display->title_pane = 'new-1';
      $panelizer->display = $display;
      $data['node:panopoly_page:default'] = $panelizer;
    }
    
    // Rebuild node:panopoly_page:default:default
    if (isset($data['node:panopoly_page:default:default'])) {
      // Wipe old defaults
      unset($data['node:panopoly_page:default:default']);

      // Rebuild node:panopoly_page:default
      $panelizer = new stdClass();
      $panelizer->disabled = FALSE; 
      $panelizer->api_version = 1;
      $panelizer->name = 'node:panopoly_page:default:default';
      $panelizer->title = 'Default';
      $panelizer->panelizer_type = 'node';
      $panelizer->panelizer_key = 'panopoly_page';
      $panelizer->no_blocks = FALSE;
      $panelizer->css_id = '';
      $panelizer->css = '';
      $panelizer->pipeline = 'standard';
      $panelizer->contexts = array();
      $panelizer->relationships = array();
      $panelizer->access = array();
      $panelizer->view_mode = 'default';
      $panelizer->css_class = 'page-default';
      $panelizer->title_element = 'H2';
      $panelizer->link_to_entity = TRUE;
      $panelizer->extra = '';
      $display = new panels_display();
      $display->layout = 'boxton';
      $display->layout_settings = array();
      $display->panel_settings = array(
        'style_settings' => array(
          'default' => NULL,
          'sidebar' => NULL,
          'contentmain' => NULL,
        ),
      );
      $display->cache = array();
      $display->title = '%node:title';
      $display->content = array();
      $display->panels = array();
        $pane = new stdClass();
        $pane->pid = 'new-7';
        $pane->panel = 'contentmain';
        $pane->type = 'entity_field';
        $pane->subtype = 'node:field_featured_image';
        $pane->shown = TRUE;
        $pane->access = array();
        $pane->configuration = array(
          'label' => 'hidden',
          'formatter' => 'image',
          'delta_limit' => 0,
          'delta_offset' => '0',
          'delta_reversed' => FALSE,
          'formatter_settings' => array(
            'image_style' => 'panopoly_image_half',
            'image_link' => '',
          ),
          'context' => 'panelizer',
          'override_title' => 1,
          'override_title_text' => '',
        );
        $pane->cache = array();
        $pane->style = array(
          'settings' => NULL,
        );
        $pane->css = array();
        $pane->extras = array();
        $pane->position = 0;
        $pane->locks = array();
        $display->content['new-7'] = $pane;
        $display->panels['contentmain'][0] = 'new-7';
        $pane = new stdClass();
        $pane->pid = 'new-8';
        $pane->panel = 'contentmain';
        $pane->type = 'entity_field';
        $pane->subtype = 'node:body';
        $pane->shown = TRUE;
        $pane->access = array();
        $pane->configuration = array(
          'label' => 'hidden',
          'formatter' => 'text_default',
          'delta_limit' => 0,
          'delta_offset' => '0',
          'delta_reversed' => FALSE,
          'formatter_settings' => array(),
          'context' => 'panelizer',
          'override_title' => 1,
          'override_title_text' => '',
        );
        $pane->cache = array();
        $pane->style = array(
          'settings' => NULL,
        );
        $pane->css = array();
        $pane->extras = array();
        $pane->position = 1;
        $pane->locks = array();
        $display->content['new-8'] = $pane;
        $display->panels['contentmain'][1] = 'new-8';
        $pane = new stdClass();
        $pane->pid = 'new-9';
        $pane->panel = 'contentmain';
        $pane->type = 'node_links';
        $pane->subtype = 'node_links';
        $pane->shown = TRUE;
        $pane->access = array();
        $pane->configuration = array(
          'override_title' => FALSE,
          'override_title_text' => '',
          'build_mode' => 'default',
          'identifier' => '',
          'link' => TRUE,
          'context' => 'panelizer',
        );
        $pane->cache = array();
        $pane->style = array(
          'settings' => NULL,
        );
        $pane->css = array(
          'css_class' => 'link-wrapper',
        );
        $pane->extras = array();
        $pane->position = 2;
        $pane->locks = array();
        $display->content['new-9'] = $pane;
        $display->panels['contentmain'][2] = 'new-9';
        $pane = new stdClass();
        $pane->pid = 'new-10';
        $pane->panel = 'contentmain';
        $pane->type = 'entity_field';
        $pane->subtype = 'node:field_featured_categories';
        $pane->shown = TRUE;
        $pane->access = array();
        $pane->configuration = array(
          'label' => 'inline',
          'formatter' => 'taxonomy_term_reference_link',
          'delta_limit' => 0,
          'delta_offset' => '0',
          'delta_reversed' => FALSE,
          'formatter_settings' => array(),
          'context' => 'panelizer',
          'override_title' => 1,
          'override_title_text' => '',
        );
        $pane->cache = array();
        $pane->style = array(
          'settings' => NULL,
        );
        $pane->css = array();
        $pane->extras = array();
        $pane->position = 3;
        $pane->locks = array();
        $display->content['new-10'] = $pane;
        $display->panels['contentmain'][3] = 'new-10';
      $display->hide_title = PANELS_TITLE_NONE;
      $display->title_pane = '0';
      $panelizer->display = $display;
      $data['node:panopoly_page:default:default'] = $panelizer;
    }
    
    // Rebuild node:panopoly_page:default:featured
    if (isset($data['node:panopoly_page:default:featured'])) {
      // Wipe old defaults
      unset($data['node:panopoly_page:default:featured']);

      // Rebuild node:panopoly_page:default:featured
      $panelizer = new stdClass();
      $panelizer->disabled = FALSE; 
      $panelizer->api_version = 1;
      $panelizer->name = 'node:panopoly_page:default:featured';
      $panelizer->title = 'Default';
      $panelizer->panelizer_type = 'node';
      $panelizer->panelizer_key = 'panopoly_page';
      $panelizer->no_blocks = FALSE;
      $panelizer->css_id = '';
      $panelizer->css = '';
      $panelizer->pipeline = 'standard';
      $panelizer->contexts = array();
      $panelizer->relationships = array();
      $panelizer->access = array();
      $panelizer->view_mode = 'featured';
      $panelizer->css_class = '';
      $panelizer->title_element = 'H2';
      $panelizer->link_to_entity = TRUE;
      $panelizer->extra = '';
      $display = new panels_display();
      $display->layout = 'boxton';
      $display->layout_settings = array();
      $display->panel_settings = array(
        'style_settings' => array(
          'default' => NULL,
          'column1' => NULL,
          'column2' => NULL,
          'contentmain' => NULL,
        ),
      );
      $display->cache = array();
      $display->title = '%node:title';
      $display->content = array();
      $display->panels = array();
        $pane = new stdClass();
        $pane->pid = 'new-11';
        $pane->panel = 'contentmain';
        $pane->type = 'entity_field';
        $pane->subtype = 'node:field_featured_image';
        $pane->shown = TRUE;
        $pane->access = array();
        $pane->configuration = array(
          'label' => 'hidden',
          'formatter' => 'image',
          'delta_limit' => 0,
          'delta_offset' => '0',
          'delta_reversed' => FALSE,
          'formatter_settings' => array(
            'image_link' => 'content',
            'image_style' => 'panopoly_image_half',
          ),
          'context' => 'panelizer',
          'override_title' => 0,
          'override_title_text' => '',
        );
        $pane->cache = array();
        $pane->style = array(
          'settings' => NULL,
        );
        $pane->css = array();
        $pane->extras = array();
        $pane->position = 0;
        $pane->locks = array();
        $display->content['new-11'] = $pane;
        $display->panels['contentmain'][0] = 'new-11';
        $pane = new stdClass();
        $pane->pid = 'new-12';
        $pane->panel = 'contentmain';
        $pane->type = 'node_title';
        $pane->subtype = 'node_title';
        $pane->shown = TRUE;
        $pane->access = array();
        $pane->configuration = array(
          'link' => 1,
          'context' => 'panelizer',
          'override_title' => 1,
          'override_title_text' => '',
        );
        $pane->cache = array();
        $pane->style = array(
          'settings' => NULL,
        );
        $pane->css = array();
        $pane->extras = array();
        $pane->position = 1;
        $pane->locks = array();
        $display->content['new-12'] = $pane;
        $display->panels['contentmain'][1] = 'new-12';
        $pane = new stdClass();
        $pane->pid = 'new-13';
        $pane->panel = 'contentmain';
        $pane->type = 'entity_field';
        $pane->subtype = 'node:body';
        $pane->shown = TRUE;
        $pane->access = array();
        $pane->configuration = array(
          'label' => 'hidden',
          'formatter' => 'text_summary_or_trimmed',
          'delta_limit' => 0,
          'delta_offset' => '0',
          'delta_reversed' => FALSE,
          'formatter_settings' => array(
            'trim_length' => '250',
          ),
          'context' => 'panelizer',
          'override_title' => 0,
          'override_title_text' => '',
        );
        $pane->cache = array();
        $pane->style = array(
          'settings' => NULL,
        );
        $pane->css = array();
        $pane->extras = array();
        $pane->position = 2;
        $pane->locks = array();
        $display->content['new-13'] = $pane;
        $display->panels['contentmain'][2] = 'new-13';
        $pane = new stdClass();
        $pane->pid = 'new-14';
        $pane->panel = 'contentmain';
        $pane->type = 'node_links';
        $pane->subtype = 'node_links';
        $pane->shown = TRUE;
        $pane->access = array();
        $pane->configuration = array(
          'override_title' => FALSE,
          'override_title_text' => '',
          'build_mode' => 'featured',
          'identifier' => '',
          'link' => TRUE,
          'context' => 'panelizer',
        );
        $pane->cache = array();
        $pane->style = array(
          'settings' => NULL,
        );
        $pane->css = array(
          'css_class' => 'link-wrapper',
        );
        $pane->extras = array();
        $pane->position = 3;
        $pane->locks = array();
        $display->content['new-14'] = $pane;
        $display->panels['contentmain'][3] = 'new-14';
      $display->hide_title = PANELS_TITLE_NONE;
      $display->title_pane = '0';
      $panelizer->display = $display;
      $data['node:panopoly_page:default:featured'] = $panelizer;
    }
    
    // Rebuild node:panopoly_page:default:teaser
    if (isset($data['node:panopoly_page:default:teaser'])) {
      // Wipe old defaults
      unset($data['node:panopoly_page:default:teaser']);
      
      // Rebuild node:panopoly_page:default:teaser 
      $panelizer = new stdClass();
      $panelizer->disabled = FALSE; 
      $panelizer->api_version = 1;
      $panelizer->name = 'node:panopoly_page:default:teaser';
      $panelizer->title = 'Default';
      $panelizer->panelizer_type = 'node';
      $panelizer->panelizer_key = 'panopoly_page';
      $panelizer->no_blocks = FALSE;
      $panelizer->css_id = '';
      $panelizer->css = '';
      $panelizer->pipeline = 'standard';
      $panelizer->contexts = array();
      $panelizer->relationships = array();
      $panelizer->access = array();
      $panelizer->view_mode = 'teaser';
      $panelizer->css_class = 'page-teaser';
      $panelizer->title_element = 'H2';
      $panelizer->link_to_entity = TRUE;
      $panelizer->extra = '';
      $display = new panels_display();
      $display->layout = 'boxton';
      $display->layout_settings = array();
      $display->panel_settings = array(
        'style_settings' => array(
          'default' => NULL,
          'contentmain' => NULL,
        ),
      );
      $display->cache = array();
      $display->title = '%node:title';
      $display->content = array();
      $display->panels = array();
        $pane = new stdClass();
        $pane->pid = 'new-15';
        $pane->panel = 'contentmain';
        $pane->type = 'entity_field';
        $pane->subtype = 'node:field_featured_image';
        $pane->shown = TRUE;
        $pane->access = array();
        $pane->configuration = array(
          'label' => 'hidden',
          'formatter' => 'image',
          'delta_limit' => 0,
          'delta_offset' => '0',
          'delta_reversed' => FALSE,
          'formatter_settings' => array(
            'image_link' => 'content',
            'image_style' => 'panopoly_image_quarter',
          ),
          'context' => 'panelizer',
          'override_title' => 1,
          'override_title_text' => '',
        );
        $pane->cache = array();
        $pane->style = array(
          'settings' => NULL,
        );
        $pane->css = array();
        $pane->extras = array();
        $pane->position = 0;
        $pane->locks = array();
        $display->content['new-15'] = $pane;
        $display->panels['contentmain'][0] = 'new-15';
        $pane = new stdClass();
        $pane->pid = 'new-16';
        $pane->panel = 'contentmain';
        $pane->type = 'entity_field';
        $pane->subtype = 'node:body';
        $pane->shown = TRUE;
        $pane->access = array();
        $pane->configuration = array(
          'label' => 'hidden',
          'formatter' => 'text_summary_or_trimmed',
          'delta_limit' => 0,
          'delta_offset' => '0',
          'delta_reversed' => FALSE,
          'formatter_settings' => array(
            'trim_length' => '600',
          ),
          'context' => 'panelizer',
          'override_title' => 1,
          'override_title_text' => '',
        );
        $pane->cache = array();
        $pane->style = array(
          'settings' => NULL,
        );
        $pane->css = array();
        $pane->extras = array();
        $pane->position = 1;
        $pane->locks = array();
        $display->content['new-16'] = $pane;
        $display->panels['contentmain'][1] = 'new-16';
        $pane = new stdClass();
        $pane->pid = 'new-17';
        $pane->panel = 'contentmain';
        $pane->type = 'node_links';
        $pane->subtype = 'node_links';
        $pane->shown = TRUE;
        $pane->access = array();
        $pane->configuration = array(
          'override_title' => FALSE,
          'override_title_text' => '',
          'build_mode' => 'teaser',
          'identifier' => '',
          'link' => TRUE,
          'context' => 'panelizer',
        );
        $pane->cache = array();
        $pane->style = array(
          'settings' => NULL,
        );
        $pane->css = array(
          'css_class' => 'link-wrapper',
        );
        $pane->extras = array();
        $pane->position = 2;
        $pane->locks = array();
        $display->content['new-17'] = $pane;
        $display->panels['contentmain'][2] = 'new-17';
      $display->hide_title = PANELS_TITLE_FIXED;
      $display->title_pane = '0';
      $panelizer->display = $display;
      $data['node:panopoly_page:default:teaser'] = $panelizer;
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
if (!function_exists('panopoly_pages_system_info_alter')) {
  function panopoly_pages_system_info_alter(&$info, $file, $type) {
    if ($file->name == 'panopoly_pages') {

      /* Example: We aren't using this field, remove from info file
      if(($key = array_search('node-panopoly_page-field_featured_categories', $info['features']['field'])) !== false) {
        unset($info['features']['field'][$key]);
      }*/
      
      /* Example: Add some dependencies
      array_push($info['dependencies'], "image");
      array_push($info['dependencies'], "list");
      array_push($info['dependencies'], "panelizer");
      */
    }
  }
}

