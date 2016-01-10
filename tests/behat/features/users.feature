@api
Feature: Users can create an account.
  In order to interact with the site and do awesome things
  As an user
  I need to be able to register for the conference.

  Scenario: Create an account
    Given I am an anonymous user
    And the test email system is enabled

    When I visit "/user"
    And I click "Log in"
    Then I should see "Registration is not saved"
    And I should see "I forgot my password"

    When I click "Register for BADCamp"
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

    When I follow the email URL matching regex "/http:\/\/.*\/user\/reset\/.*/"
    And I press "Log in"
    Then I should see the success message "You have just used your one-time login link"

    When I enter "test" for "Password"
    And I enter "test" for "Confirm password"
    And I press "Save"
    Then I should see the success message "The changes have been saved."

    When I am at "user/logout"
    And I am at "user/login"
    And I enter "test" for "Username"
    And I enter "test" for "Password"
    And I press "Log in"
    Then I should see "Member for"

    # Cleanup.
    When I run drush "ucan" "test -y"

  Scenario: User forgets password
    Given I am an anonymous user
    And the test email system is enabled
    And users:
      | name | mail |
      | test | username@example.com |

    When I visit "/user"
    And I click "I forgot my password"
    Then I should see "Registration is not saved"

    When I enter "test" for "edit-name"
    And I press "E-mail new password"
    And print last response
    And I break
    Then I should see the success message "Further instructions have been sent to your e-mail address."

    When I run drush "cron"
    Then the email to "username@example.com" should contain "A request to reset the password for your account has been made"
