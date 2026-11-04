#include <Servo.h>

Servo servo;

int sensor = A0;      // pino do sensor de luz
int limite = 400;     // valor para detectar o obstáculo

void setup() {
  servo.attach(13);   // servo no pino 13
  servo.write(0);     // servo parado
  Serial.begin(9600);
}

void loop() {
  int luz = analogRead(sensor);   // lê o sensor
  Serial.println(luz);            // mostra o valor no monitor serial

  if (luz < limite) {             // se ficou escuro (cacto)
    servo.write(35);              // aperta a barra de espaço
    delay(100);
    servo.write(0);               // solta
    delay(300);                   // espera antes de pular de novo
  }
}
