#!/bin/sh
if  ifconfig | grep inet | grep -v inet6 | grep -v 127 | cut -d ' ' -f2
then
	exit	
else
	echo "Je suis perdu!";
fi
