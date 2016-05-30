/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */


// the setup function runs once when you press reset or power the board

int a = 1;
int b = 2;
int c = 3;
int d = 4;
int e = 5;
int f = 6;
int g = 7;
int btt = 0;
int bttstop = 8;
int val = 0;
boolean var_btt;
boolean var_bttstop;
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(btt, INPUT_PULLUP);
  
}

// the loop function runs over and over again forever


void loop() {
  
  var_btt = digitalRead(btt);
  
  if(var_btt == LOW ){
  var_bttstop = digitalRead(bttstop);
  digitalWrite(a, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
  delay(1000);

  digitalWrite(a, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  delay(1000);

  digitalWrite(a, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
  delay(1000);

  digitalWrite(a, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
  delay(1000);

  digitalWrite(a, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
  delay(1000);

  digitalWrite(a, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  delay(1000);
 
  digitalWrite(a, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  delay(1000);
 
  digitalWrite(a, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  delay(1000);

  digitalWrite(a, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  delay(1000);
 
  digitalWrite(a, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  delay(1000);
 
  digitalWrite(a, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  delay(1000);
 
  } else 
  digitalWrite(a, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
  delay(100);

}
