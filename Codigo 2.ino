#define E1 8  // Enable Pin for motor 1
#define I1 10     // Control pin 1 for motor 1
#define I2 9     // Control pin 2 for motor 1
#define E2 7  // Enable Pin for motor 2
#define I3 6     // Control pin 1 for motor 2
#define I4 5 	// Control pin 2 for motor 2

void setup()
   {
        pinMode(8,OUTPUT);
 		pinMode(9,OUTPUT);
		pinMode(10,OUTPUT);
  		pinMode(5,OUTPUT);
 		pinMode(6,OUTPUT);
		pinMode(7,OUTPUT);
  		pinMode(A0,INPUT);
   }
void loop()
   {
  		int val;
  		val=analogRead(A0);
  		val = map(val, 0, 1023, 0, 250);
    	//digitalWrite(E2, HIGH);     
        //analogWrite(I4, 0);     
        //analogWrite(I3, val);
        //delay(3000);
  if(val<130&&val>120){
    digitalWrite(E1, LOW);
  }else{
    if(val<124){
      digitalWrite(E1, HIGH);     
      analogWrite(I1, val+250);     
      analogWrite(I2, 0);
    }else{
      if(val>124){
        digitalWrite(E1, HIGH);     
      analogWrite(I1, 0);     
      analogWrite(I2, val);
      }
    }
  }