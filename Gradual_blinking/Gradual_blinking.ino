void setup() {
  // No setup required for this sketch
}

void loop() {
  // for imcreasing brightness
  for (int i = 0; i <= 255; i++){
    analogWrite(10, i);   // Set the PWM value of pin 10 to i
    delay(10);
  }
  // for decreasing brightness
  for (int j = 255; j >= 0; j--){
    analogWrite(10, j);   // Set the PWM value of pin 10 to j
    delay(10);
  }
}
