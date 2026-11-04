# dino-chrome-esp32

Projeto da disciplina **Orientação Experimentada** de Ciências da Computação, UNIFOR.
Um sistema com ESP32, sensor de luz e servomotor que joga automaticamente
o Dinossauro do Chrome, acionando a barra de espaço quando detecta um obstáculo.


## Como funciona

1. O sensor de luz detecta mudança de claro e escuro na tela quando um obstáculo se aproxima.
2. O ESP32 lê o sensor e decide se a hora de pular.
3. O servomotor aperta a barra de espaço.

## Materiais

- ESP32
- Sensor de luz
- Servomotor
- Protoboard

## Ligações

> A simulação no Tinkercad usa um **Arduino Uno**. A montagem física usa uma **ESP32**.
> Por isso os pinos são diferentes.

### Simulação (Tinkercad, Arduino Uno)

| Componente | Conexão |
|------------|---------|
| Servomotor (sinal, fio laranja) | Pino digital 13 |
| Servomotor (alimentação) | 5V |
| Servomotor (terra) | GND |
| Sensor de luz (LDR) + resistor | [conferir, ver abaixo] 


<img width="824" height="559" alt="image" src="https://github.com/user-attachments/assets/c7f1ac2a-dbb7-4074-9a40-5963eb7693c0" /> 

### ESP32

| Componente | Pino da ESP32 |
|------------|---------------|
| Servomotor (sinal) | [pino usado no código] |
| Sensor de luz | [pino usado no código] |

## Tecnologias

- C++ 
- Tinkercad 

## Como executar

1. Monte o circuito conforme a imagem acima.
2. Abra `src/dino_esp32.ino` na Arduino IDE.
3. Selecione a placa ESP32 e a porta correta.
4. Envie o código e posicione o sensor na tela do computador.
5. Abra o jogo em `chrome://dino`.

## Resultados

- Pontuação máxima alcançada: [valor real, ex.: 400 pontos]
- Veja os testes realizados em [testes.md](testes.md)
