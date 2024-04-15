// C++ code
// Declarar Variables

int ledrojo = 13;
int ledazul = 12;
int ledverde = 11;

void setup()
{
  Serial.begin(9600);
  pinMode(ledrojo, OUTPUT);
  pinMode(ledazul, OUTPUT);
  pinMode(ledverde, OUTPUT);
}

void loop()
{
  if (Serial.available () > 0) {
    char Letra = Serial.read();
    
    if (Letra == 'R'){
  digitalWrite(ledrojo, 255);
    }
  }
  
}
 
