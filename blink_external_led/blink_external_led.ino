const int ledPin = 12;

void setup() {
  pinMode (ledPin, OUTPUT);
}

void loop() {
  digitalWrite (ledPin, HIGH);  // turn on the LED
  delay(1000);  // wait for half a second or 500 milliseconds
  digitalWrite (ledPin, LOW);  // turn off the LED
  delay(1000);  // wait for half a second or 500 milliseconds
}
