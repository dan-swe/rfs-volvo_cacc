#!/bin/sh /etc/rc.common
## This is a script to load all the MMITSS wmefwd config files
## Author : Sriharsha Mucheli
## University of Arizona

START=95

start() 
{
	if [ ! -x /usr/local/bin/wmefwd ]; then
		echo "/usr/local/bin/wmefwd not found!"
		exit;
	fi
	if [ pgrep wmefwd ]; then
		echo "Instances of wmefwd running already"
		exit;
	fi
	for i in $(find /etc/config/wmefwd/ -type f); do
		echo "Parsing file $i:"
		/usr/local/bin/wmefwd -f $i
	done
}                                                    
                                                         
stop() 
{                                   
	echo "Killing all wmefwd instances"
	pkill -9 wmefwd                    
}                                                                                                                                                                    
