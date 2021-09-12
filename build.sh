#!/bin/sh
./version-check.sh || { echo 'version-check failed, verify you have all required development tools.' ; exit 1; }
gcc -v perla-install.c -o perla-install;
gcc -v perla-build.c -o perla-build;
