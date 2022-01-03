#!/usr/bin/env bash

# Take thepathname
read -p "Enter the pathname:" pathname
echo ${pathname#*/}
echo $(ls /${pathname#*/} | wc -l)