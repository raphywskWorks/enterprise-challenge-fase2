# FIAP - Faculdade de Informática e Administração Paulista

<p align="center">
<a href="https://www.fiap.com.br/"><img src="assets/logo-fiap.png" alt="FIAP - Faculdade de Informática e Administração Paulista" border="0" width=40% height=40%></a>
</p>

---

# 📈 Monitoramento de Deterioração e Vida Últil das Peças

## 👥 Grupo SP e Interior

### 👨‍🎓 Integrantes

* [Jonas Tadeu V Fernandes](https://www.linkedin.com/in/jonastadeufernandes/?locale=en_US)
* Levi Passos Silveira Marques
* [Ranna Leslie](https://www.linkedin.com/in/rannaleslie/)
* Raphael da Silva
* [Raphael Dinelli Neto](https://www.linkedin.com/in/raphael-dinelli-8a01b278/)

### 👩‍🏫 Professores

* **Tutor:** [Leonardo Ruiz Orbana](https://www.linkedin.com/company/inova-fusca)
* **Coordenador:** [André Godoi Chiovato](https://www.linkedin.com/company/inova-fusca)

---

## 📜 Descrição

Este projeto foi desenvolvido como parte do desafio proposto pela empresa **Hermes Reply**, em parceria com a FIAP. A proposta visa aplicar técnicas de **Machine Learning** e **IoT** para prever falhas e estimar a vida útil de componentes mecânicos utilizados em ambientes industriais.

Nosso objetivo é permitir **manutenção preditiva**, minimizando o tempo de máquina parada e reduzindo custos operacionais.

---

## 🎯 Objetivo do Sistema

Estimar a vida útil de peças e componentes com base em:

* Tempo de uso (em horas)
* Número de ciclos de operação (liga/desliga)
* Registro de temperatura durante o funcionamento
* Dados de vibração (opcional)
* Histórico de falhas anteriores

Esses dados serão processados por modelos de Machine Learning que irão prever o risco de falha iminente e gerar alertas automatizados.

---

## 🧬 Tecnologias Utilizadas

| Camada            | Tecnologia                   | Justificativa                                      |
| ----------------- | ---------------------------- | -------------------------------------------------- |
| **Sensoriamento** | ESP32                        | Microcontrolador com suporte Wi-Fi, ideal para IoT |
| **Sensoriamento** | DHT22                        | Sensor confiável para temperatura e umidade        |
| **Simulação**     | [Wokwi](https://wokwi.com/)  | Simulação de sensores e circuitos online           |
| **Visualização**  | Python / Pandas / Matplotlib | Geração de gráficos com base nos dados do sensor   |

Nesta etapa, implementamos um circuito utilizando um sensor DHT22 conectado a um ESP32 para colher dados de temperatura e umidade a cada 2 segundos. Acreditamos que isso pode trazer insights valiosos sobre como as condições ambientais afetam a durabilidade das peças industriais.

![Circuito esp32-DHT22](https://github.com/user-attachments/assets/167a5efb-539b-4c0f-b534-3445e3a7141a)

---

### 🧠 Por que escolhemos o ESP32?

* Wi-Fi e Bluetooth integrados, facilitando futuras integrações com nuvem
* Suporte a múltiplos sensores simultâneos via GPIOs
* Compatível com plataformas como Wokwi
* Baixo consumo de energia
* Boa documentação e comunidade ativa

---

### 🌡️ Por que escolhemos o sensor DHT22?

* Mede temperatura (-40 a 80ºC) e umidade (0 a 100%)
* Alta precisão em relação ao DHT11
* Usa apenas um pino digital
* Suporte nativo na Wokwi

---

## 🔜 Resultados da Simulação

### 🖥️ Leituras no Monitor Serial

A simulação mostra as leituras geradas pelo sensor:

![serial\_monitor](https://github.com/user-attachments/assets/ef790a3c-2c5b-4773-83b1-63a07bbf1ec1)

Dados em CSV: `src/data/dados_sensor.csv`

---

### 📊 Gráfico gerado com Python

Passos para executar:

```bash
cd src/charts
pip install matplotlib
python charts.py
```

![image](https://github.com/user-attachments/assets/28053cdd-539c-42a2-9285-f76055014c9d)

---

## 💻 Código do Projeto

* Código do ESP32: `src/core/main.ino`
* Script de análise: `src/charts/charts.py`

---

## 👥 Equipe

| Integrante      | Função                                  |
| --------------- | --------------------------------------- |
| Jonas           | Modelagem de dados e banco relacional   |
| Ranna           | Simulação de sensores e coleta de dados |
| Raphael Silva   | Modelagem de IA e predição de falhas    |
| Raphael Dinelli | Desenvolvimento de backend e frontend   |
| Levi            | Desenvolvimento de backend e frontend   |

---

## 📌 Observações

* Repositório público compartilhado com os tutores
* Dados utilizados nesta fase são simulados
* O README contém prints, códigos, análise e justificativas técnicas

---

## 🗃️ Entregáveis Atendidos

* [x] Circuito funcional com ESP32 e sensor
* [x] Leitura dos dados via Monitor Serial
* [x] Registro em CSV e geração de gráfico
* [x] Prints e imagens da simulação
* [x] Código comentado
* [x] Documentação no GitHub com README completo

---

## 📂 Histórico de Versões

* **0.1.0** - 13/06/2025 - Entrega da fase 2

---

## 📋 Licença

<img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/cc.svg?ref=chooser-v1"><img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/by.svg?ref=chooser-v1">

<p xmlns:cc="http://creativecommons.org/ns#" xmlns:dct="http://purl.org/dc/terms/">
<a property="dct:title" rel="cc:attributionURL" href="https://github.com/agodoi/template">MODELO GIT FIAP</a> por <a rel="cc:attributionURL dct:creator" property="cc:attributionName" href="https://fiap.com.br">Fiap</a> está licenciado sob <a href="http://creativecommons.org/licenses/by/4.0/?ref=chooser-v1" target="_blank" rel="license noopener noreferrer" style="display:inline-block;">Attribution 4.0 International</a>.
</p>
