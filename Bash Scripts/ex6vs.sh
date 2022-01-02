#!/bin/bash
read -p "Enter a string:" sen
en_chars="qwertyuiop[]asdfghjkl;'zxcvbnm,.QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?@#\$%^&()_"
heb_chars="q'קראטוןםפ[]שדגכעיחלךף'זסבהנמצתץQ'קראטוןםפ{}|שדגכעיחלך:\"זסבהנמצתץ?@#\$%^&()_"

if [[ "$en_chars" == *"${sen:0:1}"* ]]; then
    echo ${sen} | sed "y/$en_chars/$heb_chars/" | sed "s/q/\\//g"
else
    echo ${sen} | sed "y/$heb_chars/$en_chars/" | sed "s/\\//q/g"
fi


