<?php

/**
 * @file
 * Migration class used to import Default Data Stories from fixtures.
 */

/**
 * Default content extension of data stories fixtures migration class.
 */
class DefaultContentDataStoriesImport extends FcrlDataStoriesImport {

  /**
   * {@inheritdoc}
   */
  public function __construct($arguments) {

    if (!isset($arguments['endpoint'])) {
      $arguments['endpoint'] = drupal_get_path('module', 'fcrl_default_content') . '/data/';
      $arguments['list_url'] = 'fcrl_data_story_list.json';
      $arguments['item_url'] = 'fcrl_data_story_show%3Fid=:id.json';
    }

    parent::__construct($arguments);
  }

}
