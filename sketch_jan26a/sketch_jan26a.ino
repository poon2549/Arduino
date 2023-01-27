String str = "CDTI \n";
String name1 = "Nopdanai Vibhatasilpin";
int age = 35;
float gpa = 3.35;

void setup() {
  Serial.begin(9600);
  str += "Hello \n";
  str += "World";

  Serial.println("Name:" + name1);
  Serial.println("Age:" + (String)age + "Years");
  Serial.println("GPA:" + (String)gpa);

}

void loop() {
  Serial.println(str);
  delay(1000);

}
