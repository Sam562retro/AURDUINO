void setup() {
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(8,INPUT_PULLUP);
pinMode(7,INPUT_PULLUP);
}

void loop() {
bool x = !digitalRead(8);
digitalWrite(13,x);
bool y = !digitalRead(7);
digitalWrite(12,y);
}
