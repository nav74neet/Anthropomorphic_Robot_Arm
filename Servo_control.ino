#include<Servo.h>  
//No. of servos == 5 for finger manipulation//

Servo myservo0;//thumb control//
Servo myservo1;//index finger control//
Servo myservo2;//middle finger control//
Servo myservo3;//ring finger control//
Servo myservo4;//little finger control//

//Arduino board-servo connection//
void setup() 
{       
  Serial.begin(9600);
  myservo0.attach(3);  
  myservo1.attach(5);
  myservo2.attach(6);
  myservo3.attach(9); 
  myservo4.attach(10);
  pinMode(2,INPUT);
  pinMode(4,INPUT);
  pinMode(7,INPUT);
  pinMode(8,INPUT);
  pinMode(12,INPUT);
}

void loop(){
//  if(Serial.available() > 0){ 
//    timer1 = millis();   
//    prevCommand = command;
//    command = Serial.read();  
      if (digitalRead(2) == HIGH){
        Serial.println("f1high");
              myservo0.write(180);
              delay(500);
      }
      else if(digitalRead(2) == LOW){
        Serial.println("f1low");  
      myservo0.write(0);
      delay(500);
      }
     if(digitalRead(4) == HIGH){
      Serial.println("f2high");  
      myservo1.write(180);
      delay(500);
     }
     else if(digitalRead(4) == LOW){
      Serial.println("f2low");  
      myservo1.write(0);
      delay(500);
     }
     if(digitalRead(7) == HIGH){
      Serial.println("f3high");  
      myservo2.write(180);
      delay(500);
      
      }
     else if(digitalRead(7) == LOW){
      Serial.println("f3low");  
      myservo2.write(0);
      delay(500);
      }
      if(digitalRead(8) == HIGH){
      Serial.println("f4high");
       myservo3.write(180);
       delay(500);
      }
      else if(digitalRead(8) == LOW){
        Serial.println("f4low");  
      myservo3.write(0);
      delay(500);
      }
      if(digitalRead(12) == HIGH){
        Serial.println("f5high");
        myservo4.write(180);
        delay(500);
      }
      else if(digitalRead(12) == LOW){
        Serial.println("f5low");  
      myservo4.write(0);
      delay(500);
      
    }
    Serial.println(" ");
    delay(500);
}

    
  
