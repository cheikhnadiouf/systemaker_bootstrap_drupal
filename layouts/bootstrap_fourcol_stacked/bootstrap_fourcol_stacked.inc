<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('Four Columns Stacked'),
  'category' => t('Bootstrap'),
  'icon' => 'bootstrap_fourcol_stacked.png',
  'theme' => 'bootstrap_fourcol_stacked',
  'admin css' => '../panels-bootstrap-layouts-admin.css',
  'regions' => array(
    'top' => t('Top'),
    'left' => t('Left side'),
    'middle1' => t('Middle column1'),
    'middle2' => t('Middle column2'),
    'right' => t('Right side'),
    'bottom' => t('Bottom'),
  ),
);
