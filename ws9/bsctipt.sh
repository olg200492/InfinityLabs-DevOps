#!/bin/bash

echo "Enter service name:"
read servicename
status="$(systemctl is-active $servicename.service)"
echo "{$status}"
echo "Enter 1 for start, 2 for stop,3 for leave it at the current state"
read num
if [ $num -eq 1 ]
then
    if [ $status == "active" ]
    then
        systemctl restart $servicename service
    else
        systemctl start $servicename service
        status="$(systemctl is-active $servicename.service)"
        echo "$servicename is now $status"
    fi
fi
if [ $num -eq 2 ]
then
    systemctl stop $servicename.service
    status="$(systemctl is-active $servicename.service)"
    echo "$servicename is now $status"
fi
if [ $num -eq 3 ]
then 
    exit 1
fi

done

