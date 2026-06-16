const int BUTTON_PIN = D0; 
const int LED_PIN    = D1; 


const int PRESSED_STATE = LOW; 
const int LED_ON        = HIGH; 

void setup() {
    pinMode(LED_PIN, OUTPUT);
    

    pinMode(BUTTON_PIN, INPUT_PULLUP); 
}

void loop() {
    int buttonState = digitalRead(BUTTON_PIN);

    if (buttonState == PRESSED_STATE) {
        digitalWrite(LED_PIN, LED_ON);
    } else {

        digitalWrite(LED_PIN, !LED_ON); 
    }
}