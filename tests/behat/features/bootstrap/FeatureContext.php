<?php
/**
 * @file
 * Custom context.
 *
 * @link https://www.previousnext.com.au/blog/advanced-testing-drupal-emails-behat-and-testingmailsystem
 */

use Drupal\DrupalExtension\Context\RawDrupalContext;
use Behat\Mink\Exception;

/**
 * Defines application features from the specific context.
 */
class FeatureContext extends RawDrupalContext {
  protected $current_email = FALSE;

  /**
   * @Given /^the test email system is enabled$/
   */
  public function theTestEmailSystemIsEnabled() {
    // Set the mail system.
    variable_set('mail_system', array(
      'default-system' => 'TestingMailSystem',
    ));

    // Flush the email buffer.
    variable_set('drupal_test_email_collector', array());
  }

  /**
   * @Then /^the email to "([^"]*)" should contain "([^"]*)"$/
   */
  public function theEmailToShouldContain($to, $contents) {
    $sql_query = 'SELECT name ';
    $sql_query .= ', value ';
    $sql_query .= 'FROM {variable} ';
    $sql_query .= 'WHERE name = :name ';

    $variables = array_map('unserialize', db_query($sql_query, array(
      ':name' => 'drupal_test_email_collector',
    ))->fetchAllKeyed());

    $this->current_email = FALSE;
    foreach ($variables['drupal_test_email_collector'] as $message) {
      if ($message['to'] == $to) {
        $this->current_email = $message;
        if (strpos($message['body'], $contents) !== FALSE ||
          strpos($message['subject'], $contents) !== FALSE) {
          return TRUE;
        }
        throw new \Exception('Did not find expected content in message body or subject.');
      }
    }
    throw new \Exception(sprintf('Did not find expected message to %s', $to));
  }

  /**
   * @Given /^the email should contain "([^"]*)"$/
   */
  public function theEmailShouldContain($contents) {
    if (!$this->activeEmail) {
      throw new \Exception('No active email');
    }
    $message = $this->activeEmail;
    if (strpos($message['body'], $contents) !== FALSE ||
      strpos($message['subject'], $contents) !== FALSE) {
      return TRUE;
    }
    throw new \Exception('Did not find expected content in message body or subject.');
  }
}
