// input 
int LDR1 = A0;
int LDR2 = A1;
// output
int LED1 = 8;
int LED2 = 9;


int sensorValue1 = 0;
int sensorValue2 = 0;

float a = 0;

void setup() {
  pinMode(LED1, OUTPUT); 
  pinMode(LED2, OUTPUT); 
  Serial.begin(9600);
}

void loop() {
  sensorValue1 = analogRead(LDR1);
  sensorValue2 = analogRead(LDR2);
  
// Set1
//check luminance in room
  if(sensorValue1 <= 400){
    digitalWrite(LED1, HIGH);
  }

  if(sensorValue1 > 400){
    digitalWrite(LED1, LOW);
  }

// Set2
//check luminance for led1
  if(sensorValue2 >= 50){
    digitalWrite(LED2, LOW);
  }

  if(sensorValue2 < 50){
    digitalWrite(LED2, HIGH); 
  }
  
  Serial.println("LED 1");
  Serial.println(sensorValue1);
  Serial.println("LED 2");
  Serial.println(sensorValue2);
  delay(500);
}
