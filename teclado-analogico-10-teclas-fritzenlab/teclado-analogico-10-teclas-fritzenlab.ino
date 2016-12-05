/*
 This sketch implements analog keyboard readings. The keys are
 sensed apart by different resistance values.

 It doesn't support multi-key pressing (but may in the future!)
  
 Created by Clovis Fritzen in 11/19/2016 
 More info: http://FritzenLab.com.br
 
 Based on the "AnalogInOutSerial" sketch, created 29 Dec. 2008
 and modified 9 Apr 2012 by Tom Igoe.

 This example code is in the public domain.

 */

// These constants won't change.  They're used to give names
// to the pins used:
const int analogInPin = A0;  // Analog input pin that the keyboard is attached to

int sensorValue = 0;        // value read from the pot

boolean entrou1 = false;
boolean entrou2 = false;
boolean entrou3 = false;
boolean entrou4 = false;
boolean entrou5 = false;
boolean entrou6 = false;
boolean entrou7 = false;
boolean entrou8 = false;
boolean entrou9 = false;
boolean entrou10 = false;

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
}

void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin);

  
  if (sensorValue < 980) {
    // print the results to the serial monitor:
    //Serial.print("Valor inteiro = ");
    //Serial.println(sensorValue);
    
    //delay(15);
    //sensorValue = analogRead(analogInPin);
   
      if (sensorValue > 450 && sensorValue < 480){
          Serial.println("Tecla 1");
          entrou1 = true;
      }
      if (sensorValue > 500 && sensorValue < 530){
          Serial.println("Tecla 2");
          entrou2 = true;
      }
      if (sensorValue > 540 && sensorValue < 580){
          Serial.println("Tecla 3");
          entrou3 = true;
      }
      if (sensorValue > 590 && sensorValue < 720){
          Serial.println("Tecla 4");
          entrou4 = true;
      }
      if (sensorValue > 770 && sensorValue < 800){
          Serial.println("Tecla 5");
          entrou5 = true;
      }
      if (sensorValue > 805 && sensorValue < 825){
          Serial.println("Tecla 6");
          entrou6 = true;
      }
      if (sensorValue > 830 && sensorValue < 857){
          Serial.println("Tecla 7");
          entrou7 = true;
      }
      if (sensorValue > 859 && sensorValue < 880){
          Serial.println("Tecla 8");
          entrou8 = true;
      }
      if (sensorValue > 885 && sensorValue < 905){
          Serial.println("Tecla 9");
          entrou9 = true;
      }
      if (sensorValue > 910 && sensorValue < 945){
          Serial.println("Tecla 10");
          entrou10 = true;
      }         
  }
 
  delay(150);
}
