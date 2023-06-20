int Grove_Water_Sensor1=8;
int Grove_Water_Sensor2=7;
int Grove_Water_Sensor3=4;

int Led1=5;
int Led2=6;
int Led3=3;


void setup() {
   pinMode(Grove_Water_Sensor1, INPUT); // The Water Sensor is an Input
   pinMode(Grove_Water_Sensor2, INPUT);
   pinMode(Grove_Water_Sensor3,INPUT);
   pinMode(Led1 , OUTPUT); // The LED is an Output-*
   pinMode(Led2 , OUTPUT);
   pinMode(Led3,OUTPUT);
   
}

void loop() {
   
   if( digitalRead(Grove_Water_Sensor1) == LOW) {
      digitalWrite(Led2,LOW);
   }else {
      digitalWrite(Led2,HIGH);
   }

   if( digitalRead(Grove_Water_Sensor2) == LOW) {
      digitalWrite(Led3,LOW);
   }else {
      digitalWrite(Led3,HIGH);
   }
   
   if( digitalRead(Grove_Water_Sensor3) == LOW) {
      digitalWrite(Led1,LOW);
   }else {
      digitalWrite(Led1,HIGH);
   }
}