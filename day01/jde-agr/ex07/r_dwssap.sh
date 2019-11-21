#!/bin/sh
cat /etc/passwd | cut -d: -f1 | awk "NR%2==0" | sort -r | tr '\n' ', ' | cut -d"#" -f1 | sed 's/.\{1\}$/./'
