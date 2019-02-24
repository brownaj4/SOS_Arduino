int LED = 13;
int i;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  for(i=0; i < 3; i++){
    digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(100);                       // wait for a second
    digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
    delay(100);                       // wait for a second
  }
  delay(500);
  for(i=0; i <3; i++){
    digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(500);                       // wait for a second
    digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
    delay(500);                       // wait for a second
  }
                      
  
}
