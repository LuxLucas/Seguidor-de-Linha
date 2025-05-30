#include <Arduino.h>
#include <MotorCC.h>
#include <SensorInfravermelho.h>

using namespace std;

/*
  ASSINATURA DE FUNÇÕES
*/

int somaRespostaSensores();

/*
  DECLARAÇÃO DE VARIÁVEIS
*/

MotorCC motorEsquerdo(9,10,11);
MotorCC motorDireito(7,8,6);

SensorInfravermelho sensorDireito(3);
SensorInfravermelho sensorCentroDireito(4);
SensorInfravermelho sensorCentral(5);
SensorInfravermelho sensorCentroEsquerdo(12);
SensorInfravermelho sensorEsquerdo(13);

const unsigned short int quantidadeSensores = 5;

SensorInfravermelho* sensores[quantidadeSensores] = {
    &sensorEsquerdo,        //0
    &sensorCentroEsquerdo,  //1  
    &sensorCentral,         //2
    &sensorCentroDireito,   //3
    &sensorDireito,         //4
  };

bool saiu_pela_esq = false;
bool saiu_pela_dir = false;

/*
  FUNÇÕES PRINCIPAIS
*/

void setup() {
  Serial.begin(9600);
  motorEsquerdo.girarAntiHorario(0);
  motorDireito.girarAntiHorario(0);
}

void loop() {
    int ultimoSensorQueCaptouLinha = 0;
    // andar reto
    if (sensores[2]->isReflect()){
        motorEsquerdo.girarHorario(110);
        motorDireito.girarHorario(110);
        saiu_pela_dir = false;
        saiu_pela_esq = false;
        ultimoSensorQueCaptouLinha = 2;
    }

    // acionamento esquerda brusco
    else if (sensores[0]->isReflect() && !sensores[1]->isReflect()){
        motorEsquerdo.girarHorario(0);
        motorDireito.girarHorario(100);
        saiu_pela_dir = false;
        saiu_pela_esq = true;
        ultimoSensorQueCaptouLinha = 0;
    }

    // acionamento esquerda leve
    else if (sensores[1]->isReflect()){
        motorEsquerdo.girarHorario(25);
        motorDireito.girarHorario(100);
        ultimoSensorQueCaptouLinha = 1;
        saiu_pela_dir = false;
        saiu_pela_esq = false;
    }

    // acionamento direita brusco
    else if (sensores[4]->isReflect() && !sensores[3]->isReflect()){
        motorEsquerdo.girarHorario(100);
        motorDireito.girarHorario(0);
        saiu_pela_dir = true;
        saiu_pela_esq = false;
        ultimoSensorQueCaptouLinha = 4;
    }

    // acionamento direita leve
    else if (sensores[3]->isReflect()){
        motorEsquerdo.girarHorario(100);
        motorDireito.girarHorario(25);
        saiu_pela_dir = false;
        saiu_pela_esq = false;
        ultimoSensorQueCaptouLinha = 3;
    }

    else{
        
        if (saiu_pela_dir && !somaRespostaSensores() && ultimoSensorQueCaptouLinha == 4){
            motorEsquerdo.girarHorario(100);
            motorDireito.girarHorario(0);
        }

        else if (saiu_pela_esq && !somaRespostaSensores() && ultimoSensorQueCaptouLinha == 0){
            motorEsquerdo.girarAntiHorario(100);
            motorDireito.girarHorario(0);
        }
    }
}

/*
  DECLARAÇÃO DE FUNÇÕES
*/

int somaRespostaSensores(){
  int soma = 0;
  for(const auto& sensor: sensores){
    soma += sensor->isReflect();
  }
  return soma;
}
