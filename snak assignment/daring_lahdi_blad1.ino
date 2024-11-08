int led1=2;
int led2=3;
int led3=4;
int led4=5;
int led5=6;
int led6=7;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  
}

void loop()
{
  digitalWrite(led1, HIGH);
  delay(10); 
  digitalWrite(led1, LOW);
  delay(20);
  digitalWrite(led2, HIGH);
  delay(20); 
  digitalWrite(led2, LOW);
  delay(30); 
  digitalWrite(led3, HIGH);
  delay(30); 
  digitalWrite(led3, LOW);
  delay(40); 
  digitalWrite(led4, HIGH);
  delay(40); 
  digitalWrite(led4, LOW);
  delay(50); 
  digitalWrite(led5, HIGH);
  delay(60); 
  digitalWrite(led5, LOW);
  delay(70); 
  digitalWrite(led6, HIGH);
  delay(80); 
  digitalWrite(led6, LOW);
  delay(90); 
}