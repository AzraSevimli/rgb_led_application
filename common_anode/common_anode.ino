// RGB LED Control - Common Anode Version
// Connect the common pin of the RGB LED to +5V
// Invert PWM values by using ledWrite() to make colors display correctly.

int red = 11;
int blue = 9;
int green = 10;

// Function to invert PWM value for common anode LEDs
void ledWrite(int pin, int value) {
  analogWrite(pin, 255 - value);
}

void setup() {
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  // White (all channels on)
  ledWrite(red, 255);
  ledWrite(blue, 255);
  ledWrite(green, 255);
  delay(1000);

  // Yellow (Red + Green)
  ledWrite(red, 255);
  ledWrite(blue, 0);
  ledWrite(green, 255);
  delay(1000);

  // Purple (Red + Blue)
  ledWrite(red, 255);
  ledWrite(blue, 255);
  ledWrite(green, 0);
  delay(1000);

  // Cyan (Green + Blue)
  ledWrite(red, 0);
  ledWrite(blue, 255);
  ledWrite(green, 255);
  delay(1000);

  // Red
  ledWrite(red, 255);
  ledWrite(blue, 0);
  ledWrite(green, 0);
  delay(1000);

  // Blue
  ledWrite(red, 0);
  ledWrite(blue, 255);
  ledWrite(green, 0);
  delay(1000);

  // Green
  ledWrite(red, 0);
  ledWrite(blue, 0);
  ledWrite(green, 255);
  delay(1000);
}
