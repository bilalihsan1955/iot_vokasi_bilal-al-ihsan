#include <Arduino.h> 

int lampu = 18;
int lampu2 = 17;
int lampu3 = 4;

void setup()
{
    Serial.begin(115200); 
    Serial.println("ESP32 Blinking LED");

    pinMode(lampu, OUTPUT);
    pinMode(lampu2, OUTPUT);
    pinMode(lampu3, OUTPUT);
}

void loop()
{
    
    digitalWrite(lampu, HIGH);
    digitalWrite(lampu2, LOW);
    digitalWrite(lampu3, LOW);
    Serial.println("LED RED ON");

    delay(5000); 

   
    digitalWrite(lampu, LOW);
    digitalWrite(lampu2, HIGH);
    digitalWrite(lampu3, LOW);
    Serial.println("LED YELLOW ON");

    delay(2000);

   
    digitalWrite(lampu, LOW);
    digitalWrite(lampu2, LOW);
    digitalWrite(lampu3, HIGH);
    Serial.println("LED GREEN ON");

    delay(5000);
}
