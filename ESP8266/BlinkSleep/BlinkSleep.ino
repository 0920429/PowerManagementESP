// GPIO pin voor led
int LED = 13;

void setup(){
  // Zet de pin op output
  pinMode(LED,OUTPUT);
  delay(500);
  // Zet LED aan
  digitalWrite(LED,HIGH); 
  delay(2000);
  // Zet LED uit
  digitalWrite(LED,LOW);

  // Zet deep sleep aan
  ESP.deepSleep(10000000);
}

void loop(){
  
}
