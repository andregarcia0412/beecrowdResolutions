import math

valor = int(input(""))

notas100 = math.floor(valor/100)
resto = valor % 100
notas50 = math.floor(resto/50)
resto %= 50
notas20 = math.floor(resto/20)
resto %= 20
notas10 = math.floor(resto/10)
resto %= 10
notas5 = math.floor(resto/5)
resto %= 5
notas2 = math.floor(resto/2)
resto %= 2
notas1 = resto

print(valor)
print(f"{notas100} nota(s) de R$ 100,00\n{notas50} nota(s) de R$ 50,00\n{notas20} nota(s) de R$ 20,00\n{notas10} nota(s) de R$ 10,00\n{notas5} nota(s) de R$ 5,00\n{notas2} nota(s) de R$ 2,00\n{notas1} nota(s) de R$ 1,00")
