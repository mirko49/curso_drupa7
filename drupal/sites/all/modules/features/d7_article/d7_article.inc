<?php
/**
 * D7 Article Helper functions
 */

/**
 * Helper function to get a case list
 *
 * @param $count
 * @return string
 */
function d7_article_get_articles_list($count = 0) {
  $content = '';
  $query = db_select('node', 'n')
    ->condition('type', 'article')
    ->fields('n');
  $result = $query->execute()->fetchAll();
  foreach ($result as $item) {
    $node = node_load($item->nid);
    $node_view = node_view($node, 'article_large');
    $content .= drupal_render($node_view);
  }
  dpm($result);
  return $content;
}