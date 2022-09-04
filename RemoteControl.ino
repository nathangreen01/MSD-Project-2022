#include <IRremote.h>

const int RECV_PIN = 7;
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup(){
  Serial.begin(9600);
  irrecv.enableIRIn();
  irrecv.blink13(true);
}

void loop(){
  if (irrecv.decode(&results)){
        //Serial.println(results.value, HEX);

      switch(results.value){
          case 0xE318261B: // "CH-"
          Serial.println("CH-");
          break;
          case 0x511DBB: // "CH"
          Serial.println("CH");
          break;
          case 0xEE886D7F: // "CH+"
          Serial.println("CH+");
          break;
          case 0x52A3D41F: // "PREV <"
          Serial.println("PREV <");
          break;
          case 0xD7E84B1B: // "NEXT >"
          Serial.println("NEXT >");
          break;
          case 0x20FE4DBB: // "PLAY/PAUSE"
          Serial.println("PLAY/PAUSE");
          break;
          case 0xF076C13B: // "VOL-"
          Serial.println("VOL-");
          break;
          case 0xA3C8EDDB: // "VOL+"
          Serial.println("VOL+");
          break;
          case 0xE5CFBD7F: // "EQ"
          Serial.println("EQ");
          break;
          case 0xC101E57B: // "0"
          Serial.println("0");
          break;
          case 0x97483BFB: // "100+"
          Serial.println("100+");
          break;
          case 0xF0C41643: // "200+"
          Serial.println("200+");
          break;
          case 0x9716BE3F: // "1"
          Serial.println("1");
          break;
          case 0x3D9AE3F7: // "2"
          Serial.println("2");
          break;
          case 0x6182021B: // "3"
          Serial.println("3");
          break;
          case 0x8C22657B: // "4"
          Serial.println("4");
          break;
          case 0x488F3CBB: // "5"
          Serial.println("5");
          break;
          case 0x449E79F: // "6"
          Serial.println("6");
          break;
          case 0x32C6FDF7: // "7"
          Serial.println("7");
          break;
          case 0x1BC0157B: // "8"
          Serial.println("8");
          break;
          case 0x3EC3FC1B: // "9"
          Serial.println("9");
          break;
          }


          
        irrecv.resume();
        
  }
}
