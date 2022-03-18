void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
}
int var;
void loop()
{
  var = digitalRead(3);
  if(var){
         digitalWrite(2, HIGH);
   }
}
