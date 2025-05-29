#include "baudsconf.h";
int bootstate = 0;
int plot1 = 0;
int plot2 = 500;
int doublenumber = 0;
void setup() {

  Serial.begin(bauds);
  pinMode(LED_BUILTIN, OUTPUT);
  bootstate = 1;
}

void loop() {
  
  Serial.println("Which option?");
  
  while (Serial.available() == 0) {

  }
 
  int menuChoice = Serial.parseInt();  

  switch (menuChoice) {
    case 1:
      Serial.println("Running 10X LED flash");
      
      for (int i = 0; i < 10; i++) {
        digitalWrite(LED_BUILTIN, HIGH);  
        delay(500);  
        digitalWrite(LED_BUILTIN, LOW);  
        delay(500);  
      }
      break;
      
    case 2:
      for (int i = 0; i < 10; i++) {
        Serial.print("Plotting 10 Spikes\n");
        Serial.println(plot1);
        delay(250);
        Serial.println(plot2);
        delay(250);
      }
      break;
    
    case 3:
      Serial.setTimeout(100000000000000000000000000);  
      Serial.println("Enter a number:");
      while (Serial.available() == 0) {
        delay(10);
      }
      doublenumber = Serial.parseInt();
      Serial.println(doublenumber * 2);
      break;




    
    case 4:
      Serial.println("4");
      break;
  }
  
  delay(50); 
}
