#!/bin/sh
echo "`stat -f %a bomb.txt | cut -d ' ' -f9` - 1" | bc
