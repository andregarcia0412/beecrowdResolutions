import math

n = int(input())

horas = math.floor(n / 3600)
resto = n % 3600

minutos = math.floor(resto / 60)
resto %= 60

segundos = resto

print(f"{horas}:{minutos}:{segundos}")
