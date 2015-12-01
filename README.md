# Bay Area Drupal Camp 2016

Local development uses [Drupal VM](http://www.drupalvm.com/).

## Dependencies

* VirtualBox: 5.x
* Vagrant: 1.7.x
* Ansible (optional, but recommended): 1.9.x

### Mac

```bash
brew cask install virtualbox
brew cask install vagrant
brew install ansible
```

### Vagrant

Two plugins are required.

```bash
vagrant plugin install vagrant-hostsupdater
vagrant plugin install vagrant-auto_network
```

## Getting started

Prepare the local site:

* `composer install`
* `npm install`
* `node_modules/.bin/aquifer build`

Prepare for local development:

* Visit http://editorconfig.org/ for instructions on how to configure your IDE or editor to use the included `.editorconfig` file.
* `cp example.config.yml config.yml`
* Edit config.yml and update the following:
    * Find and replace `drupalvm.dev` with `badcamp2016.dev`
    * vagrant_machine_name: `badcamp2016`
    * vagrant_ip: `0.0.0.0`
    * vagrant_synced_folders - local_path: `~/projects/badcamp2016` (modify as necessary)
    * vagrant_memory: `2048`
    * build_makefile: `false`
    * install_site: `false`
    * drupal_major_version: `7`
    * drupal_core_path: `/var/www/build`
    * drush_version: `7.1.0`
    * installed_extras:
      * `# - adminer`
      * `- mailhog`
      * `# - memcached`
      * `# - nodejs`
      * `# - pimpmylog`
      * `# - ruby`
      * `# - selenium`
      * `# - solr`
      * `- varnish`
      * `# - xdebug`
      * `# - xhprof`
* Install Ansible Galaxy roles required for this VM: `sudo ansible-galaxy install -r provisioning/requirements.yml --force`

* `vagrant up`

Create local settings files:

* `./scripts/local_settings.sh`

Prepare the site:

* `./scripts/local_install.sh`

Set Drush alias:

* `drush site-set @badcamp2016.badcamp2016.dev`

Check status:

* `drush status`

Visit the result: http://badcamp2016.dev

## Structure

* `.editorconfig` - Defines and maintains consistent coding styles between different editors
* `.eslintrc` - JavaScript coding standards.
* `.gitignore`
* `/files/` - User files.
* `/gulp-tasks` - Individual Gulp tasks.
* `/modules/custom`
* `/modules/features`
* `/patches` - Drupal and custom patches.
* `/provisioning` - Drupal VM Ansible playbooks.
* `/scripts` - Utilities.
* `/settings/settings.custom.php` - Drupal custom settings specific to a brand.
* `/settings/settings.local.php` - Drupal local development settings.
* `/settings/settings.php` - Drupal common settings.
* `/settings/settings.secret.php` - Drupal environmental settings that should not be in version control, like passwords.
* `/themes/custom`
* `aquifer.json` - [Aquifer](https://github.com/aquifer/aquifer) build system configuration.
* `composer.json` - [Composer](https://getcomposer.org) PHP dependency manager configuration.
* `composer.lock` - locks Composer to specific versions.
* `config.yml` - Drupal VM.
* `drupal.make.yml` - Defines Drupal, contrib projects and patches.
* `example.config.yml` - Drupal VM.
* `gulpfile.js` - [Gulp](http://gulpjs.com/) JavaScript task runner; use `gulp help` for details.
* `package.json` - Node.JS packages.
* `README.md`
* `Vagrantfile` - Drupal VM.
