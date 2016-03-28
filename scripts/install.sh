#!/usr/bin/env bash
source ./scripts/load_config.sh

$DRUSH $SITE_ALIAS cc drush
echo "Installing..."
$DRUSH $SITE_ALIAS si --account-pass=admin -y
echo "Refreshing..."
npm run aquifer refresh -- -a $SITE_ALIAS
