int a = 1;
int b = 8;
int c = 9;
int d = 4;
int e = 5;
int f = 6;
int g = 7;
boolean var_start = LOW;
boolean  var_contagem=LOW; 
int led = 13;

void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);

  pinMode(2 , INPUT_PULLUP);
  pinMode(3 , INPUT_PULLUP);
  pinMode(13, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(2), f_start, CHANGE);
  attachInterrupt(digitalPinToInterrupt(3), f_stop, CHANGE);
}
void loop()
{
  if (var_contagem==HIGH)
  {
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
  delay(1000);
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  delay(1000);
  digitalWrite(a, LOW);
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
  digitalWrite(e, LOW);
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
  }
}
void f_start() {
  digitalWrite(led, HIGH);
  var_contagem=HIGH;
}

void f_stop() {
  digitalWrite(led, LOW);
  var_contagem=LOW;
}








