#define S0 4
#define S1 5
#define S2 6
#define S3 7
#define sensorOut 8

#define RED_LED 9
#define GREEN_LED 10
#define YELLOW_LED 11
#define BLUE_LED 12

unsigned long readColor(bool s2, bool s3) {
  digitalWrite(S2, s2);
  digitalWrite(S3, s3);
  delay(50);
  return pulseIn(sensorOut, LOW, 100000);
}

void allOff() {
  digitalWrite(RED_LED, LOW);
  digitalWrite(GREEN_LED, LOW);
  digitalWrite(YELLOW_LED, LOW);
  digitalWrite(BLUE_LED, LOW);
}

void setup() {
  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(sensorOut, INPUT);

  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);

  digitalWrite(S0, HIGH);
  digitalWrite(S1, LOW);

  allOff();
}

void loop() {
  unsigned long R = readColor(LOW, LOW);
  unsigned long G = readColor(HIGH, HIGH);
  unsigned long B = readColor(LOW, HIGH);

  // Turn OFF all LEDs first
  allOff();

  // Invalid sensor readings
  if (R == 0 || G == 0 || B == 0) {
    delay(300);
    return;
  }

  float rg = (float)R / G;
  float bg = (float)B / G;

  // RED
  if (rg < 0.65 && bg < 0.85) {
    digitalWrite(RED_LED, HIGH);
  }

  // BLUE
  else if (rg > 1.35 && bg < 0.85) {
    digitalWrite(BLUE_LED, HIGH);
  }

  // GREEN
  else if (rg > 1.05 && rg < 1.30 &&
           bg > 0.80 && bg < 1.15) {
    digitalWrite(GREEN_LED, HIGH);
  }

  // YELLOW
  else if (rg < 0.85 && bg > 1.35) {
    digitalWrite(YELLOW_LED, HIGH);
  }

  // UNKNOWN COLOR
  else {
    allOff();
  }

  delay(300);
}