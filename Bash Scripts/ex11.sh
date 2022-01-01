#!/usr/bin/env bash

word=$(xclip -o)
stat=$(./trans  -id ${word} | grep  -o  "English" | awk '{print $1}')
echo ${stat}
if [[ "$stat" == *"English"* ]]
then
    echo $(./trans -b  ${word} )
else
    echo "$(./trans -b  ${word} )"
fi

