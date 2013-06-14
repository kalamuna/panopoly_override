<?php
/**
 * @file
 * Panopoly Admin overrides
 */

/**
 * Implements hook_strongarm_alter()
 */
if (!function_exists('panopoly_admin_strongarm_alter')) {
  function panopoly_admin_strongarm_alter(&$data) {
    /* Example: Change default admin role
    if (isset($data['user_admin_role'])) {
      $data['user_admin_role']->value = '6';
    }*/
    
    
  }
}
    
/**
 * Implements hook_field_default_fields_alter()
 */
if (!function_exists('panopoly_admin_default_page_manager_handlers_alter')) {
  function panopoly_admin_default_page_manager_handlers_alter(&$data) {
    
    /* Example: Provide completely different page manager handler for node_edit_panel_context
    if (isset($data['node_edit_panel_context'])) {
      
      // Wipe default panopoly_admin handler
      unset($data['node_edit_panel_context']);

      // Provide new handler
      $handler = new stdClass();
      $handler->disabled = FALSE; 
      $handler->api_version = 1;
      $handler->name = 'node_edit_panel_context';
      $handler->task = 'node_edit';
      $handler->subtask = '';
      $handler->handler = 'panel_context';
      $handler->weight = 0;
      $handler->conf = array(
        'title' => 'Node Edit Page',
        'no_blocks' => 0,
        'pipeline' => 'standard',
        'css_id' => 'node-edit',
        'css' => '',
        'contexts' => array(),
        'relationships' => array(),
      );
      $display = new panels_display();
      $display->layout = 'moscone_flipped_alt';
      $display->layout_settings = array();
      $display->panel_settings = array(
        'style_settings' => array(
          'default' => NULL,
          'contentmain' => array(
            'content' => array(
              'element' => 'div',
              'attributes' => array(
                'id' => '',
                'class' => 'well node-edit',
              ),
            ),
            'theme' => 0,
          ),
          'sidebar' => array(
            'content' => array(
              'element' => 'div',
              'attributes' => array(
                'id' => '',
                'class' => 'well node-edit',
              ),
            ),
            'theme' => 0,
          ),
          'header' => NULL,
          'lower' => NULL,
          'footer' => NULL,
        ),
        'sidebar' => array(
          'style' => 'wrapper_element',
        ),
        'contentmain' => array(
          'style' => 'wrapper_element',
        ),
      );
      $display->cache = array();
      $display->title = '';
      $display->content = array();
      $display->panels = array();
        $pane = new stdClass();
        $pane->pid = 'new-1';
        $pane->panel = 'contentmain';
        $pane->type = 'node_form_title';
        $pane->subtype = 'node_form_title';
        $pane->shown = TRUE;
        $pane->access = array();
        $pane->configuration = array(
          'context' => 'argument_node_edit_1',
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
        $display->content['new-1'] = $pane;
        $display->panels['contentmain'][0] = 'new-1';
        $pane = new stdClass();
        $pane->pid = 'new-2';
        $pane->panel = 'contentmain';
        $pane->type = 'node_form_path';
        $pane->subtype = 'node_form_path';
        $pane->shown = TRUE;
        $pane->access = array();
        $pane->configuration = array(
          'context' => 'argument_node_edit_1',
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
        $display->content['new-2'] = $pane;
        $display->panels['contentmain'][1] = 'new-2';
        $pane = new stdClass();
        $pane->pid = 'new-3';
        $pane->panel = 'contentmain';
        $pane->type = 'entity_form_field';
        $pane->subtype = 'node:body';
        $pane->shown = TRUE;
        $pane->access = array();
        $pane->configuration = array(
          'context' => 'argument_node_edit_1',
          'override_title' => 0,
          'override_title_text' => '',
          'formatter' => '',
          'label' => '',
        );
        $pane->cache = array();
        $pane->style = array(
          'settings' => NULL,
        );
        $pane->css = array();
        $pane->extras = array();
        $pane->position = 2;
        $pane->locks = array();
        $display->content['new-3'] = $pane;
        $display->panels['contentmain'][2] = 'new-3';
        $pane = new stdClass();
        $pane->pid = 'new-4';
        $pane->panel = 'contentmain';
        $pane->type = 'entity_form_field';
        $pane->subtype = 'node:field_kala_sources';
        $pane->shown = TRUE;
        $pane->access = array();
        $pane->configuration = array(
          'label' => '',
          'formatter' => '',
          'context' => 'argument_node_edit_1',
          'override_title' => 0,
          'override_title_text' => '',
        );
        $pane->cache = array();
        $pane->style = array(
          'settings' => NULL,
        );
        $pane->css = array(
          'css_class' => 'short-textarea',
          'css_id' => '',
        );
        $pane->extras = array();
        $pane->position = 3;
        $pane->locks = array();
        $display->content['new-4'] = $pane;
        $display->panels['contentmain'][3] = 'new-4';
        $pane = new stdClass();
        $pane->pid = 'new-5';
        $pane->panel = 'contentmain';
        $pane->type = 'node_form_author';
        $pane->subtype = 'node_form_author';
        $pane->shown = TRUE;
        $pane->access = array();
        $pane->configuration = array(
          'context' => 'argument_node_edit_1',
          'override_title' => 0,
          'override_title_text' => '',
        );
        $pane->cache = array();
        $pane->style = array(
          'settings' => NULL,
        );
        $pane->css = array();
        $pane->extras = array();
        $pane->position = 4;
        $pane->locks = array();
        $display->content['new-5'] = $pane;
        $display->panels['contentmain'][4] = 'new-5';
        $pane = new stdClass();
        $pane->pid = 'new-6';
        $pane->panel = 'contentmain';
        $pane->type = 'form';
        $pane->subtype = 'form';
        $pane->shown = TRUE;
        $pane->access = array();
        $pane->configuration = array(
          'context' => 'argument_node_edit_1',
          'override_title' => 1,
          'override_title_text' => '',
        );
        $pane->cache = array();
        $pane->style = array(
          'settings' => NULL,
        );
        $pane->css = array();
        $pane->extras = array();
        $pane->position = 5;
        $pane->locks = array();
        $display->content['new-6'] = $pane;
        $display->panels['contentmain'][5] = 'new-6';
        $pane = new stdClass();
        $pane->pid = 'new-7';
        $pane->panel = 'contentmain';
        $pane->type = 'entity_form_field';
        $pane->subtype = 'node:field_greeno_article_practices';
        $pane->shown = TRUE;
        $pane->access = array();
        $pane->configuration = array(
          'label' => '',
          'formatter' => '',
          'context' => 'argument_node_edit_1',
          'override_title' => 0,
          'override_title_text' => '',
        );
        $pane->cache = array();
        $pane->style = array(
          'settings' => NULL,
        );
        $pane->css = array();
        $pane->extras = array();
        $pane->position = 6;
        $pane->locks = array();
        $display->content['new-7'] = $pane;
        $display->panels['contentmain'][6] = 'new-7';
        $pane = new stdClass();
        $pane->pid = 'new-8';
        $pane->panel = 'contentmain';
        $pane->type = 'node_form_buttons';
        $pane->subtype = 'node_form_buttons';
        $pane->shown = TRUE;
        $pane->access = array();
        $pane->configuration = array(
          'context' => 'argument_node_edit_1',
          'override_title' => 1,
          'override_title_text' => '',
        );
        $pane->cache = array();
        $pane->style = array(
          'settings' => NULL,
        );
        $pane->css = array();
        $pane->extras = array();
        $pane->position = 7;
        $pane->locks = array();
        $display->content['new-8'] = $pane;
        $display->panels['contentmain'][7] = 'new-8';
        $pane = new stdClass();
        $pane->pid = 'new-9';
        $pane->panel = 'header';
        $pane->type = 'custom';
        $pane->subtype = 'custom';
        $pane->shown = TRUE;
        $pane->access = array();
        $pane->configuration = array(
          'admin_title' => 'Page Heading',
          'body' => '<h1>Add/Edit Content</h1>',
          'format' => 'panopoly_html_text',
          'substitute' => 1,
          'title' => '',
        );
        $pane->cache = array();
        $pane->style = array(
          'settings' => NULL,
        );
        $pane->css = array(
          'css_class' => 'header-middle',
          'css_id' => '',
        );
        $pane->extras = array();
        $pane->position = 0;
        $pane->locks = array();
        $display->content['new-9'] = $pane;
        $display->panels['header'][0] = 'new-9';
        $pane = new stdClass();
        $pane->pid = 'new-10';
        $pane->panel = 'sidebar';
        $pane->type = 'entity_form_field';
        $pane->subtype = 'node:field_image';
        $pane->shown = TRUE;
        $pane->access = array();
        $pane->configuration = array(
          'context' => 'argument_node_edit_1',
          'override_title' => 0,
          'override_title_text' => '',
          'formatter' => '',
          'label' => '',
        );
        $pane->cache = array();
        $pane->style = array(
          'settings' => NULL,
        );
        $pane->css = array();
        $pane->extras = array();
        $pane->position = 0;
        $pane->locks = array();
        $display->content['new-10'] = $pane;
        $display->panels['sidebar'][0] = 'new-10';
        $pane = new stdClass();
        $pane->pid = 'new-11';
        $pane->panel = 'sidebar';
        $pane->type = 'entity_form_field';
        $pane->subtype = 'node:field_embedded_image';
        $pane->shown = TRUE;
        $pane->access = array();
        $pane->configuration = array(
          'context' => 'argument_node_edit_1',
          'override_title' => 0,
          'override_title_text' => '',
          'formatter' => '',
          'label' => '',
        );
        $pane->cache = array();
        $pane->style = array(
          'settings' => NULL,
        );
        $pane->css = array();
        $pane->extras = array();
        $pane->position = 1;
        $pane->locks = array();
        $display->content['new-11'] = $pane;
        $display->panels['sidebar'][1] = 'new-11';
        $pane = new stdClass();
        $pane->pid = 'new-12';
        $pane->panel = 'sidebar';
        $pane->type = 'entity_form_field';
        $pane->subtype = 'node:field_featured_image';
        $pane->shown = TRUE;
        $pane->access = array();
        $pane->configuration = array(
          'label' => '',
          'formatter' => '',
          'context' => 'argument_node_edit_1',
          'override_title' => 1,
          'override_title_text' => 'Featured image',
        );
        $pane->cache = array();
        $pane->style = array(
          'settings' => NULL,
        );
        $pane->css = array();
        $pane->extras = array();
        $pane->position = 2;
        $pane->locks = array();
        $display->content['new-12'] = $pane;
        $display->panels['sidebar'][2] = 'new-12';
        $pane = new stdClass();
        $pane->pid = 'new-13';
        $pane->panel = 'sidebar';
        $pane->type = 'entity_form_field';
        $pane->subtype = 'node:field_greeno_hub_image';
        $pane->shown = TRUE;
        $pane->access = array();
        $pane->configuration = array(
          'label' => '',
          'formatter' => '',
          'context' => 'argument_node_edit_1',
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
        $display->content['new-13'] = $pane;
        $display->panels['sidebar'][3] = 'new-13';
        $pane = new stdClass();
        $pane->pid = 'new-14';
        $pane->panel = 'sidebar';
        $pane->type = 'entity_form_field';
        $pane->subtype = 'node:field_greeno_hub_ref_category';
        $pane->shown = TRUE;
        $pane->access = array();
        $pane->configuration = array(
          'label' => '',
          'formatter' => '',
          'context' => 'argument_node_edit_1',
          'override_title' => 0,
          'override_title_text' => '',
        );
        $pane->cache = array();
        $pane->style = array(
          'settings' => NULL,
        );
        $pane->css = array();
        $pane->extras = array();
        $pane->position = 4;
        $pane->locks = array();
        $display->content['new-14'] = $pane;
        $display->panels['sidebar'][4] = 'new-14';
        $pane = new stdClass();
        $pane->pid = 'new-15';
        $pane->panel = 'sidebar';
        $pane->type = 'entity_form_field';
        $pane->subtype = 'node:field_greeno_topics';
        $pane->shown = TRUE;
        $pane->access = array();
        $pane->configuration = array(
          'label' => '',
          'formatter' => '',
          'context' => 'argument_node_edit_1',
          'override_title' => 0,
          'override_title_text' => '',
        );
        $pane->cache = array();
        $pane->style = array(
          'settings' => NULL,
        );
        $pane->css = array();
        $pane->extras = array();
        $pane->position = 5;
        $pane->locks = array();
        $display->content['new-15'] = $pane;
        $display->panels['sidebar'][5] = 'new-15';
        $pane = new stdClass();
        $pane->pid = 'new-16';
        $pane->panel = 'sidebar';
        $pane->type = 'entity_form_field';
        $pane->subtype = 'node:field_featured_categories';
        $pane->shown = TRUE;
        $pane->access = array();
        $pane->configuration = array(
          'context' => 'argument_node_edit_1',
          'override_title' => 1,
          'override_title_text' => 'Content category',
          'formatter' => '',
          'label' => '',
        );
        $pane->cache = array();
        $pane->style = array(
          'settings' => NULL,
        );
        $pane->css = array();
        $pane->extras = array();
        $pane->position = 6;
        $pane->locks = array();
        $display->content['new-16'] = $pane;
        $display->panels['sidebar'][6] = 'new-16';
        $pane = new stdClass();
        $pane->pid = 'new-17';
        $pane->panel = 'sidebar';
        $pane->type = 'node_form_menu';
        $pane->subtype = 'node_form_menu';
        $pane->shown = TRUE;
        $pane->access = array();
        $pane->configuration = array(
          'context' => 'argument_node_edit_1',
          'override_title' => 0,
          'override_title_text' => '',
        );
        $pane->cache = array();
        $pane->style = array(
          'settings' => NULL,
        );
        $pane->css = array();
        $pane->extras = array();
        $pane->position = 7;
        $pane->locks = array();
        $display->content['new-17'] = $pane;
        $display->panels['sidebar'][7] = 'new-17';
        $pane = new stdClass();
        $pane->pid = 'new-18';
        $pane->panel = 'sidebar';
        $pane->type = 'node_form_publishing';
        $pane->subtype = 'node_form_publishing';
        $pane->shown = FALSE;
        $pane->access = array();
        $pane->configuration = array(
          'context' => 'argument_node_edit_1',
          'override_title' => 0,
          'override_title_text' => '',
        );
        $pane->cache = array();
        $pane->style = array(
          'settings' => NULL,
        );
        $pane->css = array();
        $pane->extras = array();
        $pane->position = 8;
        $pane->locks = array();
        $display->content['new-18'] = $pane;
        $display->panels['sidebar'][8] = 'new-18';
        $pane = new stdClass();
        $pane->pid = 'new-19';
        $pane->panel = 'sidebar';
        $pane->type = 'entity_form_field';
        $pane->subtype = 'node:field_category';
        $pane->shown = TRUE;
        $pane->access = array();
        $pane->configuration = array(
          'label' => '',
          'formatter' => '',
          'context' => 'argument_node_edit_1',
          'override_title' => 0,
          'override_title_text' => '',
        );
        $pane->cache = array();
        $pane->style = array(
          'settings' => NULL,
        );
        $pane->css = array();
        $pane->extras = array();
        $pane->position = 9;
        $pane->locks = array();
        $display->content['new-19'] = $pane;
        $display->panels['sidebar'][9] = 'new-19';
        $pane = new stdClass();
        $pane->pid = 'new-20';
        $pane->panel = 'sidebar';
        $pane->type = 'entity_form_field';
        $pane->subtype = 'node:field_tags';
        $pane->shown = TRUE;
        $pane->access = array();
        $pane->configuration = array(
          'label' => '',
          'formatter' => '',
          'context' => 'argument_node_edit_1',
          'override_title' => 0,
          'override_title_text' => '',
        );
        $pane->cache = array();
        $pane->style = array(
          'settings' => NULL,
        );
        $pane->css = array();
        $pane->extras = array();
        $pane->position = 10;
        $pane->locks = array();
        $display->content['new-20'] = $pane;
        $display->panels['sidebar'][10] = 'new-20';
        $pane = new stdClass();
        $pane->pid = 'new-21';
        $pane->panel = 'sidebar';
        $pane->type = 'entity_form_field';
        $pane->subtype = 'node:field_greeno_article_level';
        $pane->shown = TRUE;
        $pane->access = array();
        $pane->configuration = array(
          'label' => '',
          'formatter' => '',
          'context' => 'argument_node_edit_1',
          'override_title' => 0,
          'override_title_text' => '',
        );
        $pane->cache = array();
        $pane->style = array(
          'settings' => NULL,
        );
        $pane->css = array();
        $pane->extras = array();
        $pane->position = 11;
        $pane->locks = array();
        $display->content['new-21'] = $pane;
        $display->panels['sidebar'][11] = 'new-21';
        $pane = new stdClass();
        $pane->pid = 'new-22';
        $pane->panel = 'sidebar';
        $pane->type = 'entity_form_field';
        $pane->subtype = 'node:field_greeno_hub_sponsors';
        $pane->shown = TRUE;
        $pane->access = array();
        $pane->configuration = array(
          'label' => '',
          'formatter' => '',
          'context' => 'argument_node_edit_1',
          'override_title' => 0,
          'override_title_text' => '',
        );
        $pane->cache = array();
        $pane->style = array(
          'settings' => NULL,
        );
        $pane->css = array();
        $pane->extras = array();
        $pane->position = 12;
        $pane->locks = array();
        $display->content['new-22'] = $pane;
        $display->panels['sidebar'][12] = 'new-22';
      $display->hide_title = PANELS_TITLE_FIXED;
      $display->title_pane = 'new-6';
      $handler->conf['display'] = $display;
      
      $data['node_edit_panel_context'] = $handler;
    }*/
    
  }
}
