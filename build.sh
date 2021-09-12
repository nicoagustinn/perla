#!/bin/sh
./version-check.sh || { echo 'version-check failed, verify you have all required development tools.' ; exit 1; }
gcc -v perla-install.c -o perla-install;
gcc -v perla-build.c -o perla-build;
sudo cp -v perla-install /usr/local/bin/perla-install;
sudo cp -v perla-build /usr/local/bin/perla-build;
