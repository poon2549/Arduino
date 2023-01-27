void ntpblink(int value) {
  digitalWrite(ntp, LOW);
  delay(10);
  digitalWrite(ntp, HIGH);
  delay(10);

}
