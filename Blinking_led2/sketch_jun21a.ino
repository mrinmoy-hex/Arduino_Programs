int led = 13;   // LED connected to digital pin 13
int pin = 7;    // pushbutton connected to digital pin 7
int val = 0;    // variable to store the read value

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(pin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(pin);   // Read the state of the pushbutton
  digitalWrite(led, val);   // Set the LED to the same state
}
