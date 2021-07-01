SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
// setup() runs once, when the device is first turned on.
void setup() {
  pinMode(D5,OUTPUT);
  pinMode(D6,OUTPUT);
  pinMode(D7,OUTPUT);
}

// function is so you can input the rgb color that you want and it will send the color to the rgb led
void setColor(int red, int green, int blue){
  analogWrite(D7, red);
  analogWrite(D6, green);
  analogWrite(D5, blue);
  delay(1000);
}

void loop() {
  //turn red
  setColor(255,0,0);
  //turn green
  setColor(0,255,0);
  //turn blue
  setColor(0,0,255);
  //turn yellow
  setColor(255,255,0);
  //turn purple
  setColor(255,0,255);
  //turn cyan
  setColor(0,255,255);

}