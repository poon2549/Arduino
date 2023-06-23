int RGBPin[] = {A0,A1,A2};

void setup() {
  pinMode(RGBPin[0],OUTPUT);
  pinMode(RGBPin[1],OUTPUT);
  pinMode(RGBPin[2],OUTPUT);
}

void loop() {   // ค่าสีดูได้ที่แผนภูมิรหัสสี
  color(0,189,255);             //สีฟ้า
  delay(1000);
  color(255,165,0);             //สีแสด
  delay(1000);
  color(255,0,255);             //สีม่วง
  delay(1000);
  color(255,0,0);               //สีแดง
  delay(1000);                  
}

void color(int R ,int G ,int B) {
  analogWrite(RGBPin[0],R);
  analogWrite(RGBPin[1],G);
  analogWrite(RGBPin[2],B);
}
