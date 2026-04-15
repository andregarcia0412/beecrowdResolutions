salario = float(input())

imposto = 0

if salario >= 0 and salario <= 2000 :
    print("Isento")
elif salario > 2000 and salario <= 3000:
    imposto = (salario - 2000) * 0.08
elif salario > 3000 and salario <= 4500:
    imposto = 1000 * 0.08 + (salario - 3000) * 0.18
elif salario > 4500:
    imposto = 1000 * 0.08 + 1500 * 0.18 + (salario - 4500) * 0.28

if salario > 2000:
    print(f"R$ {imposto:.2f}")