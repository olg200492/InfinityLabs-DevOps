#!/bin/bash
sen=$( xclip -o )
en_chars="qwertyuiop[]asdfghjkl;'zxcvbnm,.QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?@#\$%^&()_"
heb_chars="q'קראטוןםפ[]שדגכעיחלךף'זסבהנמצתץQ'קראטוןםפ{}|שדגכעיחלך:\"זסבהנמצתץ?@#\$%^&()_"

if [[ "$en_chars" == *"${sen:0:1}"* ]]; then
    xclip -o | sed "y/$en_chars/$heb_chars/" | sed "s/q/\\//g"
    $( setxkbmap il,us )
else
    xclip -o | sed "y/$heb_chars/$en_chars/" | sed "s/\\//q/g"
    $( setxkbmap us,il )
fi
