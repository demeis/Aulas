int a = 1;
void setup()
{
  
  while (a<=6) {
  pinMode (a, OUTPUT);
  a = a+1; 
    
  }
}

void loop()
{
  digitalWrite(2, HIGH);
  delay(2000);
  digitalWrite(3, HIGH);
  delay(2000);
  digitalWrite(4, HIGH);
  delay(2000);
  digitalWrite(5, HIGH);
  delay(2000);
  digitalWrite(6, HIGH);
  delay(2000);
  digitalWrite(a, LOW);
  for (a=2; a<=6; a++) {
  digitalWrite (a, LOW);
  }
  delay(2000);
}
