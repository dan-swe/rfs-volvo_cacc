#!/bin/sh

/home/truckcontrol/long_ctl/src/avcs/slay_can.sh
DATESTR=`date +%m%d%Y_%H%M%S`
echo $DATESTR >/big/data/last_start_timestamp.txt
/home/truckcontrol/test/db_slv -Q -S `hostname` &
sleep 1
/home/truckcontrol/test/trk_cr -t 1000 2>long_input$DATESTR.dbg &
sleep 1
/home/can/drv_sja1000/qnx/can_man -n /dev/can1 -s 250 -i 10 -p 0xda000 -e 1 &
sleep 1
/home/can/jbus/src/qnx/rdj1939 -v -c -f /dev/can1 >/big/data/can1$DATESTR.txt &
sleep 1
/home/truckcontrol/test/jbussend -d -c -e /dev/can1 -b /dev/can1 >/big/data/jbussend_$DATESTR.dbg 2>/big/data/jbussend_$DATESTR.err &
sleep 5
/home/truckcontrol/test/long_out -v 800 &
sleep 5
slay long_out
/home/truckcontrol/long_ctl/src/avcs/slay_can.sh
