int bt = 17;
int wifi = 2;
int ntp = 15;
int iot = 12;
int sw1 = 16;
int sw2 = 14;

void setup() {
  pinMode(bt, OUTPUT);
  pinMode(wifi, OUTPUT);
  pinMode(ntp, OUTPUT);
  pinMode(iot, OUTPUT);
  pinMode(sw1, INPUT_PULLUP);
  pinMode(sw2, INPUT_PULLUP);

  sw1 = HIGH;
  sw2 = LOW;
}

void loop() {
  Stop();
  delay(1000);
  forward();
  delay(1000);
  backward();
  delay(1000);
  Right();
  delay(1000);
  Left();
  delay(1000);
  Stopped();
  delay(1000);
  if (digitalRead(sw1) == LOW) {
    forward();
  } else {
    Stopped();
  }
  if (digitalRead(sw2) == LOW) {
    backward();
  } else {
    Stopped();
  }
}

void Stop() {
  digitalWrite(bt, LOW);
  digitalWrite(wifi, LOW);
  digitalWrite(ntp, LOW);
  digitalWrite(iot, LOW);
}
void forward() {
  digitalWrite(bt, LOW);
  digitalWrite(wifi, HIGH);
  digitalWrite(ntp, LOW);
  digitalWrite(iot, HIGH);
}

void backward() {
  digitalWrite(bt, HIGH);
  digitalWrite(wifi, LOW);
  digitalWrite(ntp, HIGH);
  digitalWrite(iot, LOW);
}

void Right() {
  digitalWrite(bt, HIGH);
  digitalWrite(wifi, LOW);
  digitalWrite(ntp, LOW);
  digitalWrite(iot, HIGH);

}

void Left() {
  digitalWrite(bt, LOW);
  digitalWrite(wifi, HIGH);
  digitalWrite(ntp, HIGH);
  digitalWrite(iot, LOW);

}

void Stopped() {
  digitalWrite( bt, HIGH);
  digitalWrite(wifi, HIGH);
  digitalWrite(ntp, HIGH);
  digitalWrite(iot, HIGH);

}
