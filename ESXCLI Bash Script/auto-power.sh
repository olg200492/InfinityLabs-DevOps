#!/bin/sh
for vmid in $(vim-cmd vmsvc/getallvms | awk '{print $1}')
do
    if [ ! "$vmid" == "Vmid" ]
    then  
        stat1=$(vim-cmd vmsvc/power.getstate $vmid | grep "Powered")
        if [ "$stat1" == "Powered off" ]
        then
            vim-cmd vmsvc/power.on $vmid
        fi
    fi
done