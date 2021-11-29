#!/bin/bash

sudo ss -tulpn | grep LISTEN | awk '{print $7,$5}'