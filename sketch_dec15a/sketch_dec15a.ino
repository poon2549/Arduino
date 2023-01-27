int sw1 = 16;
int sw2 = 14;
int iot = 12; 
int ntp = 15;
bool state = false;

void setup() {
  // put your setup code here, to run once:
pinMode(sw1, INPUT_PULLUP);
pinMode(sw2, INPUT_PULLUP);
pinMode(iot, OUTPUT);
pinMode(ntp, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(sw1) == 0)
{
 state = false;
}
if (digitalRead(sw2) == 0) {
 state = true;
  
}
if (state==true) {
  digitalWrite(iot, 1);
  digitalWrite(ntp, 0);
}
if (state==false) {
  digitalWrite(iot, 0);
  digitalWrite(ntp, 1);
}
else {
  digitalWrite(iot, 1);
  digitalWrite(ntp, 1);
          
          
  } 
}
