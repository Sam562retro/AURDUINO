bool state;
void setup() {
  pinMode(13,OUTPUT);
  pinMode(12,INPUT);
  // put your setup code here, to run once:

}

void loop() {
  int a = digitalRead(12);
  if (a == LOW)
  {
  if(a == LOW)
 state = HIGH;
 else if(a == HIGH)
 state = LOW;
   digitalWrite(13,state);
 delay(100);
  }
 // put your main code here, to run repeatedly:

}
