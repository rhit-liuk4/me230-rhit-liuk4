// C++ code
//

int red = 9;
int yellow = 8;
int green = 7;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop()
{
  int i;
  digitalWrite(red, HIGH);
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(red, LOW);
  for (i = 0; i < 3; i++){
  	digitalWrite(yellow, HIGH);
  	delay(1000); // Wait for 1000 millisecond(s)
  	digitalWrite(yellow, LOW);
  	delay(1000); // Wait for 1000 millisecond(s)
  }
  digitalWrite(green, HIGH);
  delay(12500); // Wait for 12500 millisecond(s)
  digitalWrite(green, LOW);
  
  digitalWrite(yellow, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(yellow, LOW);
}