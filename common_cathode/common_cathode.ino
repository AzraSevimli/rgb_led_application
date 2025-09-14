// RGB LED Control - Common Cathode Version
// Connect the common pin of the RGB LED to GND
// No inversion is needed, use analogWrite() directly.

int green = 9;
int blue = 10;
int red = 11;

void setup() {
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(red, OUTPUT);
}

void loop() {
  // White (Red + Blue + Green)
  analogWrite(red, 255);
  analogWrite(blue, 255);
  analogWrite(green, 255);
  delay(1000);

  // Yellow (Red + Green)
  analogWrite(red, 255);
  analogWrite(blue, 0);
  analogWrite(green, 255);
  delay(1000);

  // Purple (Red + Blue)
  analogWrite(red, 255);
  analogWrite(blue, 255);
  analogWrite(green, 0);
  delay(1000);

  // Cyan (Green + Blue)
  analogWrite(red, 0);
  analogWrite(blue, 255);
  analogWrite(green, 255);
  delay(1000);

  // Red
  analogWrite(red, 255);
  analogWrite(blue, 0);
  analogWrite(green, 0);
  delay(1000);

  // Blue
  analogWrite(red, 0);
  analogWrite(blue, 255);
  analogWrite(green, 0);
  delay(1000);

  // Green
  analogWrite(red, 0);
  analogWrite(blue, 0);
  analogWrite(green, 255);
  delay(1000);
}
