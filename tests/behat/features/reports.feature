@api
Feature: Reports of activities.
  In order to manage the conference
  As an organizer
  I need to be able to see reports on user activities.

  Scenario: Organizers can see attendee lists and count.
    Given I am logged in as an "Organizer"
    When I visit "/admin/reports/attendees"
    I should see "Displaying"
