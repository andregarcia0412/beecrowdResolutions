def bubble_sort(arr: list[float]) -> list[float]:
    for i in range(len(arr)-1):
        for j in range(len(arr)-1):
            if arr[j] < arr[j+1]:
                arr[j], arr[j+1] = arr[j+1],arr[j]
    return arr

valores = bubble_sort(list(map(float, input().split(" "))))
a, b, c = valores

if a >= b + c:
    print("NAO FORMA TRIANGULO")
elif a ** 2 == b ** 2 + c ** 2:
    print("TRIANGULO RETANGULO")
elif a ** 2 > b ** 2 + c ** 2:
    print("TRIANGULO OBTUSANGULO")
elif a ** 2 < b ** 2 + c ** 2:
    print("TRIANGULO ACUTANGULO")

contador = 0

if a == b:
    contador += 1
if a == c:
    contador += 1
if b == c:
    contador += 1

if contador == 3:
    print("TRIANGULO EQUILATERO")
if contador == 1:
    print("TRIANGULO ISOSCELES")

