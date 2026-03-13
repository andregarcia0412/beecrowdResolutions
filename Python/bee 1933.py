def maior(a,b):
    if a > b:
        return a

    return b


valores = input().split(" ")
a = int(valores[0])
b = int(valores[1])

print(maior(a,b))
