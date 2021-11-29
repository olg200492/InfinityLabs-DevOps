#!/bin/bash

echo "Enter service name:"
read servicename
status="$(systemctl is-active $servicename.service)"
echo "{$status}"
echo "Enter 1 for start, 2 for stop,3 for leave it at the current state"
read num
if[ num -eq 1 ]
    then
        if[]