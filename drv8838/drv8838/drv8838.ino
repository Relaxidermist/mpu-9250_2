//TEST CODE FOR DR8838 BREAKOUT

#define PHASELEFT 2
#define ENABLELEFT 9 // PWM PIN

void setup() {
  //SET PINMODES FOR DR8838
  pinMode(PHASELEFT, OUTPUT);
  pinMode(ENABLELEFT, OUTPUT);

  digitalWrite(PHASELEFT, LOW);
  analogWrite(ENABLELEFT,255);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(2000);
  digitalWrite(PHASELEFT, HIGH);
  delay(2000);
  digitalWrite(PHASELEFT, LOW);
  

}
