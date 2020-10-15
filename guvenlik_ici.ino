#define trig_pin 12
#define echo_pin 11
#define yesil 6
#define kirmizi 5
void setup() {
pinMode(kirmizi,OUTPUT);
pinMode(yesil,OUTPUT);
pinMode(trig_pin,OUTPUT);
pinMode(echo_pin,INPUT);
digitalWrite(yesil,HIGH);
digitalWrite(kirmizi,LOW);
}

void loop() 
{
   int sure;
   int mesafe;
   int sure2;
   int mesafe2;
   
   digitalWrite(trig_pin,LOW);
   delayMicroseconds(10);
   digitalWrite(trig_pin,HIGH);
   delayMicroseconds(10);
   digitalWrite(trig_pin,LOW);
   sure=pulseIn(echo_pin,HIGH);
   mesafe=(sure)/29.1/2;
   delay(100);
 
   digitalWrite(trig_pin,LOW);
   delayMicroseconds(10);
   digitalWrite(trig_pin,HIGH);
   delayMicroseconds(10);
   digitalWrite(trig_pin,LOW);
   sure2=pulseIn(echo_pin,HIGH);
   mesafe2=(sure2)/29.1/2;
   if (mesafe2<mesafe-5||mesafe2>mesafe+5)
   {
      digitalWrite(kirmizi,HIGH);
      digitalWrite(yesil,LOW);
   }
}
