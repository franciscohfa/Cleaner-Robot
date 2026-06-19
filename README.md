# 🤖 Aspirador Robô Autónomo

## 📖 Sobre o Projeto

Este projeto consiste no desenvolvimento de um aspirador robô autónomo capaz de se deslocar de forma independente, evitar obstáculos e realizar a recolha de pequenos resíduos através de um sistema de sucção integrado.

O projeto foi desenvolvido no âmbito da Prova de Aptidão Profissional (PAP) do curso de Técnico de Gestão e Programação de Sistemas Informáticos e teve como principal objetivo aplicar conhecimentos de eletrónica, programação, automação e robótica na construção de um protótipo funcional.

Uma das principais características deste projeto é a reutilização de componentes provenientes de um aspirador de mão, permitindo reduzir os custos de implementação e promover a reutilização de equipamentos eletrónicos.

---

## 🎯 Objetivos

Os principais objetivos definidos para o projeto foram:

- Desenvolver um robô com capacidade de navegação autónoma;
- Implementar um sistema de deteção e desvio de obstáculos;
- Integrar um sistema de aspiração funcional;
- Aplicar conhecimentos de programação em Arduino;
- Desenvolver um sistema de alimentação seguro e eficiente;
- Promover a reutilização de componentes eletrónicos.

---

## ⚙️ Funcionamento Geral

O robô desloca-se autonomamente através de dois motores DC controlados por um Arduino UNO e um Arduino Motor Shield L293D.

Durante o movimento, um sensor ultrassónico HC-SR04 monitoriza continuamente a distância aos obstáculos presentes no ambiente.

Quando é detetado um obstáculo:

1. O robô interrompe o movimento;
2. O servo motor orienta o sensor para a direita;
3. É realizada uma medição da distância disponível;
4. O sensor é orientado para a esquerda;
5. É efetuada uma nova medição;
6. O Arduino compara os valores obtidos;
7. O robô escolhe automaticamente a direção com maior espaço livre.

Enquanto o sistema de navegação funciona, o sistema de sucção permanece ativo, permitindo a recolha contínua de resíduos.

---

## 🧩 Componentes Utilizados

### Sistema de Controlo

- Arduino UNO
- Arduino Motor Shield L293D
- Sensor ultrassónico HC-SR04
- Servo motor SG90

### Sistema de Locomoção

- 2 Motores DC com caixa de engrenagens
- 2 Rodas motrizes
- 1 Roda louca

### Sistema de Alimentação

- Bateria Li-ion 7,4 V
- Conversor Buck LM2596
- Módulo de carregamento 2S
- Interruptor DPST

### Sistema de Sucção

- Motor de sucção reutilizado
- Depósito de resíduos reutilizado
- Bateria Li-ion 3,7 V reutilizada
- TP4056
- Filtro de nylon
- Tubagem em PVC

---

## 🔋 Alimentação

O projeto utiliza dois sistemas de alimentação independentes:

### Sistema de Navegação

Responsável por alimentar:

- Arduino UNO
- Motor Shield
- Sensor ultrassónico
- Servo motor

Fonte de alimentação:

- Bateria Li-ion 7,4 V

### Sistema de Sucção

Responsável por alimentar:

- Motor de sucção

Fonte de alimentação:

- Bateria Li-ion 3,7 V

Ambos os sistemas são controlados através de um único interruptor DPST.

---

## 💻 Software

O desenvolvimento do software foi realizado utilizando:

- Arduino IDE
- Linguagem C++

O código implementado permite:

- Leitura do sensor ultrassónico;
- Controlo do servo motor;
- Controlo dos motores DC;
- Deteção e desvio de obstáculos;
- Navegação autónoma.

---

## 🏗️ Estrutura Física

A estrutura do robô foi construída utilizando PVC devido à sua resistência, baixo peso e facilidade de trabalho.

### Características principais

- Diâmetro da base: 26 cm
- Espessura da base: 5 mm
- Altura total: aproximadamente 19 cm

---

## ♻️ Sustentabilidade

Um dos aspetos mais relevantes do projeto foi a reutilização de componentes provenientes de um aspirador de mão.

Foram reaproveitados:

- Motor de sucção;
- Depósito de resíduos;
- Bateria de 3,7 V.

Esta abordagem permitiu reduzir os custos de implementação e diminuir o desperdício de componentes eletrónicos.

---

## 📸 Protótipo Final

O resultado final consiste num aspirador robô autónomo capaz de navegar em ambientes interiores, evitar obstáculos e recolher pequenos resíduos de forma automática.

---

## 👨‍🎓 Autor

**Francisco**

Projeto desenvolvido no âmbito da Prova de Aptidão Profissional (PAP).

---

## 📄 Licença

Este projeto foi desenvolvido exclusivamente para fins educativos e académicos.
