#!/usr/bin/env bash
read -p "Enter the dirctory name:" DIR
echo ${DIR}
paths=$(find /home/olga/Desktop -type d -name $DIR)
for path in ${paths}; do
    for file in $( ls -A ${path}); do
        echo $(file ${path}/${file})
    done
done