#!/bin/sh
find . -name "*.sh" -exec basename {} \; | cut -f 1 -d '.'
