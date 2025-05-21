bootstate = 0

void setup() {

  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  bootstate = 1
}

void loop() {
  
  Serial.println("Which option?");
  
  while (Serial.available() == 0) {

  }
 
  int menuChoice = Serial.parseInt();  

//  Serial.print("DEBUG: You entered: ");
//  Serial.println(menuChoice);

 
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
      Serial.println("2");
      break;

    case 3:
      Serial.println("3");
      break;
    
    case 4:
      Serial.println("4");
      break;

    //default:
      //Serial.println("ERROR");
      //break;
  }
  
  delay(50); 
}
