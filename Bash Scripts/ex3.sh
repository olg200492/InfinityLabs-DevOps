#!/usr/bin/env bash
path=$1
echo ${1}
echo $(ls /${1#*/} | wc -l)