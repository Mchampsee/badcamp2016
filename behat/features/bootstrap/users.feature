@api
Feature: Users can interact with the site.
  In order to become involved
  As a user
  I want to register and use the site.

  Scenario: Anonymous users can create an account.
    Given I am an anonymous user
    And I am at "user/login"
    I should see "Create new account"
