//#include "IRremote.h"
#include "LiquidCrystal.h"
#include "pitches.h"



//int receiver = 2;
//IRrecv irrecv(receiver);
//uint32_t last_decodedRawData = 0;
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

int active = 4;
int passive = 2;
int melody[] = {
  NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5, NOTE_C6};

//not being used, havent decided if im gonna use the ir remote to control it or something else
//void translateIR() {
//  if (irrecv.decodedIRData.flags)
//  {
//    irrecv.decodedIRData.decodedRawData = last_decodedRawData;
//    Serial.println("REPEAT!");
//  } else
//  {
//    //output the IR code on the serial monitor
//    Serial.print("IR code:0x");
//    Serial.println(irrecv.decodedIRData.decodedRawData, HEX);
//  }
//  //map the IR code to the remote key
//  switch (irrecv.decodedIRData.decodedRawData)
//  {
//    case 0xBA45FF00: Serial.println("POWER"); break;
//    case 0xB847FF00: Serial.println("FUNC/STOP"); break;
//    case 0xB946FF00: Serial.println("VOL+"); break;
//    case 0xBB44FF00: Serial.println("FAST BACK");    break;
//    case 0xBF40FF00: Serial.println("PAUSE");    break;
//    case 0xBC43FF00: Serial.println("FAST FORWARD");   break;
//    case 0xF807FF00: Serial.println("DOWN");    break;
//    case 0xEA15FF00: Serial.println("VOL-");    break;
//    case 0xF609FF00: Serial.println("UP");    break;
//    case 0xE619FF00: Serial.println("EQ");    break;
//    case 0xF20DFF00: Serial.println("ST/REPT");    break;
//    case 0xE916FF00: Serial.println("0");    break;
//    case 0xF30CFF00: Serial.println("1");    break;
//    case 0xE718FF00: Serial.println("2");    break;
//    case 0xA15EFF00: Serial.println("3");    break;
//    case 0xF708FF00: Serial.println("4");    break;
//    case 0xE31CFF00: Serial.println("5");    break;
//    case 0xA55AFF00: Serial.println("6");    break;
//    case 0xBD42FF00: Serial.println("7");    break;
//    case 0xAD52FF00: Serial.println("8");    break;
//    case 0xB54AFF00: Serial.println("9");    break;
//    default:
//      Serial.println(" other button   ");
//  }
//  last_decodedRawData = irrecv.decodedIRData.decodedRawData;
//  delay(500); // Do not get immediate repeat
//}

void setup() {
  lcd.begin(16, 2);
  lcd.clear();
  lcd.setCursor(0,0);
  Serial.begin(9600);
  lcd.print("Welcome!");
  pinMode(active, OUTPUT);
//  Serial.println("IR Receiver Button Decode");
//  irrecv.enableIRIn();
  tone(passive, melody[1], 500);
  //  NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5, NOTE_C6
}

//  delay(1000);
//  lcd.createChar(0, customChar);
//  lcd.home();
//  lcd.clear();
//  lcd.write(byte(0));
//  delay(1000);
//  lcd.createChar(0, customChar2);
//  lcd.setCursor(1,0);
//  lcd.write(byte(0));

void loop() {
//  if (irrecv.decode())
//  {
//    translateIR();
//    irrecv.resume();
////  };
lcd.setCursor(0, 1);
lcd.print(millis() / 1000);
}
