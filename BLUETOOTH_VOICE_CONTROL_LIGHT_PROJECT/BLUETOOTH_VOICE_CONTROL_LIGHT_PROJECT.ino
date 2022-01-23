#include<SoftwareSerial.h>
String m = "";
String a = "red light on";
String b = "yellow light on";
String c = "green light on";
String d = "red light off";
String e = "yellow light off";
String f = "green light off";
String g = "All light on";
String h = "All light off";
SoftwareSerial bt(6,5); /* (Rx,Tx) */  
void setup()
{
  bt.begin(9600); 
  Serial.begin(9600); 
  pinMode(13,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(12,OUTPUT);
//  pinMode(9,OUTPUT);
}
void loop() 
{
 
    if(bt.available()) 
    {
     m = bt.readString();
     
    Serial.println(m);
    
    if(m.equals(a))
    {
      digitalWrite(13,HIGH);
    
    }
    if(m.equals(d))
    {
      digitalWrite(13,LOW);
    } 
     if(m.equals(b))
    {
      digitalWrite(12,HIGH);
    
    }
    if(m.equals(e))
    {
      digitalWrite(12,LOW);
    } 
     if(m.equals(c))
    {
      digitalWrite(8,HIGH);
    
    }
    if(m.equals(f))
    {
      digitalWrite(8,LOW);
    }
     if(m.equals(g))
    {
      digitalWrite(13,HIGH);
     digitalWrite(12,HIGH);
     digitalWrite(8,HIGH);
    }
    if(m.equals(h))
    {
      digitalWrite(13,LOW);
      digitalWrite(12,LOW);
      digitalWrite(8,LOW);
    }  
   }
}
