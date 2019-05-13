
int power = 4;
int space = 5;
int reality = 6;
int time = 7;
int soul = 8;
int mind = 9;

String a;
int sensorValue = 0;
// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(power, OUTPUT);     
  pinMode(space, OUTPUT);     
  pinMode(reality, OUTPUT);
  pinMode(time, OUTPUT);     
  pinMode(soul, OUTPUT);     
  pinMode(mind, OUTPUT);  
  digitalWrite(power, HIGH);
  digitalWrite(space, HIGH);
  digitalWrite(reality, HIGH);
  digitalWrite(time, HIGH);
  digitalWrite(soul, HIGH);
  digitalWrite(mind, HIGH);  
  Serial.begin(9600);
  while (!Serial) ; // wait for serial  
}

// the loop routine runs over and over again forever:
void loop() {
        sensorValue = analogRead(A3);
        if(sensorValue<600)
        {
          digitalWrite(soul, LOW);
          digitalWrite(space, LOW);
          digitalWrite(reality, LOW);
          digitalWrite(time, LOW);
          digitalWrite(mind, LOW);
          digitalWrite(power, LOW); 
          delay(5000);         
        }
        else
        {
          digitalWrite(soul, HIGH);
          digitalWrite(space, HIGH);
          digitalWrite(reality, HIGH);
          digitalWrite(time, HIGH);
          digitalWrite(mind, HIGH);
          digitalWrite(power, HIGH);                    
        }
        while(Serial.available()) {
        
        a= Serial.readString();// read the incoming data as string
        if(a=="power")
        {
          digitalWrite(power, LOW);
          digitalWrite(space, HIGH);
          digitalWrite(reality, HIGH);
          digitalWrite(time, HIGH);
          digitalWrite(mind, HIGH);
          digitalWrite(soul, HIGH);          
          delay(3000);
          digitalWrite(power, HIGH);
        }
        else if(a == "space")
        {
          digitalWrite(space, LOW);
          digitalWrite(power, HIGH);
          digitalWrite(reality, HIGH);
          digitalWrite(time, HIGH);
          digitalWrite(mind, HIGH);
          digitalWrite(soul, HIGH);          
          delay(3000);
          digitalWrite(space, HIGH);
        }
        else if(a == "reality")
        {
          digitalWrite(reality, LOW);
          digitalWrite(space, HIGH);
          digitalWrite(power, HIGH);
          digitalWrite(time, HIGH);
          digitalWrite(mind, HIGH);
          digitalWrite(soul, HIGH);          
          delay(3000);
          digitalWrite(reality, HIGH);
        }
        else if(a == "time")
        {
          digitalWrite(time, LOW);
          digitalWrite(space, HIGH);
          digitalWrite(reality, HIGH);
          digitalWrite(power, HIGH);
          digitalWrite(mind, HIGH);
          digitalWrite(soul, HIGH);          
          delay(3000);
          digitalWrite(time, HIGH);
        }
        else if(a == "mind")
        {
          digitalWrite(mind, LOW);
          digitalWrite(space, HIGH);
          digitalWrite(reality, HIGH);
          digitalWrite(time, HIGH);
          digitalWrite(power, HIGH);
          digitalWrite(soul, HIGH);          
          delay(3000);
          digitalWrite(mind, HIGH);
        }
        else if(a == "soul")
        {
          digitalWrite(soul, LOW);
          digitalWrite(space, HIGH);
          digitalWrite(reality, HIGH);
          digitalWrite(time, HIGH);
          digitalWrite(mind, HIGH);
          digitalWrite(power, HIGH);          
          delay(3000);
          digitalWrite(soul, HIGH);
        }        
        else if(a == "snap")
        {
          digitalWrite(soul, LOW);
          digitalWrite(space, LOW);
          digitalWrite(reality, LOW);
          digitalWrite(time, LOW);
          digitalWrite(mind, LOW);
          digitalWrite(power, LOW);          
          delay(5000);
        }        
    }  
}
