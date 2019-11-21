#!/bin/sh
ldapsearch -LLL -x "uid=*bon*" | wc -l
