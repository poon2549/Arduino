const int led1 = 12;
const int led2 = 15;
const int led3 = 2;
const int led4 = 17;
const int S1 = 16;
const int S2 = 14;
bool state = false;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(S1, INPUT_PULLUP);
  pinMode(S2, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.print(digitalRead(S1), DEC);
  Serial.print("\t");
  Serial.println(digitalRead(S2), DEC);
  if (digitalRead(S1) == 0)
  {
    state = false;
  }
  if (digitalRead(S2) == 0) {
    state = true;

  }
  if (state==true) {
    digitalWrite(led1, 1);
    digitalWrite(led2, 1);
    digitalWrite(led3, 1);
    digitalWrite(led4, 1);
  }
  else {
    digitalWrite(led1, 0);
    digitalWrite(led2, 0);
    digitalWrite(led3, 0);
    digitalWrite(led4, 0);
  }


}
