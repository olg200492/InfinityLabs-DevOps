#!/usr/bin/env bash

for i in ./*.*; do
  if [[ ${i##*.} != sh ]]; then
      Var="$(date +'%F')-${i#*/}"
      $(mv ${i#*/} ${Var})
  fi
done

