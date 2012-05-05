// Cconnect an RGB LED to the PWM pins
 
#define REDPIN 5
#define GREENPIN 6
#define BLUEPIN 3

void setup() {
  Serial.begin(9600);

  pinMode(REDPIN, OUTPUT);
  pinMode(GREENPIN, OUTPUT);
  pinMode(BLUEPIN, OUTPUT);
}
 
void loop() {
  int r = random(0,255);
  int g = random(0,255);
  int b = random(0,255);
  
  analogWrite(REDPIN, r);
  analogWrite(GREENPIN, g);
  analogWrite(BLUEPIN, b);
  
  Serial.print(r);
  Serial.print(",");
  Serial.print(g);
  Serial.print(",");
  Serial.println(b);  
  
  delay(2000);
}
