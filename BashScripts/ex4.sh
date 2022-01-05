#!/usr/bin/env bash

X=$1
DIR=$2
echo ${DIR}
path=$(find /home/olga/Desktop -type d -name ${DIR})
$(find ${path}/* -size +${X} -exec rm -rv {} \;)

