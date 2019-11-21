#!/bin/sh

ldapsearch -LLL -x "(uid=z*)" cn | grep dn | cut -c 5- | sort -r
