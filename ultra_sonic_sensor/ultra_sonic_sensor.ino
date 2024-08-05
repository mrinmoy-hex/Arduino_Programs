const int trigPin = 9; // Trigger pin of the ultrasonic sensor
const int echoPin = 8; // Echo pin of the ultrasonic sensor
const int ledPin = 10; // PWM pin connected to the LED

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600); // Start the serial communication to monitor distance
}

void loop() {
  // Send a pulse to trigger the sensor
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the pulse width from the echo pin
  long duration = pulseIn(echoPin, HIGH);

  // Calculate the distance in centimeters
  long distance = duration * 0.034 / 2;

  // Print the distance to the serial monitor (for debugging)
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Map the distance to a brightness value (0-255)
  int brightness = map(distance, 0, 100, 0, 255);
  brightness = constrain(brightness, 0, 255); // Ensure the brightness is within the valid range

  // Set the LED brightness
  analogWrite(ledPin, brightness);

  // Small delay to prevent excessive serial output
  delay(100);
}
