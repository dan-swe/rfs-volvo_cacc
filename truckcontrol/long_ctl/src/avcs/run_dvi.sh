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

echo "Turning on startup screen"
../vehcomm/$OBJDIR/dvi_snd -c -C 20 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "2 0 0 1 0 0 0 0 0 0" -P "0 1 0 0 0 1 0 0 1 1 1 0 0 0 "
sleep 1
echo "ACC, ego truck 1, no target, no cutin, no braking"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "4 0 0 0 0 0 0 0 0 0" -P "2 0 0 0 0 1 0 0 0 0 0 0 0 0 " 
msleep 500
echo "ACC, ego truck 1, no target, with cutin, no braking"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "4 0 0 0 0 0 0 0 0 0" -P "2 0 0 0 0 1 1 0 0 0 0 0 0 0 " 
msleep 500
echo "ACC, ego truck 1, no target, with cutin, with braking"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "4 0 0 0 0 0 0 0 0 0" -P "2 0 0 0 0 1 1 1 0 0 0 0 0 0 " 
msleep 500
echo "ACC, ego truck 1, with target, no cutin, no braking, gap level 0"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "4 1 0 0 0 0 0 0 0 0" -P "2 0 0 0 0 1 0 0 0 0 0 0 0 0 " 
msleep 500
echo "ACC, ego truck 1, with target, no cutin, no braking, gap level 1"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "4 1 0 0 0 0 1 0 0 0" -P "2 0 0 0 0 1 0 0 0 0 0 0 0 0 " 
msleep 500
echo "ACC, ego truck 1, with target, no cutin, no braking, gap level 2"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "4 1 0 0 0 0 2 0 0 0" -P "2 0 0 0 0 1 0 0 0 0 0 0 0 0 " 
msleep 500
echo "ACC, ego truck 1, with target, no cutin, no braking, gap level 3"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "4 1 0 0 0 0 3 0 0 0" -P "2 0 0 0 0 1 0 0 0 0 0 0 0 0 " 
msleep 500
echo "ACC, ego truck 1, with target, no cutin, no braking, gap level 4"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "4 1 0 0 0 0 4 0 0 0" -P "2 0 0 0 0 1 0 0 0 0 0 0 0 0 " 
msleep 500
echo "ACC, ego truck 2, no target, no cutin, no braking, gap level 0"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "4 0 0 0 0 0 0 0 0 0" -P "2 1 0 0 0 1 0 0 1 0 0 0 0 0 " 
msleep 500
echo "ACC, ego truck 2, no target, with cutin, no braking, gap level 0"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "4 0 0 0 0 0 0 0 0 0" -P "2 1 0 0 0 1 0 0 1 1 0 0 0 0 " 
msleep 500
echo "ACC, ego truck 2, no target, with cutin, with braking, gap level 0"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "4 0 0 0 0 0 0 0 0 0" -P "2 1 0 0 0 1 0 0 1 1 1 0 0 0 " 
msleep 500
echo "ACC, ego truck 2, with target, gap level 0"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "4 1 0 0 0 0 0 0 0 0" -P "2 1 0 0 0 1 0 0 1 0 0 0 0 0 " 
msleep 500
echo "ACC, ego truck 2, with target, gap level 1"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "4 1 0 0 0 0 1 0 0 0" -P "2 1 0 0 0 1 0 0 1 0 0 0 0 0 " 
msleep 500
echo "ACC, ego truck 2, with target, gap level 2"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "4 1 0 0 0 0 2 0 0 0" -P "2 1 0 0 0 1 0 0 1 0 0 0 0 0 " 
msleep 500
echo "ACC, ego truck 2, with target, gap level 3"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "4 1 0 0 0 0 3 0 0 0" -P "2 1 0 0 0 1 0 0 1 0 0 0 0 0 " 
msleep 500
echo "ACC, ego truck 2, with target, gap level 4"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "4 1 0 0 0 0 4 0 0 0" -P "2 1 0 0 0 1 0 0 1 0 0 0 0 0 " 
msleep 500
echo "ACC, ego truck 3, no target, no cutin, no braking, gap level 0"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "4 0 0 0 0 0 0 0 0 0" -P "2 2 0 0 0 1 0 0 1 0 0 1 0 0 " 
msleep 500
echo "ACC, ego truck 3, no target, with cutin, no braking, gap level 0"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "4 0 0 0 0 0 0 0 0 0" -P "2 2 0 0 0 1 0 0 1 0 0 1 1 0 " 
msleep 500
echo "ACC, ego truck 3, no target, with cutin, with braking, gap level 0"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "4 0 0 0 0 0 0 0 0 0" -P "2 2 0 0 0 1 0 0 1 0 0 1 1 1 " 
msleep 500
echo "ACC, ego truck 3, with target, gap level 0"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "4 1 0 0 0 0 0 0 0 0" -P "2 2 0 0 0 1 0 0 1 0 0 1 0 0 " 
msleep 500
echo "ACC, ego truck 3, with target, gap level 1"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "4 1 0 0 0 0 1 0 0 0" -P "2 2 0 0 0 1 0 0 1 0 0 1 0 0 " 
msleep 500
echo "ACC, ego truck 3, with target, gap level 2"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "4 1 0 0 0 0 2 0 0 0" -P "2 2 0 0 0 1 0 0 1 0 0 1 0 0 " 
msleep 500
echo "ACC, ego truck 3, with target, gap level 3"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "4 1 0 0 0 0 3 0 0 0" -P "2 2 0 0 0 1 0 0 1 0 0 1 0 0 " 
msleep 500
echo "ACC, ego truck 3, with target, gap level 4"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "4 1 0 0 0 0 4 0 0 0" -P "2 2 0 0 0 1 0 0 1 0 0 1 0 0 " 
msleep 500


echo "CACC, ego truck 1, no target, no cutin, no braking"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "2 0 0 0 0 0 0 0 0 0" -P "2 0 0 0 0 1 0 0 0 0 0 0 0 0 " 
msleep 500
echo "CACC, ego truck 1, no target, with cutin, no braking"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "2 0 0 0 0 0 0 0 0 0" -P "2 0 0 0 0 1 1 0 0 0 0 0 0 0 " 
msleep 500
echo "CACC, ego truck 1, no target, with cutin, with braking"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "2 0 0 0 0 0 0 0 0 0" -P "2 0 0 0 0 1 1 1 0 0 0 0 0 0 " 
msleep 500
echo "CACC, ego truck 1, with target, no cutin, no braking, gap level 0"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "2 1 0 0 0 0 0 0 0 0" -P "2 0 0 0 0 1 0 0 0 0 0 0 0 0 " 
msleep 500
echo "CACC, ego truck 1, with target, no cutin, no braking, gap level 1"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "2 1 0 0 0 1 0 0 0 0" -P "2 0 0 0 0 1 0 0 0 0 0 0 0 0 " 
msleep 500
echo "CACC, ego truck 1, with target, no cutin, no braking, gap level 2"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "2 1 0 0 0 2 0 0 0 0" -P "2 0 0 0 0 1 0 0 0 0 0 0 0 0 " 
msleep 500
echo "CACC, ego truck 1, with target, no cutin, no braking, gap level 3"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "2 1 0 0 0 3 0 0 0 0" -P "2 0 0 0 0 1 0 0 0 0 0 0 0 0 " 
msleep 500
echo "CACC, ego truck 1, with target, no cutin, no braking, gap level 4"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "2 1 0 0 0 4 0 0 0 0" -P "2 0 0 0 0 1 0 0 0 0 0 0 0 0 " 
msleep 500
echo "CACC, ego truck 2, no target, no cutin, no braking, gap level 0"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "2 0 0 0 0 0 0 0 0 0" -P "2 1 0 0 0 1 0 0 1 0 0 0 0 0 " 
msleep 500
echo "CACC, ego truck 2, no target, with cutin, no braking, gap level 0"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "2 0 0 0 0 0 0 0 0 0" -P "2 1 0 0 0 1 0 0 1 1 0 0 0 0 " 
msleep 500
echo "CACC, ego truck 2, no target, with cutin, with braking, gap level 0"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "2 0 0 0 0 0 0 0 0 0" -P "2 1 0 0 0 1 0 0 1 1 1 0 0 0 " 
msleep 500
echo "CACC, ego truck 2, with target, gap level 0"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "2 1 0 0 0 0 0 0 0 0" -P "2 1 0 0 0 1 0 0 1 0 0 0 0 0 " 
msleep 500
echo "CACC, ego truck 2, with target, gap level 1"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "2 1 0 0 0 1 0 0 0 0" -P "2 1 0 0 0 1 0 0 1 0 0 0 0 0 " 
msleep 500
echo "CACC, ego truck 2, with target, gap level 2"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "2 1 0 0 0 2 0 0 0 0" -P "2 1 0 0 0 1 0 0 1 0 0 0 0 0 " 
msleep 500
echo "CACC, ego truck 2, with target, gap level 3"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "2 1 0 0 0 3 0 0 0 0" -P "2 1 0 0 0 1 0 0 1 0 0 0 0 0 " 
msleep 500
echo "CACC, ego truck 2, with target, gap level 4"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "2 1 0 0 0 4 0 0 0 0" -P "2 1 0 0 0 1 0 0 1 0 0 0 0 0 " 
msleep 500
echo "CACC, ego truck 3, no target, no cutin, no braking, gap level 0"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "2 0 0 0 0 0 0 0 0 0" -P "2 2 0 0 0 1 0 0 1 0 0 1 0 0 " 
msleep 500
echo "CACC, ego truck 3, no target, with cutin, no braking, gap level 0"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "2 0 0 0 0 0 0 0 0 0" -P "2 2 0 0 0 1 0 0 1 0 0 1 1 0 " 
msleep 500
echo "CACC, ego truck 3, no target, with cutin, with braking, gap level 0"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "2 0 0 0 0 0 0 0 0 0" -P "2 2 0 0 0 1 0 0 1 0 0 1 1 1 " 
msleep 500
echo "CACC, ego truck 3, with target, gap level 0"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "2 1 0 0 0 0 0 0 0 0" -P "2 2 0 0 0 1 0 0 1 0 0 1 0 0 " 
msleep 500
echo "CACC, ego truck 3, with target, gap level 1"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "2 1 0 0 0 1 0 0 0 0" -P "2 2 0 0 0 1 0 0 1 0 0 1 0 0 " 
msleep 500
echo "CACC, ego truck 3, with target, gap level 2"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "2 1 0 0 0 2 0 0 0 0" -P "2 2 0 0 0 1 0 0 1 0 0 1 0 0 " 
msleep 500
echo "CACC, ego truck 3, with target, gap level 3"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "2 1 0 0 0 3 0 0 0 0" -P "2 2 0 0 0 1 0 0 1 0 0 1 0 0 " 
msleep 500
echo "CACC, ego truck 3, with target, gap level 4"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "2 1 0 0 0 4 0 0 0 0" -P "2 2 0 0 0 1 0 0 1 0 0 1 0 0 " 
sleep 1
echo "Turning on startup screen"
../vehcomm/$OBJDIR/dvi_snd -c -C 0 -r 10007 -R 10005 -a $GALAXYWIRELESS -A $IPADDR -E "2 0 0 1 0 0 0 0 0 0" -P "0 1 0 0 0 1 0 0 1 1 1 0 0 0 "
