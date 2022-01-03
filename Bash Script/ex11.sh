#!/usr/bin/env bash

word=$(xclip -o)
stat=$(./trans  -id ${word} | grep  -o  "English" | awk '{print $1}')
#echo ${stat}
if [[ "$stat" == *"English"* ]]
then
    echo $(./trans -b  en:he ${word}  ) | rev
else
    echo "$(./trans -b  he:en ${word} )"
fi

