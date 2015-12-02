<?php

/**
 * Callback for D7 Homepage
 *
 * @see d7_homepage_menu.
 */
function d7_homepage_callback() {
  $first_block = module_invoke('d7_homepage', 'block_view', 'd7_homepage_first');
  return render($first_block['content']);
//  return "hola";
}
