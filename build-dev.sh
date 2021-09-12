#!/bin/sh

# Hello!
# You shouldn't be here... or should you?
# This is the script I run to compile the files and check for errors,
# as noticed, there's no sudo. I removed anything that required root permission
# because I was lazy to enter my password :D

./version-check.sh || { echo 'version-check failed, verify you have all required development tools.' ; exit 1; }
gcc -v perla-install.c -o perla-install;
gcc -v perla-build.c -o perla-build;
