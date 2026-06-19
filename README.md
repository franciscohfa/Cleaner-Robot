# Aspirador Robô Autónomo

## Descrição

Este projeto consiste no desenvolvimento de um aspirador robô autónomo baseado na plataforma Arduino UNO. O sistema foi concebido para se deslocar autonomamente, detetar obstáculos presentes no ambiente e alterar a sua trajetória sempre que necessário, permitindo uma navegação segura em espaços interiores.

O projeto foi desenvolvido no âmbito da Prova de Aptidão Profissional (PAP) do curso de Técnico de Gestão e Programação de Sistemas Informáticos, tendo como principal objetivo aplicar conhecimentos adquiridos nas áreas da programação, eletrónica e robótica.

Uma das características deste projeto é a reutilização de componentes provenientes de um aspirador de mão, permitindo reduzir os custos de implementação e promover o reaproveitamento de equipamentos eletrónicos.

## Objetivos

Os principais objetivos do projeto foram:

- Desenvolver um sistema robótico autónomo;
- Implementar um sistema de deteção e desvio de obstáculos;
- Integrar um sistema de sucção funcional;
- Aplicar conhecimentos de programação utilizando Arduino;
- Desenvolver um sistema de alimentação estável e seguro;
- Promover a reutilização de componentes eletrónicos.

## Funcionamento

O robô desloca-se através de dois motores DC controlados por um Arduino UNO e por um Arduino Motor Shield L293D.

A deteção de obstáculos é realizada por um sensor ultrassónico HC-SR04 montado sobre um servo motor SG90. Quando é detetado um obstáculo, o robô interrompe o movimento e analisa as distâncias disponíveis à direita e à esquerda. Após essa análise, o sistema seleciona automaticamente a direção com maior espaço livre e retoma a navegação.

Durante todo o funcionamento, o sistema de sucção permanece ativo, permitindo a recolha de pequenos resíduos.

## Componentes Utilizados

### Sistema de Controlo

- Arduino UNO
- Arduino Motor Shield L293D
- Sensor ultrassónico HC-SR04
- Servo motor SG90

### Sistema de Locomoção

- Dois motores DC com caixa de engrenagens
- Duas rodas motrizes
- Uma roda louca

### Sistema de Alimentação

- Bateria de iões de lítio de 7,4 V
- Conversor DC-DC LM2596
- Módulo de carregamento para bateria de 7,4 V
- Interruptor DPST

### Sistema de Sucção

- Motor de sucção reutilizado de um aspirador de mão
- Depósito de resíduos reutilizado
- Bateria de iões de lítio de 3,7 V
- Módulo TP4056
- Filtro de nylon
- Tubagem em PVC

## Alimentação

O projeto utiliza dois sistemas de alimentação independentes.

O primeiro sistema utiliza uma bateria de 7,4 V para alimentar o Arduino UNO, o Motor Shield, o sensor ultrassónico e o servo motor.

O segundo sistema utiliza uma bateria de 3,7 V, proveniente de um aspirador de mão, destinada exclusivamente ao motor de sucção.

Ambos os sistemas são controlados através de um único interruptor DPST, permitindo ligar ou desligar todo o robô através de uma única ação.

## Software

O software foi desenvolvido utilizando o Arduino IDE e a linguagem de programação C++.

O código implementado permite:

- Ler os valores do sensor ultrassónico;
- Controlar o servo motor;
- Controlar os motores de tração;
- Detetar e evitar obstáculos;
- Gerir a navegação autónoma do robô.

## Estrutura Física

A estrutura do robô foi construída em PVC devido à sua resistência, baixo peso e facilidade de trabalho.

Características principais:

- Diâmetro da base: 26 cm;
- Espessura da base: 5 mm;
- Altura total aproximada: 19 cm.

## Autor

Francisco

Projeto desenvolvido no âmbito da Prova de Aptidão Profissional (PAP).
