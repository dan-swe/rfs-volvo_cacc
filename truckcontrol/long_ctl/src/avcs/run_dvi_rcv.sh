#!/bin/sh

uname -s | grep Linux
if [ $? -eq 0 ]
then
	OBJDIR=lnx
	IPADDR=`ifconfig | grep 172.16.0 | sed '{s/:/ /g}' | awk '{print $3}'`
fi
uname -s | grep QNX
if [ $? -eq 0 ]
then
	OBJDIR=qnx
	IPADDR=`ifconfig | grep 172.16.0 | awk '{print $2}'`
fi

echo $IPADDR | grep 75 
if [ $? -eq 0 ]
then
	ITRIADDR=172.16.1.75
	ITRIWIRELESS=172.16.2.75
	GALAXYWIRELESS=172.16.0.175
	GALAXYWIRELESS2=172.16.0.185
	TRUCK=Blue
fi

echo $IPADDR | grep 74 
if [ $? -eq 0 ]
then
	ITRIADDR=172.16.1.74
	ITRIWIRELESS=172.16.2.74
	GALAXYWIRELESS=172.16.0.174
	GALAXYWIRELESS2=172.16.0.184
	TRUCK=Gold
fi

echo $IPADDR | grep 76
if [ $? -eq 0 ]
then
	ITRIADDR=172.16.1.76
	ITRIWIRELESS=172.16.2.76
	GALAXYWIRELESS=172.16.0.176
	GALAXYWIRELESS2=172.16.0.186
	TRUCK=Silvr
fi

echo $IPADDR | grep 77
if [ $? -eq 0 ]
then
	ITRIADDR=172.16.1.77
	ITRIWIRELESS=172.16.2.77
	GALAXYWIRELESS=172.16.0.177
	GALAXYWIRELESS2=172.16.0.187
	TRUCK=Silvr
fi

./slay_can.sh
../../../test/db_slv -Q -S `hostname` &
sleep 1
../../../test/trk_cr &
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "2 1 0 0 0 4 0 0 0 0" -P "2 2 0 0 0 1 0 0 0 1 0 0 4 1 0 0 2 "
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS2 -A $IPADDR -E "2 1 0 0 0 4 0 0 0 0" -P "2 2 0 0 0 1 0 0 0 1 0 0 4 1 0 0 2 "
echo "Try pressing buttons on driver's DVI"
../vehcomm/qnx/dvi_rcv -v -A $IPADDR -a $GALAXYWIRELESS -d &
sleep 10
slay dvi_rcv
sleep 2
echo "Now try pressing buttons on passenger's DVI"
../vehcomm/qnx/dvi_rcv -v -A $IPADDR -a $GALAXYWIRELESS2 -d
