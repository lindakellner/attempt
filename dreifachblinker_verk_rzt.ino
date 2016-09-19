const int ledPin1 = 8;
const int ledPin2 = 10;
const int ledPin3 = 12;

int ledState1 = LOW;
int ledState2 = LOW;
int ledState3 = LOW;

unsigned long previousMillis1 = 0;
unsigned long previousMillis2 = 0;
unsigned long previousMillis3 = 0;

int led1int = 500;
int led2int = 1000;
int led3int = 1500;
 
void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);  
  pinMode(ledPin3, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();
if (currentMillis - previousMillis1 >= led1int) {
  previousMillis1 = currentMillis;
  ledState1=!ledState1;
}

  if (currentMillis - previousMillis2 >= led2int) {
    previousMillis2 = currentMillis;  
    ledState2=!ledState2;
}

    if (currentMillis - previousMillis3 >= led3int) {
    previousMillis3 = currentMillis;
    ledState3=!ledState3;
}

  digitalWrite(ledPin1, ledState1);
  digitalWrite(ledPin2, ledState2);
  digitalWrite(ledPin3, ledState3);
  }  



