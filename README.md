# Seguidor de linha com 2 rodas

## Motivação

O tema do trabalho foi inspirado nas competições de seguidores de linha em eventos como [IronCup](https://noic.com.br/olimpiadas/robotica/ironcup/) e [RoboChallenge Brasil](https://www.youtube.com/watch?v=3mpm20NsIOA). O objetivo foi desenvolver um pequeno carro seguidor de linha que se adequasse as regras dessas competições que, por sinal, utilizam [normas parecidas](https://robocore-eventos.s3.sa-east-1.amazonaws.com/public/RoboCore_Seguidor_de_Linha_Regras_RSM.pdf). 

## Ferramentas usadas

A construção do trabalho pode ser dividida em duas partes: _código_ e _montagem_. 

### Montagem

Resumindo, pois a [**_montagem_**](https://github.com/LuxLucas/Seguidor-de-Linha/blob/main/docs/montagem.md) não é o foco dessa publicação, foi usado um Arduino Uno para controlar o movimento do seguidor de linha com base nas respostas dos sensores infravermelhos, junto do módulo de Ponte H Dupla L298N para possibilitar a direção de rotação dos motores de corrente contínua (CC) e alternar suas velocidades. Todas esses componentes são alimentados por duas baterias de Li-Ion 18650 e acomodados num chassi de acrílico.

### Código

Para a escrita do programa criado em linguagem [C++](https://pt.wikipedia.org/wiki/C%2B%2B), foi-se utilizado o editor de código [Visual Studio Code](https://code.visualstudio.com/) juntamente da extensão [PlatformIO IDE](https://platformio.org/platformio-ide) responável por compilar e fazer o upload do código ao Arduino Uno.

Tentando minimizar repetições, seguimos a orientação a objetos e desenvolvemos classes para controlar ou obtermos leitura de sinais dos motores CC e dos sensores infravermelhos.

#### Classe dos motores

O nome da classe a qual criamos nossos objetos motores é chamada _MotorCC_ e pode ser encontrada [nesse diretório](https://github.com/LuxLucas/Seguidor-de-Linha/tree/main/src/MotorCC), com ela podemos dar comandos para alterar a velocidade e o sentido de rotação das rodas do carrinho.

As atuais assinaturas de funções desta classe, de acordo com o [arquivo header correspondente](https://github.com/LuxLucas/Seguidor-de-Linha/blob/main/include/MotorCC.h), encontram-se da seguinte forma:

```cpp
class MotorCC{
  private:
    unsigned short int velocidadePadrao;
    unsigned short int pinoA, pinoB, pinoEN;
  public:
    MotorCC(unsigned short int _pinoA, unsigned short int _pinoB, unsigned short int _pinoEN);
    MotorCC(unsigned short int _pinoA, unsigned short int _pinoB);
    void girarHorario();
    void girarHorario(unsigned short int velocidade);
    void girarAntiHorario();
    void girarAntiHorario(unsigned short int velocidade);
};
```

#### Classe dos sensores infravermelhos

O nome da classe a qual criamos para nossos sensores é chamada _SensorInfravermelho_, encontrada [nesse diretório](https://github.com/LuxLucas/Seguidor-de-Linha/tree/main/src/SensorInfravermelho). De forma mais "simplista", objetos provenientes dessa classe retornam a resposta atual dos sensores infravermelhos ao qual estão ligados.

As atuais assinaturas de funções desta classe, de acordo com o [arquivo header correspondente](https://github.com/LuxLucas/Seguidor-de-Linha/blob/main/include/SensorInfravermelho.h), encontram-se da seguinte forma:

```cpp
class SensorInfravermelho {
  private:
    unsigned short int pinOUT;
  public:
    SensorInfravermelho();
    SensorInfravermelho(unsigned short int _pinOUT);
    bool isReflect();
};
```

## Resultado

Conseguimos chegar no objetivo principal de criar um robo seguidor de linha aceito pelos eventos anteriormente citados, apesar de não termos competido. Durante o projeto, diferentes modelos foram construidos, como o seguidor de linha de 4 rodas, o seguidor de linha de 2 rodas - o foco dessa publicação - e o carrinho de 4 rodas controlado remotamente por internet. Há circunstâncias que devem ser melhoradas com a continuação do projeto, circunstâncias essas citadas no [manual de montagem](https://github.com/LuxLucas/Seguidor-de-Linha/blob/main/docs/montagem.md#sugest%C3%B5es).

O carrinho em apresenta a seguinte forma final:

![final.png](https://i.postimg.cc/Sx8HsYmM/final.png)

Para ter acesso ao código executado pelo Arduino Uno acesse, compile e faça o upload do seguinte [arquivo](https://github.com/LuxLucas/Seguidor-de-Linha/blob/main/src/main.cpp).

![carrinho na pista](./docs/gif/carrinho%20na%20pista.gif)

> Momento de teste dos carrinhos andando na pista