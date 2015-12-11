@api
Feature: Users can create an account.
  In order to interact with the site and do awesome things
  As an user
  I need to be able to register for the conference.

  Scenario: Create an account
    Given I am an anonymous user
    When I am at "user/login"
    Then I should see "Create new account"

    When I am at "user/register"
    Then I should see "Username"
    And I should see "E-mail address"
