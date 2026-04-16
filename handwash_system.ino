#define SENSOR_PIN 2   // IR sensor
#define PUMP_PIN   3   // Relay or motor

void setup() {
  pinMode(SENSOR_PIN, INPUT);
  pinMode(PUMP_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorState = digitalRead(SENSOR_PIN);

  if (sensorState == HIGH) {  // Hand detected
    digitalWrite(PUMP_PIN, HIGH);  // Turn ON pump
    Serial.println("Pump ON");
    delay(2000);  // Run pump for 2 sec
  } 
  else {
    digitalWrite(PUMP_PIN, LOW);   // Turn OFF pump
    Serial.println("Pump OFF");
  }
}
