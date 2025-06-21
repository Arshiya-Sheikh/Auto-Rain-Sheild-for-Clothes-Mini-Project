# sketch_miniproject.ino
//Define the pins
const int rainSensorPin = A0; // Pin connected to the rain sensor
const int motorForwardPin = 3; // Pin connected to the motor for forward rotation
const int motorReversePin = 4; // Pin connected to the sutor for reverse rotation
// Variables to track the state of the sensor and motor
bool previousSensorState = LOW; // Stores the previous state of the sensor
void setup() {
pinMode(rainSensorPin, INPUT);
pinhode(motorForwardPin, OUTPUT); 
pinhode (motorReversePin, OUTPUT); 
// Ensure motor is off at the start 
digitalwrite(motorForwardPin, LOW);
digitalwrite(motorReversePin, LOW);
}
void loop() {
int currentSensorState = digitalRead(rainSensorPin);
if (currentSensorstate == HIGH && previousSensorState == LOW) {
//Rain starts: sensor goes from LOW TO HIGH
digitalwrite(motorForwardPin, HIGH); // Turn motor forward
delay(2000);//Run motor forward for 2 seconds
digitalwrite(motorForwardPin, LOW); // stop the motor
else if (currentSensorState == LOW && previousSensorState == HIGH) {
// Rain stops: sensor goes from HIGH TO LOW
digitalwrite(motorReversePin, HIGH); // Turn motor in reverse 
delay(2000); // Run motor in reverse for 2 seconds
digitalwrite(motorReversePin, LOW); // stop the motor
// update the previous sensor state
previousSensorstate = currentSensorState;
}
