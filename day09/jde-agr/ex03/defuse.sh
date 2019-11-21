#!/bin/sh
touch -A -000001 bomb.txt
stat -t %s -f %a
