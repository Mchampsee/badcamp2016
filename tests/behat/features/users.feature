@api
Feature: Users can create an account.
  In order to interact with the site and do awesome things
  As an user
  I need to be able to register for the conference.

  Scenario: Create an account
    Given I am an anonymous user
    And the test email system is enabled

    When I am at "user/login"
    Then I should see "Create new account"

    When I am at "user/register"
    And I press the "Create new account" button
    Then I should see "Username field is required."

    When I enter "test" for "Username"
    And I press the "Create new account" button
    Then I should see "E-mail address field is required."

    When I enter "username@example.com" for "E-mail address"
    And I press the "Create new account" button
    Then I should see "First Name field is required."

    When I enter "Generic" for "First Name"
    And I press the "Create new account" button
    Then I should see "Last Name field is required."

    When I enter "Name" for "Last Name"
    And I press the "Create new account" button
    Then I should see "A welcome message with further instructions has been sent to your e-mail address."

    When I run drush "cron"
    Then the email to "username@example.com" should contain "Thank you for registering"
    And I run drush "ucan" "test -y"
