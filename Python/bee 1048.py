salario = float(input())

reajuste = 0

if salario >= 0 and salario <= 400:
    reajuste = 0.15
elif salario > 400 and salario <= 800:
    reajuste = 0.12
elif salario > 800 and salario <= 1200:
    reajuste = 0.10
elif salario > 1200 and salario <= 2000:
    reajuste = 0.07
else:
    reajuste = 0.04

print(f"Novo salario: {(salario + reajuste * salario):.2f}\nReajuste ganho: {(salario * reajuste):.2f}\nEm percentual: {(reajuste * 100):.0f} %")