<?php
/**
 * CIS LMS-less template file
 */
  // support authcache_cookie value that gets dynamically loaded instead
  if (isset($user_name)) {
    $username = $user_name;
  }
?>
<!-- Ecosystem Top Nav -->
<div id="etb-course-nav" class="row full collapse <?php print $lmsless_classes[$distro]['color'] . ' ' . $lmsless_classes[$distro]['dark'] . ' ' . $lmsless_classes[$distro]['color'];?>-border">
  <div class="s12 m7 col">
    <nav class="top-bar etb-nav middle-align-wrap etb-nav--center--parent" data-options="is_hover: false" data-topbar>
     <section class="top-bar-section title-link">
        <h2 class="element-invisible"><?php print t('System navigation bar');?></h2>
        <!-- Left Nav Section -->
        <ul class="left-nav-section">
          <li class="first expanded">
          <?php
          // account for roles that don't have access to this
          if (!empty($elmsln_main_menu)) {?>
          <a id="elmsln-tools-trigger" class="course-title elmsln-course-title elmsln-dropdown-button" href="#elmsln-settings-menu" title="" data-activates="elmsln-tools-menu" aria-controls="elmsln-tools-menu" aria-expanded="false" data-jwerty-key="t" data-voicecommand="open settings (menu)">
            <span class="course-title-group">
              <span class="white-text course-title"><?php print $slogan; ?></span>
              <span class="white-text course-abrv"><?php print $site_name; ?> <?php if (isset($section_title)) : print $section_title; endif; ?></span>
            </span>
            <span class="course-title-icon icon--dropdown white-text"></span>
          </a>
          <ul id="elmsln-tools-menu" class="dropdown-content" aria-hidden="true">
            <li><?php print $elmsln_main_menu; ?></li>
          </ul>
          <?php
          }
          else { ?>
          <a id="elmsln-tools-trigger" class="course-title elmsln-course-title" href="<?php print base_path(); ?>" title="<?php print t('Home'); ?>">
            <span class="course-title-group">
              <span class="course-title"><?php print $slogan; ?></span>
              <span class="course-abrv"><?php print $site_name; ?> <?php if (isset($section_title)) : print $section_title; endif; ?></span>
            </span>
          </a>
          <?php } ?>
        </li>
        <?php if ($bar_elements['network']) : ?>
          <li class="elmsln-network-menu-item">
            <a href="#network-menu-button" class="middle-align-wrap elmsln-network-button elmsln-left-side-nav-trigger white-text waves-effect waves-<?php print $lmsless_classes[$distro]['color'];?> waves-light" data-activates="block-cis-lmsless-cis-lmsless-network-nav-modal" data-jwerty-key="n" data-voicecommand="open network">
              <div class="cis-lmsless-network elmsln-icon icon-network"></div>
              <span class="hide-on-med-and-down truncate"><?php print t('Network'); ?></span>
            </a>
          </li>
        <?php endif; ?>
        </ul>
      </section>
    </nav>
  </div>
  <div class="etb-title s12 m5 col">
    <nav class="top-bar etb-nav flex-vertical-right center-align-wrap" data-options="is_hover: false" data-topbar>
     <section>
      <ul class="menu right clearfix">
        <?php if ($bar_elements['help']) : ?>
        <li>
          <a href="<?php print $help_link;?>" class="elmsln-help-button middle-align-wrap white-text waves-effect waves-<?php print $lmsless_classes[$distro]['color'];?> waves-light" data-jwerty-key="h" data-voicecommand="help">
            <i class="material-icons">help</i>
            <span class="hide-on-med-and-down"><?php print t('Help'); ?></span>
          </a>
        </li>
        <?php endif; ?>
        <?php if (isset($bar_elements['resources']) && $bar_elements['resources']) : ?>
        <li>
          <a href="<?php print $resources_link;?>" class="elmsln-resource-button middle-align-wrap white-text waves-effect waves-<?php print $lmsless_classes[$distro]['color'];?> waves-light" data-jwerty-key="r" data-voicecommand="resources">
            <i class="material-icons">local_library</i>
            <span class="hide-on-med-and-down"><?php print t('Resources'); ?></span>
          </a>
        </li>
        <?php endif; ?>
        <?php if ($bar_elements['syllabus']) : ?>
          <li>
          <a href="<?php print $syllabus_link;?>" class="elmsln-syllabus-button middle-align-wrap white-text waves-effect waves-<?php print $lmsless_classes[$distro]['color'];?> waves-light" data-jwerty-key="y" data-voicecommand="syllabus">
            <i class="material-icons">info_outline</i>
            <span class="hide-on-med-and-down"><?php print t('Syllabus'); ?></span>
          </a>
        </li>
        <?php endif; ?>
        <?php if ($bar_elements['user']) : ?>
        <li class="elmsln-user-profile-menu-item ferpa-protect">
          <a href="#user-menu-button" class="middle-align-wrap elmsln-user-button elmsln-right-side-nav-trigger white-text waves-effect waves-<?php print $lmsless_classes[$distro]['color'];?> waves-light" data-activates="block-cis-lmsless-cis-lmsless-user-nav-modal" data-jwerty-key="u" data-voicecommand="open user">
            <?php if (isset($userpicture)) { print $userpicture; } ?>
            <span class="hide-on-med-and-down truncate"><?php print $username; ?></span>
          </a>
        </li>
        <?php endif; ?>
      </ul>
    </section>
    </nav>
  </div>
</div>
<div id="etb-network-nav" class="row full collapse white">
  <ul class="elmsln-service-list">
  <?php foreach ($network['services']['Network'] as $service) :
    if (!isset($service['icon'])) {
      $service['icon'] = $service['machine_name'];
    }
    // apply default system color if we get misses
    if (!isset($service['distro'])) {
      $service['distro'] = '_default_';
    }
    $activetool = 'tooltipped ';
    $label = '';
    $iconcolor = 'black-text';
    $stitle = token_replace($service['title']);
    if ($service['machine_name'] == $network['active']['machine_name']) {
      $activetool = $lmsless_classes[$service['distro']]['color'] . ' active-system white-text ';
      $iconcolor = $lmsless_classes[$service['distro']]['color'] . ' white-text ';
      $label = '<span class="elmsln-network-label hide-on-med-and-down truncate">' . $stitle . '</span>';
    }
    ?>
    <li><a data-delay="75" data-tooltip="<?php print $stitle; ?>" data-prefetch-hover="true" href="<?php print token_replace($service['url']); ?>" class="black-text waves-effect waves-<?php print $lmsless_classes[$service['distro']]['color'];?> waves-light <?php print $activetool . $service['icon']; ?>-icon"  data-jwerty-key="ctrl+<?php print drupal_strtolower(substr($stitle, 0, 1)); ?>" data-voicecommand="<?php print t('go to ') . drupal_strtolower($stitle); ?>" data-elmsln-hover="<?php print $lmsless_classes[$service['distro']]['color'];?> <?php print $lmsless_classes[$service['distro']]['dark'];?> white-text" data-elmsln-icon-hover="hover-white-text">
    <?php if (isset($service['icon_library']) && $service['icon_library'] == 'material'): ?>
      <div class="material-icon elmsln-network-icon left elmsln-icon"><i class="material-icons"><?php print $service['icon']; ?></i></div>
    <?php else: ?>
      <div class="elmsln-network-icon left elmsln-icon icon-<?php print $service['icon'] . ' ' . $iconcolor;?>"></div>
    <?php endif; ?>
      <?php print $label; ?>
    </a></li>
  <?php endforeach ?>
  </ul>
</div>
