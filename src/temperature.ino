int potPin = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val;
  double dat;
  int cel;

  val = analogRead(0);
  cel = (125*val)>>8;
  dat = ((double)cel*9/5)+32;
  Serial.print("Tep:");// output and display characters beginning with Tep
  Serial.print(dat);
  Serial.println("F");// display “C” characters
  delay(500);// wait for 0.5 second
}
