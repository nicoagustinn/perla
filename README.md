#### This is very unfinished! RUN AT YOUR OWN RISK!
# Welcome to Perla Linux
Perla Linux is a GNU/Linux distribution written completely from scratch.

## Build
Please run `./build.sh`, this will first execute a command to verify that you have all required tools to succesfully install Perla. Then, it will begin compiling all the tools made for the installation.

## Tools required
This is a complete list of all the tools needed in your live environment (or current host) to compile Perla. (Don't worry, most of the you should already have)


* Bash-3.2 (/bin/sh should be a symbolic or hard link to bash)
* Binutils-2.25
* Bison-2.7 (/usr/bin/yacc should be a link to bison or small script that executes bison)
* Bzip2-1.0.4
* Coreutils-6.9
* Diffutils-2.8.1
* Findutils-4.2.31
* Gawk-4.0.1 (/usr/bin/awk should be a link to gawk)
* GCC-6.2 including the C++ compiler, g++
* Git (to clone the repo)
* Glibc-2.11
* Grep-2.5.1a
* Gzip-1.3.12
* Linux Kernel-3.2
* M4-1.4.10
* Make-4.0
* Patch-2.5.4
* Perl-5.8.8
* Python-3.4
* Sed-4.1.5
* Sudo (required to run build.sh, otherwise edit build.sh and run as root)
* Tar-1.22
* Texinfo-4.7
* Xz-5.0.0

## Usage
Please run `perla-install base`, this program should do most of the work. You will be prompted when needed to do anything else.

# Installation
## Partitioning disks

Partition your disks with your favorite partitioning tool. I will use `fdisk` to do this.
`fdisk /dev/sdX`

###### BIOS
`n`
`(I recommend doing an entire partition for all the disk for BIOS systems)`
`w`

###### UEFI (not tested)
`n`
`(At least 512MB for the /boot partition.)`
`n`
`(rest of disk)`
`w`

## Formatting and mounting disks

###### BIOS
`mkfs.ext4 -v -t /dev/sdX`
`mount /dev/sdX /mnt/perla`

###### UEFI (not tested)
`mkfs.vfat -F 32 /dev/sdX1`
`mkfs.ext4 -v -t /dev/sdX2`
`mount /dev/sdX2 /mnt/perla`
`mount /dev/sdX1 /mnt/perla/boot`

## Clone the repository & 'cd' into it
Note: clone the repository where you want, I recommend in your home directory for quality of life improvements.
`git clone https://github.com/nicoagustinn/perla.git`
`cd perla`
`./build.sh`

## Install the 'base' package
`perla-install base`

#### This is very unfinished! RUN AT YOUR OWN RISK!
