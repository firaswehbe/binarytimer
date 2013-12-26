// Example 01 : Blinking LED
const int LED1 = 1; // LED connected to
const int LED2 = 2; // LED connected to
const int LED3 = 3; // LED connected to
const int LED4 = 4; // LED connected to
const int LED5 = 5; // LED connected to
const int LED6 = 6; // LED connected to
int i;

void setup()
{
  // sets the digital
  // pins as output
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  i=0;
}
void loop()
{
  i=i+1;
  if (i>64) {
    i=63;
  }
  
  if (i&32) {
    digitalWrite(LED6, HIGH);
  } else {
    digitalWrite(LED6, LOW);
  }
  
  if (i&16) {
    digitalWrite(LED5, HIGH);
  } else {
    digitalWrite(LED5, LOW);
  }
  
  if (i&8) {
    digitalWrite(LED4, HIGH);
  } else {
    digitalWrite(LED4, LOW);
  }
  
  if (i&4) {
    digitalWrite(LED3, HIGH);
  } else {
    digitalWrite(LED3, LOW);
  }
  
  if (i&2) {
    digitalWrite(LED2, HIGH);
  } else {
    digitalWrite(LED2, LOW);
  }
  
  if (i&1) {
    digitalWrite(LED1, HIGH);
  } else {
    digitalWrite(LED1, LOW);
  }
  
  delay(3000);             // waits for a second
}


