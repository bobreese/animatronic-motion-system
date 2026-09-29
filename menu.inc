<?php
// FPP installs this repo as plugins/animatronic-motion-system, so the menu
// links must use this directory's name, not the nested plugin folder's.
$capturePluginName = basename(__DIR__);
include __DIR__ . '/fpp-plugins/fpp-performance-capture/menu.inc';
unset($capturePluginName);  // FPP includes every plugin's menu.inc in one scope
?>
