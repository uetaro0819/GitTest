void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    if  (BOOTSEL)  {
        digitalWrite(LED_BUILTIN, HIGH)；
    } else  {
        for (int i = 0; i < 3; i++) {
            digitalWrite(LED_BUILTIN, HIGH)；
            delay(100);
            digitalWrite(LED_BUILTIN, LOW)；
            delay(200)；
        }
    }
    delay(1000)；
}
