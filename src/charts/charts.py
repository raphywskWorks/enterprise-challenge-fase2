import pandas as pd
import matplotlib.pyplot as plt

# Carregar os dados
df = pd.read_csv("data/dados_sensor.csv")

# Criar gráfico de linha
plt.plot(df["tempo"], df["temperatura"], label="Temperatura (°C)")
plt.plot(df["tempo"], df["umidade"], label="Umidade (%)")

plt.xlabel("Tempo (s)")
plt.ylabel("Leitura")
plt.title("Leituras simuladas do DHT22")
plt.legend()
plt.grid()
plt.show()
