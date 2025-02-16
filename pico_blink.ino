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
<<<<<<< HEAD
    delay(3100)；
=======
    delay(2100)；
>>>>>>> develop
}
