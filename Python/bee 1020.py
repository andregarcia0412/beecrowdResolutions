import math

n = int(input())

anos = math.floor(n/365)
resto = n % 365

meses = math.floor(resto/30)
resto %= 30

dias = resto

print(f"{anos} ano(s)\n{meses} mes(es)\n{dias} dia(s)")
