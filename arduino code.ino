#include <Servo.h>
Servo myservo; 
int pos = 0;
int IRSensor = 9;
int RFPin1 = 8;
int RFPin = 10;


void setup() {
 
  Serial.begin(9600);
  myservo.attach(6);
  pinMode (IRSensor, INPUT);
  pinMode (RFPin , INPUT);
  pinMode (RFPin1 , INPUT);

  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
 
  int IR= digitalRead (IRSensor);
  int RF = digitalRead (RFPin);
  int RF1 = digitalRead (RFPin1);
  
  
  if ( IR == LOW ) 
  {
   myservo.write(180);
   delay(3000);
   myservo.write(0);
  }

   else if (  RF == HIGH ) 
  {
    myservo.write(180);
    delay(100);
  }
   else if (  RF1 == HIGH ) 
  {
    myservo.write(0);
    delay(100);
  }
   
 
}
