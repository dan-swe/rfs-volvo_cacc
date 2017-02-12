#!/bin/sh

TEST_DIR='../../../test'
CAN_DIR='../../../../can'

slay  -f -Q -s TERM long_trk
slay  -f -Q -s TERM dvi_rcv
slay  -f -Q -s TERM dvi_snd
slay  -f -Q -s TERM veh_snd
slay  -f -Q -s TERM veh_rcv
slay  -f -Q -s TERM trk_wr
slay  -f -Q -s TERM rdj1939
slay  -f -Q -s TERM gpsdb
slay  -f -Q -s TERM jbussendGPS
slay  -f -Q -s TERM jbussend
slay  -f -Q -s TERM can_man
slay  -f -Q -s TERM trk_cr
slay  -f -Q -s TERM db_slv

$TEST_DIR/db_slv -Q -S `hostname` &
sleep 2
$TEST_DIR/trk_cr -t 1000 2>long_input$DATESTR.dbg &
sleep 2
$CAN_DIR/drv_sja1000/qnx/can_man -n /dev/can1 -s 250 -i 10 -p 0xda000 -e 1 &
sleep 2
$CAN_DIR/jbus/src/qnx/rdj1939 -v -c -f /dev/can1
#$CAN_DIR/jbus/src/qnx/rdj1939 -v -g -c -f /dev/can1
