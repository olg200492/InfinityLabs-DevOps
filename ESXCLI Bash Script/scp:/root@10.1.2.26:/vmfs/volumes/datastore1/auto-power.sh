#!/bin/sh
for vmid in $(vim-cmd vmsvc/getallvms | awk '{print $1}')
do
    stat1=$(vim-cmd vmsvc/power.getstate "$vmid" | grep “off”)
    if [ "$stat1" == "Powered off" ]
        then
            vim-cmd vmsvc/power.on "$vmid"
    fi
done