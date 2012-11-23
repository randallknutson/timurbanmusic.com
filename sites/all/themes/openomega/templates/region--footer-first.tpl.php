<div<?php print $attributes; ?>>
  <div<?php print $content_attributes; ?>>
    <section id="footer-logo-subscribe" class="clearfix">
      <?php if ($site_name) : ?>
        <div class = 'site-name'><a title="Home" href="/">Tim<span class="lastname">Urban</span></a></div>
      <?php endif; ?>
      <div id="footer-subscribe">
		    <?php print drupal_render($subscribe_form)  ?>
		  </div><!--/footer-subscribe-->
    </section>
    <nav id="footer-nav" class="footer-nav clearfix"><?php print render($footer_menu); ?></nav>
    <section class="clearfix"><?php print $content; ?></section>
  </div>
</div>