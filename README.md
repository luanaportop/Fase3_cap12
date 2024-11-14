# Sistema Inteligente de Monitoramento Agrícola com ESP32

## Descrição

Este projeto visa desenvolver um sistema de monitoramento agrícola inteligente utilizando o microcontrolador ESP32 e quatro sensores distintos. O sistema é projetado para coletar dados ambientais e automatizar o controle de irrigação e monitoramento de segurança, ajudando a otimizar o uso de recursos na agricultura.

## Objetivo do Projeto

O objetivo deste projeto é criar uma solução automatizada que monitore as condições ambientais e tome decisões inteligentes sobre o uso de recursos, como a água para irrigação, com base nas informações coletadas dos sensores. Esse sistema será capaz de monitorar temperatura, umidade, nível de água, presença de movimento e intensidade da luz solar, permitindo ajustes automáticos para melhorar a eficiência e sustentabilidade da operação agrícola.

## Componentes Utilizados

1. **ESP32** - Microcontrolador principal para leitura de dados e controle das ações automatizadas.
2. **Sensor de Umidade e Temperatura (DHT22)** - Mede a temperatura e umidade do ambiente.
3. **Sensor de Ultrassom (HC-SR04)** - Mede a distância para monitorar o nível de água nos reservatórios.
4. **Sensor de Movimento PIR** - Detecta a presença de pessoas ou animais na área monitorada.
5. **Sensor de Luz (LDR)** - Mede a intensidade da luz solar para ajustar a irrigação de acordo com a luminosidade.

## Funcionalidades

1. **Monitoramento Climático** - Mede temperatura e umidade usando o DHT22 para ajustar a irrigação conforme as condições ambientais.
2. **Controle de Nível de Água** - Usa o HC-SR04 para monitorar o nível de água no reservatório, acionando a irrigação quando o nível estiver adequado.
3. **Detecção de Presença** - Detecta invasões de pessoas ou animais usando o sensor PIR, útil para segurança agrícola.
4. **Ajuste de Irrigação com Base na Luminosidade** - Monitora a intensidade de luz com o LDR para ajustar a quantidade de água conforme a necessidade.

## Estrutura do Repositório

- `/src` - Contém o código-fonte do projeto.
- `/docs` - Documentação detalhada do sistema, incluindo diagrama de circuito e descrição dos sensores.
- `/tests` - Testes manuais e automatizados para verificar o funcionamento correto do sistema.

## Descrição do Papel de Cada Sensor no Sistema

- **DHT22 (Sensor de Umidade e Temperatura)**: Fornece dados sobre temperatura e umidade para que o sistema ajuste a irrigação de acordo com as condições climáticas.
- **HC-SR04 (Sensor de Ultrassom)**: Mede a distância para monitorar o nível de água em tanques, evitando desperdício de água e otimizando o uso dos recursos hídricos.
- **PIR (Sensor de Movimento)**: Detecta movimentos ao redor das plantações, permitindo o acionamento de alarmes ou notificações para segurança.
- **LDR (Sensor de Luz)**: Monitora a intensidade da luz solar, ajustando a irrigação conforme a luminosidade para otimizar o consumo de água.

## Instruções de Instalação e Dependências

### Pré-requisitos

1. **Conta no Wokwi.com** - Cadastre-se em [Wokwi](https://wokwi.com/).
2. **Repositório no GitHub** - Crie e clone o repositório no GitHub onde o código será armazenado.

### Configuração do Projeto no Wokwi

1. **Adicionar Componentes**:
   - ESP32
   - DHT22
   - HC-SR04
   - PIR
   - LDR

2. **Carregar Código**: Copie o código-fonte para o editor no Wokwi e conecte cada sensor conforme o esquema no arquivo `/docs`.

### Dependências

- `DHT.h` - Para o sensor DHT22
- `Ultrasonic.h` - Para o sensor HC-SR04
- `Adafruit_Sensor.h` - Para integração dos sensores adicionais

### Testes

Use o **Monitor Serial** no Wokwi para monitorar as leituras dos sensores e validar o funcionamento.

## Instruções para Rodar a Simulação

1. Inicie a simulação no Wokwi e observe as leituras do Monitor Serial.
2. Certifique-se de que os sensores estão corretamente posicionados e retornando valores adequados.

## Exemplo de Saída

No Monitor Serial, você verá leituras como:

```plaintext
Temperatura: 24.00°C, Umidade: 40.00%
Distância do reservatório: 100 cm
Movimento detectado: Não
Intensidade de luz: 3000
