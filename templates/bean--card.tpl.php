<div class="bean-card <?php if(isset($bean->field_card_style['und'][0]['value'])): print $bean->field_card_style['und'][0]['value']; endif; ?>" <?php print $attributes; ?>>
  <?php if (isset($bean->field_card_url['und'][0]['url'])): ?><a class="bean-card_link" href="<?php print $bean->field_card_url['und'][0]['url']; ?>"><?php else: ?><div class="bean-card_wrap"><?php endif ?>

    <?php if (isset($bean->field_card_image['und'][0]['uri'])): ?>
      <div class="bean-card_img">
        <img src="<?php print file_create_url($bean->field_card_image['und'][0]['uri']); ?>" alt="<?php print $bean->field_card_image['und'][0]['alt']; ?>" />
      </div>
    <?php endif; ?>

    <?php if ($bean->title !== ''): ?>
      <div class="bean-card_label <?php print $bean->field_card_text_size['und'][0]['value'] ?>">
        <p>
          <?php if (isset($bean->field_card_label_icon['und'][0]['value'])): ?>
            <span class="fa <?php print $bean->field_card_label_icon['und'][0]['value']; ?>"></span>
          <?php endif; ?>
          <span><?php print $title; ?></span>
        </p>
      </div>
    <?php endif ?>
    <?php if (isset($bean->field_card_url['und'][0]['url'])): ?></a><?php else: ?></div><?php endif ?>
</div>
