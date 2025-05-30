/*
  INCLUDE DE BIBLIOTECAS
*/

#include <Arduino.h>
#include <MotorCC.h>
#include <SensorInfravermelho.h>

using namespace std;

/*
  DEFINIÇÃO DE PROTÓTIPOS
*/

float calcularErroAtual();
float calcularErroProporcional(float kp = 1);
float calcularErroIntegrativo(float ki = 1);
float calcularErroDerivativo(float kd = 1);

/*
  DECLARAÇÃO DE VARIÁVEIS
*/

MotorCC motorEsquerdo(9,10,11),
        motorDireito(7,8,6);

SensorInfravermelho sensorDireito(3),
                    sensorCentroDireito(4),
                    sensorCentral(5),
                    sensorCentroEsquerdo(12),
                    sensorEsquerdo(13);

const unsigned short int quantidadeSensores = 5;

SensorInfravermelho* sensores[quantidadeSensores] = {
    &sensorEsquerdo,        //0
    &sensorCentroEsquerdo,  //1  
    &sensorCentral,         //2
    &sensorCentroDireito,   //3
    &sensorDireito,         //4
  };

unsigned int velocidadePadrao = 100,
             setPoint         = 0;

float erro          = 0,
      erroAnterior  = 0,

      proporcional  = 0,
      integrativo   = 0,
      derivativo    = 0,
      resultado     = 0,

      velocidadeMotorDireito  = 0,
      velocidadeMotorEsquerdo = 0;

/*
  FUNÇÕES DE EXECUÇÃO
*/

void setup() {
  Serial.begin(9600);
  motorEsquerdo.girarAntiHorario(0);
  motorDireito.girarAntiHorario(0);
}

void loop() {
  proporcional  = calcularErroProporcional(15);
  integrativo   = calcularErroIntegrativo(0);
  derivativo    = calcularErroDerivativo(0);
  resultado     = proporcional + integrativo + derivativo;

  velocidadeMotorEsquerdo = constrain((int)(velocidadePadrao - resultado), 0, 255);
  velocidadeMotorDireito  = constrain((int)(velocidadePadrao + resultado), 0, 255);

  motorEsquerdo.girarHorario(velocidadeMotorEsquerdo);
  motorDireito.girarHorario(velocidadeMotorDireito);
}

/*
  DEFINIÇÃO DE FUNÇÕES
*/

float calcularErroAtual(){
  short int pesos[quantidadeSensores] = {
    -2, -1, 0, 1, 2
  };

  int numerador = 0;
  int denominador = 0;

  for(unsigned int i = 0; i < quantidadeSensores; ++i){
    int leitura = sensores[i]->isReflect();
    numerador += leitura * pesos[i];
    denominador += leitura;
  }

  if(denominador == 0){
    return erroAnterior;
  }

  erroAnterior = erro;
  return erro = numerador / denominador;
}

float calcularErroProporcional(float kp){
  return kp * calcularErroAtual();
}

float calcularErroIntegrativo(float ki){
  integrativo += calcularErroAtual();
  return ki * integrativo;
}

float calcularErroDerivativo(float kd){
  derivativo = calcularErroAtual() - erroAnterior;
  return derivativo;
}