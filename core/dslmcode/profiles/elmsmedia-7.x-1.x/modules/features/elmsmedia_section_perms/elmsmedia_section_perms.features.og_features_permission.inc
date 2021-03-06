<?php
/**
 * @file
 * elmsmedia_section_perms.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function elmsmedia_section_perms_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:section:create audio content'
  $permissions['node:section:create audio content'] = array(
    'roles' => array(
      'instructor' => 'instructor',
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:create document content'
  $permissions['node:section:create document content'] = array(
    'roles' => array(
      'instructor' => 'instructor',
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:create elmsmedia_image content'
  $permissions['node:section:create elmsmedia_image content'] = array(
    'roles' => array(
      'instructor' => 'instructor',
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:create elmsmedia_list content'
  $permissions['node:section:create elmsmedia_list content'] = array(
    'roles' => array(
      'instructor' => 'instructor',
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:create external_video content'
  $permissions['node:section:create external_video content'] = array(
    'roles' => array(
      'instructor' => 'instructor',
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:create figurelabel content'
  $permissions['node:section:create figurelabel content'] = array(
    'roles' => array(
      'instructor' => 'instructor',
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:create h5p_content content'
  $permissions['node:section:create h5p_content content'] = array(
    'roles' => array(
      'instructor' => 'instructor',
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:create image_gallery content'
  $permissions['node:section:create image_gallery content'] = array(
    'roles' => array(
      'instructor' => 'instructor',
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:create static_content content'
  $permissions['node:section:create static_content content'] = array(
    'roles' => array(
      'instructor' => 'instructor',
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:create svg content'
  $permissions['node:section:create svg content'] = array(
    'roles' => array(
      'instructor' => 'instructor',
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:create video content'
  $permissions['node:section:create video content'] = array(
    'roles' => array(
      'instructor' => 'instructor',
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:delete any audio content'
  $permissions['node:section:delete any audio content'] = array(
    'roles' => array(
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:delete any document content'
  $permissions['node:section:delete any document content'] = array(
    'roles' => array(
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:delete any elmsmedia_image content'
  $permissions['node:section:delete any elmsmedia_image content'] = array(
    'roles' => array(
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:delete any elmsmedia_list content'
  $permissions['node:section:delete any elmsmedia_list content'] = array(
    'roles' => array(
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:delete any external_video content'
  $permissions['node:section:delete any external_video content'] = array(
    'roles' => array(
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:delete any figurelabel content'
  $permissions['node:section:delete any figurelabel content'] = array(
    'roles' => array(
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:delete any h5p_content content'
  $permissions['node:section:delete any h5p_content content'] = array(
    'roles' => array(
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:delete any image_gallery content'
  $permissions['node:section:delete any image_gallery content'] = array(
    'roles' => array(
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:delete any static_content content'
  $permissions['node:section:delete any static_content content'] = array(
    'roles' => array(
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:delete any svg content'
  $permissions['node:section:delete any svg content'] = array(
    'roles' => array(
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:delete any video content'
  $permissions['node:section:delete any video content'] = array(
    'roles' => array(
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:delete own audio content'
  $permissions['node:section:delete own audio content'] = array(
    'roles' => array(
      'instructor' => 'instructor',
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:delete own document content'
  $permissions['node:section:delete own document content'] = array(
    'roles' => array(
      'instructor' => 'instructor',
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:delete own elmsmedia_image content'
  $permissions['node:section:delete own elmsmedia_image content'] = array(
    'roles' => array(
      'instructor' => 'instructor',
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:delete own elmsmedia_list content'
  $permissions['node:section:delete own elmsmedia_list content'] = array(
    'roles' => array(
      'instructor' => 'instructor',
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:delete own external_video content'
  $permissions['node:section:delete own external_video content'] = array(
    'roles' => array(
      'instructor' => 'instructor',
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:delete own figurelabel content'
  $permissions['node:section:delete own figurelabel content'] = array(
    'roles' => array(
      'instructor' => 'instructor',
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:delete own h5p_content content'
  $permissions['node:section:delete own h5p_content content'] = array(
    'roles' => array(
      'instructor' => 'instructor',
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:delete own image_gallery content'
  $permissions['node:section:delete own image_gallery content'] = array(
    'roles' => array(
      'instructor' => 'instructor',
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:delete own static_content content'
  $permissions['node:section:delete own static_content content'] = array(
    'roles' => array(
      'instructor' => 'instructor',
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:delete own svg content'
  $permissions['node:section:delete own svg content'] = array(
    'roles' => array(
      'instructor' => 'instructor',
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:delete own video content'
  $permissions['node:section:delete own video content'] = array(
    'roles' => array(
      'instructor' => 'instructor',
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:update any audio content'
  $permissions['node:section:update any audio content'] = array(
    'roles' => array(
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:update any document content'
  $permissions['node:section:update any document content'] = array(
    'roles' => array(
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:update any elmsmedia_image content'
  $permissions['node:section:update any elmsmedia_image content'] = array(
    'roles' => array(
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:update any elmsmedia_list content'
  $permissions['node:section:update any elmsmedia_list content'] = array(
    'roles' => array(
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:update any external_video content'
  $permissions['node:section:update any external_video content'] = array(
    'roles' => array(
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:update any figurelabel content'
  $permissions['node:section:update any figurelabel content'] = array(
    'roles' => array(
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:update any h5p_content content'
  $permissions['node:section:update any h5p_content content'] = array(
    'roles' => array(
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:update any image_gallery content'
  $permissions['node:section:update any image_gallery content'] = array(
    'roles' => array(
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:update any static_content content'
  $permissions['node:section:update any static_content content'] = array(
    'roles' => array(
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:update any svg content'
  $permissions['node:section:update any svg content'] = array(
    'roles' => array(
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:update any video content'
  $permissions['node:section:update any video content'] = array(
    'roles' => array(
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:update own audio content'
  $permissions['node:section:update own audio content'] = array(
    'roles' => array(
      'instructor' => 'instructor',
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:update own document content'
  $permissions['node:section:update own document content'] = array(
    'roles' => array(
      'instructor' => 'instructor',
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:update own elmsmedia_image content'
  $permissions['node:section:update own elmsmedia_image content'] = array(
    'roles' => array(
      'instructor' => 'instructor',
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:update own elmsmedia_list content'
  $permissions['node:section:update own elmsmedia_list content'] = array(
    'roles' => array(
      'instructor' => 'instructor',
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:update own external_video content'
  $permissions['node:section:update own external_video content'] = array(
    'roles' => array(
      'instructor' => 'instructor',
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:update own figurelabel content'
  $permissions['node:section:update own figurelabel content'] = array(
    'roles' => array(
      'instructor' => 'instructor',
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:update own h5p_content content'
  $permissions['node:section:update own h5p_content content'] = array(
    'roles' => array(
      'instructor' => 'instructor',
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:update own image_gallery content'
  $permissions['node:section:update own image_gallery content'] = array(
    'roles' => array(
      'instructor' => 'instructor',
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:update own static_content content'
  $permissions['node:section:update own static_content content'] = array(
    'roles' => array(
      'instructor' => 'instructor',
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:update own svg content'
  $permissions['node:section:update own svg content'] = array(
    'roles' => array(
      'instructor' => 'instructor',
      'lead instructor' => 'lead instructor',
    ),
  );

  // Exported og permission: 'node:section:update own video content'
  $permissions['node:section:update own video content'] = array(
    'roles' => array(
      'instructor' => 'instructor',
      'lead instructor' => 'lead instructor',
    ),
  );

  return $permissions;
}
