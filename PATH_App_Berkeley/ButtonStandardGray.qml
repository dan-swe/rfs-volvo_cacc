import QtQuick 2.5
import QtGraphicalEffects 1.0

Item{
    id:buttonHolder
    property int myWidth:240
    property int myHeight:80
    property int myID:-1
    property int myGroup:-1
    property string btnText:"VOID"
    height:myHeight+10
    width:myWidth+10



    Rectangle{
        id:buttonBGGray
        width:myWidth
        height:myHeight
        border.width:2
        border.color:"transparent"
        radius:15
        // SY4: the color of the button was changed
        gradient:Gradient{
        GradientStop { position: 0; color:"#d9d9d9"}
        GradientStop { position: 0.4; color:"#3b3b3b"}
        }


        Text{
            id:buttonTxt
            x: 58
            y: 13
            width: 118
            height: 49
            //width: 170
           // height: 80
            text:btnText
            fontSizeMode: Text.FixedSize
            verticalAlignment: Text.AlignVCenter
            anchors.verticalCenterOffset: 6
            anchors.horizontalCenterOffset: 0
            horizontalAlignment: Text.AlignHCenter
            color:"#ffffff"
            //font.bold: true
            anchors.centerIn: parent
            font.family: "Volvo Sans Pro"
            font.pixelSize: 50 // SY: the size of button originally is 40
        }

    }

  /* DropShadow {
        color: "#aa000000"//"#00aaff"
        anchors.fill: buttonBGGray
        horizontalOffset: 6
        verticalOffset: 6
        radius: 2.0
        fast: false
        anchors.rightMargin: -6
        samples: 16
        source: buttonBGGray
    }
*/
    MouseArea{ // SY4: margins were changed
        anchors.rightMargin: 2
        anchors.bottomMargin: 2
        anchors.leftMargin: 0
        anchors.topMargin: 0
        anchors.fill:parent

        onPressed:{ // SY: pressed effect is changed 3/1/2017
             //   cAccBtn.scale=1.0
             //   accBtn.scale=1.1
                cAccBtn.opacity=0.7 //SY4:changed from 0.3 to 0.8
                accBtn.opacity=1.0 
                cAccBtn.layer.enabled=false
                accBtn.layer.enabled=true
        }
        onReleased:{
            //parent.scale=1
            if(parent.opacity===1){
                buttonClicked(myGroup,myID)
            }
          }


    }

}
