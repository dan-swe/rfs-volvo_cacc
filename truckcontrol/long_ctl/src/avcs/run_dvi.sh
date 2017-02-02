#!/bin/sh

IPADDR=`ifconfig | grep 172.16.0 | awk '{print $2}'`

echo $IPADDR | grep : 
if [ $? -eq 0 ]
then
	IPADDR=`echo $IPADDR | sed 's/:/ /g' | awk '{print $2}'`
fi

echo $IPADDR | grep 75 
if [ $? -eq 0 ]
then
	ITRIADDR=172.16.1.75
	ITRIWIRELESS=172.16.2.75
	GALAXYWIRELESS=172.16.0.175
	TRUCK=Blue
fi

echo $IPADDR | grep 74 
if [ $? -eq 0 ]
then
	ITRIADDR=172.16.1.74
	ITRIWIRELESS=172.16.2.74
	GALAXYWIRELESS=172.16.0.174
	TRUCK=Gold
fi

echo $IPADDR | grep 76
if [ $? -eq 0 ]
then
	ITRIADDR=172.16.1.76
	ITRIWIRELESS=172.16.2.76
	GALAXYWIRELESS=172.16.0.176
	TRUCK=Silvr
fi

echo $IPADDR | grep 77
if [ $? -eq 0 ]
then
	ITRIADDR=172.16.1.77
	ITRIWIRELESS=172.16.2.77
	GALAXYWIRELESS=172.16.0.177
	TRUCK=Silvr
fi

uname -s | grep Linux
if [ $? -eq 0 ]
then
	OBJDIR=lnx
fi
uname -s | grep QNX
if [ $? -eq 0 ]
then
	OBJDIR=qnx
fi

echo "Turning on startup screen"
../vehcomm/$OBJDIR/dvi_snd -c -C 20 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "2 0 0 1 0 0 0 0 0 0" -P "0 1 0 0 0 1 0 0 1 1 1 0 0 0 "
sleep 1
echo "Turning on ACC screen"
../vehcomm/$OBJDIR/dvi_snd -c -C 20 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "2 0 0 1 0 0 0 0 0 0" -P "2 1 0 0 0 1 0 0 1 1 1 0 0 0 "
sleep 1
echo "Turning on CACC screen"
../vehcomm/$OBJDIR/dvi_snd -c -C 20 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "4 0 0 1 0 0 0 0 0 0" -P "2 1 0 0 0 1 0 0 1 0 0 0 0 0 "
sleep 1
echo "Turning on startup screen"
../vehcomm/$OBJDIR/dvi_snd -c -C 20 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "2 0 0 1 0 0 0 0 0 0" -P "0 1 0 0 0 1 0 0 1 1 1 0 0 0 "
