#include <AFMotor.h>
#include <Servo.h>

AF_DCMotor motorEsq(1); // M1 - roda esquerda
AF_DCMotor motorDir(4); // M4 - roda direita

Servo servoSensor;

#define SERVO_PIN 10
#define TRIG_PIN A0
#define ECHO_PIN A1

const int LIMITE = 25;

// Velocidade lenta, adequada para aspirador
const int VEL_ESQ = 150;
const int VEL_DIR = 150;

// Velocidades para manobras
const int VEL_TRAS = 160;
const int VEL_VIRAR = 170;

// Impulso inicial para arrancar motores
const int IMPULSO = 255;
const int TEMPO_IMPULSO = 80;

void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  servoSensor.attach(SERVO_PIN);
  servoSensor.write(90);

  Serial.begin(9600);

  parar();
  delay(1000);
}

void loop() {
  int distancia = medirDistancia();

  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");

  if (distancia > LIMITE) {
    frente();
  } else {
    parar();
    delay(200);

    tras();
    delay(250);

    parar();
    delay(200);

    int direita = olharDireita();
    int esquerda = olharEsquerda();

    servoSensor.write(90);
    delay(200);

    if (direita > esquerda) {
      virarDireita();
      delay(500);
    } else {
      virarEsquerda();
      delay(500);
    }

    parar();
    delay(200);
  }

  delay(50);
}

int medirDistancia() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  long duracao = pulseIn(ECHO_PIN, HIGH, 30000);

  if (duracao == 0) {
    return 250;
  }

  return duracao * 0.034 / 2;
}

int olharDireita() {
  servoSensor.write(40);
  delay(300);
  return medirDistancia();
}

int olharEsquerda() {
  servoSensor.write(140);
  delay(300);
  return medirDistancia();
}

void frente() {
  motorEsq.setSpeed(IMPULSO);
  motorDir.setSpeed(IMPULSO);

  motorEsq.run(FORWARD);
  motorDir.run(FORWARD);

  delay(TEMPO_IMPULSO);

  motorEsq.setSpeed(VEL_ESQ);
  motorDir.setSpeed(VEL_DIR);

  motorEsq.run(FORWARD);
  motorDir.run(FORWARD);
}

void tras() {
  motorEsq.setSpeed(IMPULSO);
  motorDir.setSpeed(IMPULSO);

  motorEsq.run(BACKWARD);
  motorDir.run(BACKWARD);

  delay(TEMPO_IMPULSO);

  motorEsq.setSpeed(VEL_TRAS);
  motorDir.setSpeed(VEL_TRAS);

  motorEsq.run(BACKWARD);
  motorDir.run(BACKWARD);
}

void virarDireita() {
  motorEsq.setSpeed(IMPULSO);
  motorDir.setSpeed(IMPULSO);

  motorEsq.run(FORWARD);
  motorDir.run(BACKWARD);

  delay(TEMPO_IMPULSO);

  motorEsq.setSpeed(VEL_VIRAR);
  motorDir.setSpeed(VEL_VIRAR);

  motorEsq.run(FORWARD);
  motorDir.run(BACKWARD);
}

void virarEsquerda() {
  motorEsq.setSpeed(IMPULSO);
  motorDir.setSpeed(IMPULSO);

  motorEsq.run(BACKWARD);
  motorDir.run(FORWARD);

  delay(TEMPO_IMPULSO);

  motorEsq.setSpeed(VEL_VIRAR);
  motorDir.setSpeed(VEL_VIRAR);

  motorEsq.run(BACKWARD);
  motorDir.run(FORWARD);
}

void parar() {
  motorEsq.run(RELEASE);
  motorDir.run(RELEASE);
}