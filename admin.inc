<?php

function giftoflife_donate_dengionline_admin_settings($form_state) {
  $form['giftoflife_donate_dengionline_id'] = array(
    '#type'          => 'textfield',
    '#title'         => t('OnlineDengi ID'),
    '#description'   => t('Id of electronical shop.'),
    '#default_value' => variable_get('dengionline_id', '333333'),
    '#size'          => 40,
    '#required'      => TRUE,
    '#maxlength'     => 255,
  );
  $form['giftoflife_donate_dengionline_url'] = array(
    '#type' 		 => 'textfield',
    '#title'         => t('dengionline URL'),
    '#default_value' => variable_get('dengionline_url', 'http://www.onlinedengi.ru/wmpaycheck.php'),
    '#description'   => t('The DengiOnline URL to redirect to for donate.'),
    '#size'          => 40,
    '#required'      => TRUE,
    '#maxlength'     => 255,
  );
  $form['giftoflife_donate_dengionline_complete_url'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Donate complete URL'),
    '#description'   => t('The URL on your site that the user will be redirected to after they complete donate.'),
    '#default_value' => variable_get('dengionline_complete_url', 'giftoflife_donate/thanks'),
    '#size'          => 40,
    '#required'      => TRUE,
    '#maxlength'     => 255,
  );
  $form['giftoflife_donate_dengionline_header'] = array(
    '#type'          => 'textarea',
    '#title'         => t('Donate page header'),
    '#description'   => t('HTML text to display before the form.'),
    '#default_value' => variable_get('dengionline_header', '<p>Please complete the form below and then you will be directed to Dengionline for completing the donate.</p>'),
  );
  $form['giftoflife_donate_dengionline_footer'] = array(
    '#type'          => 'textarea',
    '#title'         => t('Donate page footer'),
    '#description'   => t('HTML text to display after the form.'),
    '#default_value' => variable_get('dengionline_footer', '<p>We thank you for your business.</p>'),
  );
  return system_settings_form($form);
}

function giftoflife_donate_yandexmoney_admin_settings($form_state) {
  $form['giftoflife_donate_yandexmoney_shopid'] = array(
    '#type'          => 'textfield',
    '#title'         => t('ShopID'),
    '#description'   => t('Yandex Money ShopID.'),
    '#default_value' => variable_get('yandexmoney_shopid', '10631'),
    '#size'          => 40,
    '#required'      => TRUE,
    '#maxlength'     => 255,
  );
  $form['giftoflife_donate_yandexmoney_scid'] = array(
    '#type'          => 'textfield',
    '#title'         => t('scid'),
    '#description'   => t('Yandex Money scid.'),
    '#default_value' => variable_get('yandexmoney_scid', '2399'),
    '#size'          => 40,
    '#required'      => TRUE,
    '#maxlength'     => 255,
  );
  $form['giftoflife_donate_yandexmoney_url'] = array(
    '#type' 		 => 'textfield',
    '#title'         => t('Yandex Money URL'),
    '#default_value' => variable_get('yandexmoney_url', 'https://money.yandex.ru/eshop.xml'),
    '#description'   => t('The Yandex Money URL to redirect to for donate.'),
    '#size'          => 40,
    '#required'      => TRUE,
    '#maxlength'     => 255,
  );
  $form['giftoflife_donate_yandexmoney_complete_url'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Donate complete URL'),
    '#description'   => t('The URL on your site that the user will be redirected to after they complete donate.'),
    '#default_value' => variable_get('yandexmoney_complete_url', 'giftoflife_donate/thanks'),
    '#size'          => 40,
    '#required'      => TRUE,
    '#maxlength'     => 255,
  );
  $form['giftoflife_donate_yandexmoney_header'] = array(
    '#type'          => 'textarea',
    '#title'         => t('Donate page header'),
    '#description'   => t('HTML text to display before the form.'),
    '#default_value' => variable_get('yandexmoney_header', '<p>Please complete the form below and then you will be directed to Yandex Money for completing the donate.</p>'),
  );
  $form['giftoflife_donate_yandexmoney_footer'] = array(
    '#type'          => 'textarea',
    '#title'         => t('Donate page footer'),
    '#description'   => t('HTML text to display after the form.'),
    '#default_value' => variable_get('yandexmoney_footer', '<p>We thank you for your business.</p>'),
  );
  return system_settings_form($form);
}

function giftoflife_donate_rbkmoney_admin_settings($form_state) {
  $form['giftoflife_donate_rbkmoney_eshopid'] = array(
    '#type'          => 'textfield',
    '#title'         => t('eshopID'),
    '#description'   => t('RBK Money eshopID.'),
    '#default_value' => variable_get('rbkmoney_eshopid', '2003743'),
    '#size'          => 40,
    '#required'      => TRUE,
    '#maxlength'     => 255,
  );
  $form['giftoflife_donate_rbkmoney_url'] = array(
    '#type' 		 => 'textfield',
    '#title'         => t('RBK Money URL'),
    '#default_value' => variable_get('rbkmoney_url', 'https://rbkmoney.ru/acceptpurchase.aspx'),
    '#description'   => t('The RBK Money URL to redirect to for donate.'),
    '#size'          => 40,
    '#required'      => TRUE,
    '#maxlength'     => 255,
  );
  $form['giftoflife_donate_rbkmoney_complete_url'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Donate complete URL'),
    '#description'   => t('The URL on your site that the user will be redirected to after they complete donate.'),
    '#default_value' => variable_get('rbkmoney_complete_url', 'giftoflife_donate/thanks'),
    '#size'          => 40,
    '#required'      => TRUE,
    '#maxlength'     => 255,
  );
  $form['giftoflife_donate_rbkmoney_header'] = array(
    '#type'          => 'textarea',
    '#title'         => t('Donate page header'),
    '#description'   => t('HTML text to display before the form.'),
    '#default_value' => variable_get('rbkmoney_header', '<p>Please complete the form below and then you will be directed to RBK Money for completing the donate.</p>'),
  );
  $form['giftoflife_donate_rbkmoney_footer'] = array(
    '#type'          => 'textarea',
    '#title'         => t('Donate page footer'),
    '#description'   => t('HTML text to display after the form.'),
    '#default_value' => variable_get('rbkmoney_footer', '<p>We thank you for your business.</p>'),
  );
  return system_settings_form($form);
}

function giftoflife_donate_admin_settings($form_state) {
  $form['giftoflife_donate_help'] = array(
  	'#value'		 => t('Please walk through tabs and fill settings.'),
  );
  $form['giftoflife_donate_thanks'] = array(
    '#type'          => 'textarea',
    '#title'         => t('Thanks page'),
    '#description'   => t('HTML text to display on the thank you page.'),
    '#default_value' => variable_get('thanks', '<p>Thank you for your donation.</p>'),
  );
  $form['giftoflife_donate_error'] = array(
    '#type'          => 'textarea',
    '#title'         => t('Error page'),
    '#description'   => t('HTML text to display on the error page.'),
    '#default_value' => variable_get('error', '<p>Some kind of error.</p>'),
  );
  return system_settings_form($form);
 }
 
function giftoflife_donate_dengionline_admin_settings_validate($form, &$form_state) {
	$dengionline_id=$form_state['values']['giftoflife_donate_dengionline_id'];
	$dengionline_url = $form_state['values']['giftoflife_donate_dengionline_url'];
	$dengionline_complete_url = $form_state['values']['giftoflife_donate_dengionline_complete_url'];
	$dengionline_header = $form_state['values']['giftoflife_donate_dengionline_header'];
	$dengionline_footer = $form_state['values']['giftoflife_donate_dengionline_footer'];
    if (!$dengionline_id) {
        form_set_error('giftoflife_donate_dengionline_id', 'Please enter Id of your e-shop.');
    }
    if (!$dengionline_url) {
        form_set_error('giftoflife_donate_dengionline_url', 'Please enter URL of your e-shop.');
    }
    if (!$dengionline_complete_url) {
        form_set_error('giftoflife_donate_dengionline_complete_url', 'Please enter URL where you go after complete donating.');
    }
    if (!$dengionline_header) {
        form_set_error('giftoflife_donate_dengionline_header', 'Please type header message.');
    }
    if (!$dengionline_footer) {
        form_set_error('giftoflife_donate_dengionline_footer', 'Please type footer message.');
    }
}
function giftoflife_donate_admin_settings_validate($form, &$form_state) {
	$thanks = $form_state['values']['giftoflife_donate_thanks'];
	if (!$thanks) {
		form_set_error('giftoflife_donate_thanks', 'Please type thanks message.');
	}
}