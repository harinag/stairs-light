/* ***
Project: Arduino Stairs Lighting
Author:  Maxim Huzmiev

*** */

unsigned char pin=3;
unsigned int r, level;

void setup() {
  // initialize digital pin 13 as an output.
  pinMode(pin, OUTPUT);
  Serial.begin(9600);
  analogWrite(pin, 200);  
}

void loop() {
  if (Serial.available() > 0) {
    r = Serial.read();
    level = (r-48)*28; 
    Serial.print("r = ");
    Serial.print(r);
    Serial.print(" / level = ");
    Serial.println(level);
    analogWrite(pin, level);
  }
  delay(100);
}



