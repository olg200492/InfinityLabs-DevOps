#!/bin/bash

echo "Hi"
if [ $? -eq 0 ]; then
    logger "Successfully Executed bash script" -f /var/log/syslog
else
    logger "Fail Executed bash script" -f /var/log/syslog
fi
