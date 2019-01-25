// RTC_DATA_ATTR zorgt ervoor dat je variable ook tussen deep sleep cycles blijft bestaan.
RTC_DATA_ATTR int aantalKeerWakker = 0;

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
  // Elke keer dat we uit deepsleep komen wordt deze één hoger
  aantalKeerWakker++;

  // Zet de wakeup timer op 10 seconde
  esp_sleep_enable_timer_wakeup(10000000);
  // Zet deep sleep aan
  esp_deep_sleep_start();
}

void loop(){
  
}