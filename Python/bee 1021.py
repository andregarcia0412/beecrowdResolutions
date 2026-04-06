import math

n = float(input()) * 100

notas_100 = math.floor(n / 10000)
resto = n % 10000

notas_50 = math.floor(resto / 5000)
resto %= 5000

notas_20 = math.floor(resto / 2000)
resto %= 2000

notas_10 = math.floor(resto / 1000)
resto %= 1000

notas_5 = math.floor(resto / 500)
resto %= 500

notas_2 = math.floor(resto / 200)
resto %= 200

moedas_1 = math.floor(resto / 100)
resto %= 100

moedas_05 = math.floor(resto / 50)
resto %= 50

moedas_025 = math.floor(resto / 25)
resto %= 25

moedas_010 = math.floor(resto/10)
resto %= 10

moedas_005 = math.floor(resto/5)
resto %= 5

moedas_001 = math.floor(resto)

print("NOTAS:")
print(f"{notas_100} nota(s) de R$ 100.00")
print(f"{notas_50} nota(s) de R$ 50.00")
print(f"{notas_20} nota(s) de R$ 20.00")
print(f"{notas_10} nota(s) de R$ 10.00")
print(f"{notas_5} nota(s) de R$ 5.00")
print(f"{notas_2} nota(s) de R$ 2.00")

print("MOEDAS:")
print(f"{moedas_1} moeda(s) de R$ 1.00")
print(f"{moedas_05} moeda(s) de R$ 0.50")
print(f"{moedas_025} moeda(s) de R$ 0.25")
print(f"{moedas_010} moeda(s) de R$ 0.10")
print(f"{moedas_005} moeda(s) de R$ 0.05")
print(f"{moedas_001} moeda(s) de R$ 0.01")
