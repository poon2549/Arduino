int sw1  = 16;
int BT   = 17;
int WIFI = 2;
 
void setup() {  
  // put your setup code here, to run once:
pinMode(sw1, INPUT);
pinMode(BT, OUTPUT);
pinMode(WIFI, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(sw1, HIGH);
  digitalWrite(sw1, LOW);
  digitalWrite(BT, HIGH);
  digitalWrite(BT, LOW);
  digitalWrite(WIFI, HIGH);
  digitalWrite(WIFI, LOW);
  
}
