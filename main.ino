const int ledPin = 13; // Pin connected to the LED
#define buzzer 8

void setup() {
  // Set the LED pin as an output
  pinMode(ledPin, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}
int state = 0;
void loop() {
 // tone(buzzer,1000);
  if (Serial.available() > 0) {
    char inputChar = Serial.read();
    Serial.print("Received: ");
    Serial.println(inputChar);

    // Process the input character as needed
    if (inputChar == '0') {
      state = 0;
    } else if (inputChar == '1') {
      state = 1;
    }
  }
  if (state==1){
       
      digitalWrite(ledPin, HIGH);
  }else if (state ==0){
   // noTone(buzzer);
    digitalWrite(ledPin, LOW);
  }
}