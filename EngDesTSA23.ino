int redPin = 2;
int greenPin = 3;
int tWait = 2500;

void setup() {
  // put your setup code here, to run once:
  
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);

  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);


}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(greenPin, HIGH);
  delay(tWait);
  digitalWrite(greenPin, LOW);
  delay(tWait);
  digitalWrite(redPin, HIGH);
  delay(tWait);
  digitalWrite(redPin, LOW);
  delay(tWait);

}
