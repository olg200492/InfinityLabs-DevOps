#!/usr/bin/env bash
var=$(ls -a)
for name in ${var}; do
    tmp="$(date +'%F')-${name}"
    $(mv ${name} ${tmp})
done

#for i in ./*.*; do
#  if [[ ${i##*.} != sh ]]; then
#      Var="$(date +'%F')-${i#*/}"
#      $(mv ${i#*/} ${Var})
#  fi
#done

