<?php
/**
 * @file
 * Page callbacks for the OpenBeerFest core pages.
 */

/**
 * Page callback for /home
 */
function openbeerfest_core_home() {
  return theme('openbeerfest_core_home', array());
}

/**
 * Page callback for /breweries
 */
function openbeerfest_core_breweries() {
  return theme('openbeerfest_core_breweries', array());
}

/**
 * Page callback for /about
 */
function openbeerfest_core_about() {
  return theme('openbeerfest_core_about', array());
}
