
int lightPin =9;
int sensorPin =8;
unsigned long startTime = 0;
unsigned long intervalOne = 500000;
unsigned long intervalTwo = 2300;

void setup() {
  pinMode(lightPin,OUTPUT);
   pinMode(sensorPin,INPUT);

   digitalWrite(lightPin,HIGH);

}

void loop() {
 digitalWrite(lightPin,HIGH);
 if(digitalRead(sensorPin)==HIGH)
 {
  startTime = millis();
  while(millis()<( startTime+intervalOne))
  digitalWrite(lightPin,LOW);
  }
  if((millis()>( startTime+intervalTwo))&&(digitalRead(sensorPin)==HIGH))
  {
     startTime = millis();
    }
  }
