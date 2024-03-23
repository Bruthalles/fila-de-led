// C++ code
//
int tempo = 150;
 

void setup()
{
	pinMode(13, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(2, OUTPUT);
  
}

void loop()
{
  digitalWrite(13,  HIGH);
  delay(tempo);
  digitalWrite(13,  LOW);
  
  digitalWrite(11, HIGH);
  delay(tempo);
  digitalWrite(11,  LOW);
  
  digitalWrite(8,  HIGH);
  delay(tempo);
  digitalWrite(8,  LOW);
  
  digitalWrite(5,  HIGH);
  delay(tempo);
  digitalWrite(5,  LOW);
  
  digitalWrite(3,  HIGH);
  delay(tempo);
  digitalWrite(3,  LOW);
  
  digitalWrite(2,  HIGH);
  delay(tempo);
  digitalWrite(2,  LOW);
  
  delay(tempo);
 
  
}