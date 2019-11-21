#!/bin/sh

ldapsearch -LLL -x uid=$(whoami) | grep dn: | cut -c 5-
