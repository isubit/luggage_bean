<div class="link-block <?php print $bean->field_link_block_style['und'][0]['value'] ?>" <?php print $attributes; ?>>
  <?php if (isset($bean->field_link_block_url['und'][0]['url'])): ?><a class="link-block_link" href="<?php print $bean->field_link_block_url['und'][0]['url']; ?>"><?php else: ?><div class="link-block_wrap"><?php endif ?>

    <?php if (isset($bean->field_link_block_image['und'][0]['uri'])): ?>
      <div class="link-block_img">
        <img src="<?php print file_create_url($bean->field_link_block_image['und'][0]['uri']); ?>" alt="<?php print $bean->field_link_block_image['und'][0]['alt']; ?>" />
      </div>
    <?php endif; ?>

    <?php if ($bean->title !== ''): ?>
      <div class="link-block_label">
        <p>
          <?php if (isset($bean->field_link_block_label_icon['und'][0]['value'])): ?>
            <span class="fa <?php print $bean->field_link_block_label_icon['und'][0]['value']; ?>"></span>
          <?php endif; ?>
          <span><?php print $title; ?></span>
        </p>
      </div>
    <?php endif ?>
    <?php if (isset($bean->field_link_block_url['und'][0]['url'])): ?></a><?php else: ?></div><?php endif ?>
</div>