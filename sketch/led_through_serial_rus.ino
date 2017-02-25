int led = 13;
void setup() {
  {
    pinMode(led, OUTPUT);

    Serial.begin(9600);
    Serial.flush();
  }
}

void loop() {
  {
    String input = "";
    while (Serial.available())
    {
      input += (char) Serial.read();
      delay(5);
    }
    if (input == "on") {
      Serial.println("on executed");
      digitalWrite(led, HIGH);
      } else if (input == "off"){
              Serial.println("off executed");
              digitalWrite(led, LOW);
            }
  }
}
