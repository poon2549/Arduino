#include <analogWrite.h>
int iot = 12;
int ntp = 15;
int wifi = 2;
int bt = 17;

void setup() {
  Serial.begin(9600);
  pinMode(iot, OUTPUT);
  pinMode(ntp, OUTPUT);
  pinMode(wifi, OUTPUT);
  pinMode(bt, OUTPUT);
  digitalWrite(iot, HIGH);
  digitalWrite(ntp, HIGH);
  digitalWrite(wifi, HIGH);
  digitalWrite(bt, HIGH);

}

void loop() {
  Serial.println(analogRead(ldr));

  int val = map(analogRead(ldr), 600, 900, 1, 4);
  if (val == 1) {
   digitalWrite(iot, LOW);
   digitalWrite(ntp, HIGH);
   digitalWrite(wifi, HIGH);
   digitalWrite(bt, LOW);
  }


}
