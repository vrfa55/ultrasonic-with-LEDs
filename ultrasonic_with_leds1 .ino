#define echo 11
#define trig 10
#define r1 6
#define r2 7
#define r3 8
#define r4 9
long duration,distance;

void setup()
{
  pinMode(r1, OUTPUT);
  pinMode(r2, OUTPUT);
  pinMode(r3, OUTPUT);
  pinMode(r4, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

}

void loop()
{digitalWrite(trig, LOW);
delayMicroseconds(2); 
digitalWrite(trig, HIGH);
delayMicroseconds(10); 
digitalWrite(trig, LOW);
duration = pulseIn(echo, HIGH);
distance = (duration/2) * 0.0343;
 if (distance >= 0 ){
   digitalWrite(r1,1);
 }
   else{ 
     digitalWrite(r1,0);
}if (100  < distance  ){
   digitalWrite(r2,1);
 }
   else{ 
     digitalWrite(r2,0);
}if (200  < distance  ){
   digitalWrite(r3,1);
 }
   else{ 
     digitalWrite(r3,0);
}if (distance > 300  ){
   digitalWrite(r4,1);
 }
   else{ 
     digitalWrite(r4,0);
}
 
}