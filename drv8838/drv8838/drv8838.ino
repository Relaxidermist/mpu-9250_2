//TEST CODE FOR DR8838 BREAKOUT

#define PHASELEFT 2
#define ENABLELEFT 9 // PWM PIN

void setup() {
  //SET PINMODES FOR DR8838
  pinMode(PHASELEFT, OUTPUT);
  pinMode(ENABLELEFT, OUTPUT);

  digitalWrite(PHASELEFT, HIGH);
  analogWrite(ENABLELEFT,125);
}

void loop() {
  // put your main code here, to run repeatedly:

}
