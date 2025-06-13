# FIAP - Faculdade de Informática e Administração Paulista 

<p align="center">
<a href= "https://www.fiap.com.br/"><img src="assets/logo-fiap.png" alt="FIAP - Faculdade de Informática e Admnistração Paulista" border="0" width=40% height=40%></a>
</p>

<br>

# Nome do projeto

## Nome do grupo

## 👨‍🎓 Integrantes: 
- <a href="https://www.linkedin.com/in/jonastadeufernandes/?locale=en_US">Jonas Tadeu V Fernandes</a>
- <a href="">Levi Passos Silveira Marques</a>
- <a href="https://www.linkedin.com/in/rannaleslie/">Ranna Leslie</a> 
- <a href="">Raphael da Silva</a> 
- <a href="[https://www.linkedin.com/company/inova-fusca](https://www.linkedin.com/in/raphael-dinelli-8a01b278/)">Raphael Dinelli Neto</a>

## 👩‍🏫 Professores:
### Tutor(a) 
- <a href="https://www.linkedin.com/company/inova-fusca">Leonardo Ruiz Orbana</a>
### Coordenador(a)
- <a href="https://www.linkedin.com/company/inova-fusca">André Godoi Chiovato</a>


## 📜 Descrição

# 🚜 Monitoramento de Deterioração e Vida Útil das Peças

Este projeto foi desenvolvido pelo grupo **SP e Interior** como parte do desafio proposto pela empresa **Hermes Reply**, em parceria com a FIAP. A proposta visa aplicar técnicas de **Machine Learning** e **IoT** para prever falhas e estimar a vida útil de componentes mecânicos utilizados em ambientes industriais.

Nosso objetivo é permitir **manutenção preditiva**, minimizando o tempo de máquina parada e reduzindo custos operacionais.

---

## 🎯 Objetivo do Sistema

Estimar a vida útil de peças e componentes com base em:

- Tempo de uso (em horas)
- Número de ciclos de operação (liga/desliga)
- Registro de temperatura durante o funcionamento
- Dados de vibração (opcional)
- Histórico de falhas anteriores

Esses dados serão processados por modelos de Machine Learning que irão prever o risco de falha iminente e gerar alertas automatizados.

---

## 🧠 Tecnologias Utilizadas

| Camada             | Tecnologia                          | Justificativa |
|--------------------|-------------------------------------|---------------|
| **Sensoriamento**  | ESP32                               | Coleta local de tempo, ciclos, temperatura e umidade |
| **Sensoriamento**  | DTH22                               | Coleta de dados sobre temeperatura e humidade |
| **Simulação**      | [Wokwi](https://wokwi.com/)         | Plataforma para simulação de sensores e circuitos |
| **Visualização**   | Python/Pandas/MatlibPlot            | Geração do gráfico com base no conteúdo gerado na simulação no arquivo CSV |

Nesta etapa, implementamos um circuito utilizando um sendor de temperatura DTH22 conectado a um ESP32 para colhermos dados de temperatura e humidade a cada 2 segundos. Com isso acreditamos que conseguiremos insights valiosos sobre como as condições de trabalho e climáticas afetam a durabilidade das peças.

![Circuito esp32-DTH22](https://github.com/user-attachments/assets/167a5efb-539b-4c0f-b534-3445e3a7141a)


### 🧠 Por que escolhemos o ESP32?

O ESP32 foi escolhido como microcontrolador principal por ser uma plataforma robusta, acessível e amplamente utilizada em projetos de Internet das Coisas (IoT). Ele apresenta diversas vantagens:

- Possui **Wi-Fi e Bluetooth integrados**, o que facilita futuras extensões para envio de dados à nuvem.
- Suporta **múltiplos sensores e dispositivos simultaneamente** devido ao grande número de GPIOs.
- É compatível com as principais plataformas de simulação (como o Wokwi), permitindo o desenvolvimento mesmo sem hardware físico.
- Tem **baixo consumo de energia**, sendo ideal para aplicações embarcadas em ambientes industriais.
- Apresenta excelente **suporte da comunidade** e documentação, o que acelera o desenvolvimento e a prototipagem.

Essas características fazem do ESP32 uma excelente escolha para projetos que envolvem **monitoramento de ambientes industriais digitalizados**, como proposto no desafio da Hermes Reply.

### 🌡️ Por que escolhemos o sensor DHT22?

O sensor DHT22 foi selecionado por ser um dos sensores mais comuns e confiáveis para medir **temperatura e umidade**, duas variáveis fundamentais para o monitoramento de ambientes industriais. Ele apresenta as seguintes vantagens:

- Mede **temperatura de -40 a 80 °C** e **umidade de 0 a 100%**, cobrindo a maior parte dos cenários industriais.
- Apresenta maior **precisão e estabilidade** em comparação com o modelo DHT11.
- É fácil de integrar com microcontroladores como o ESP32, utilizando apenas **um pino digital**.
- É **suportado nativamente na plataforma Wokwi**, o que possibilita testes, simulações e coleta de dados mesmo sem o sensor físico.

A escolha do DHT22 atende ao objetivo desta fase do projeto: **coletar dados reais (ou simulados) representando sensores físicos em operação no chão de fábrica**.

---

### 🖥️ Leituras no Monitor Serial

Abaixo, a simulação no Wokwi mostra as leituras de temperatura e umidade capturadas pelo ESP32 com o sensor DHT22:

![serial_monitor](https://github.com/user-attachments/assets/ef790a3c-2c5b-4773-83b1-63a07bbf1ec1)


Os dados brutos em CSV podem ser encontrados no caminho src/data/dados_sensor.csv

### 📊 Gráfico
Para gerar um gráfico dos dados coletados pelo ESP32/DTH22:

Navegue até o diretório src/charts`
``` cd charts ```

Instale a biblioteca matplotli
``` pip install matplotlib ```

Rode o script
```python charts.py ```

![image](https://github.com/user-attachments/assets/28053cdd-539c-42a2-9285-f76055014c9d)

---
### 🖥️ Código do projeto
Todo o código utilizado na plataforma wokwi para extrair os dados dos sensores podem ser encontrados em src/core.
O código para gerar o gráfico está disponível em src/charts/charts.py

---

## 👥 Equipe

| Integrante     | Função                                |
|----------------|----------------------------------------|
| Jonas         | Modelagem de dados e banco relacional |
| Ranna        | Simulação de sensores e coleta de dados |
| Raphael Silva  | Modelagem de IA e predição de falhas  |
| Raphael Dinelli | Desenvolvimento de backend e frontend |
| Levi | Desenvolvimento de backend e frontend |

---

## 📎 Observações

- O repositório é público e foi compartilhado com os tutores responsáveis.
- Dados utilizados nesta fase são simulados.

---

---

## 🗃 Histórico de lançamentos
* 0.1.0 - 13/06/2025
    *

## 📋 Licença

<img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/cc.svg?ref=chooser-v1"><img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/by.svg?ref=chooser-v1"><p xmlns:cc="http://creativecommons.org/ns#" xmlns:dct="http://purl.org/dc/terms/"><a property="dct:title" rel="cc:attributionURL" href="https://github.com/agodoi/template">MODELO GIT FIAP</a> por <a rel="cc:attributionURL dct:creator" property="cc:attributionName" href="https://fiap.com.br">Fiap</a> está licenciado sobre <a href="http://creativecommons.org/licenses/by/4.0/?ref=chooser-v1" target="_blank" rel="license noopener noreferrer" style="display:inline-block;">Attribution 4.0 International</a>.</p>
