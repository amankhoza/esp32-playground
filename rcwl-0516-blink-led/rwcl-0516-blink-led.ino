const int motionSensorPin = 14;
const int ledPin = 12;
int val = 0;

void setup() {
  Serial.begin(115200);
  pinMode (ledPin, OUTPUT);
  pinMode (motionSensorPin, INPUT);
  pinMode (LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(5000);
  digitalWrite(LED_BUILTIN, LOW);
}

void loop() {
  val = digitalRead(motionSensorPin);
  if (val == 1) {
    digitalWrite (ledPin, HIGH);
  } else {
    digitalWrite (ledPin, LOW);
  }
}
