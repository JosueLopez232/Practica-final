#include <Servo.h>
Servo palanca;

int grados;
  
  
void setup()
{
  Serial.begin(9600);
  palanca.attach(2);
}

void loop()
{
  grados= map (analogRead(A5), 0,1023,0,180);
  Serial.println(analogRead(A5));
  delay(500);
  palanca.write(grados);
}