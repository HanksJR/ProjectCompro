// input 
int LDR1 = A0;
int LDR2 = A1;
// output
int led1 = 8;
int led2 = 9;


int sensorValue1 = 0;
int sensorValue2 = 0;

float a = 0;

void setup() {
  pinMode(led1, OUTPUT); 
  pinMode(led2, OUTPUT); 
  Serial.begin(9600);
}

void loop() {
  sensorValue1 = analogRead(LDR1);
  sensorValue2 = analogRead(LDR2);
  
// Set1
  if(sensorValue1 <= 400){
    digitalWrite(led1, HIGH);
  }

  if(sensorValue1 > 400){
    digitalWrite(led1, LOW);
  }

// Set2
  if(sensorValue2 >= 50){
    digitalWrite(led2, LOW);
  }

  if(sensorValue2 < 50){
    digitalWrite(led2, HIGH); 
  }

  Serial.println("led 1");
  Serial.println(sensorValue1);
  Serial.println("led 2");
  Serial.println(sensorValue2);
  delay(500);
}
