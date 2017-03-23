#!/bin/sh

PIP=$1
echo "#!/bin/sh" >script.sh
chmod a+x script.sh 
echo "cat /home/truckcontrol/test/realtime.ini |sed 's/MyPltnPos=./MyPltnPos=$PIP/g' >realtime.ini2" >>script.sh
cat script.sh 
./script.sh 
mv realtime.ini2 realtime.ini
rm script.sh
