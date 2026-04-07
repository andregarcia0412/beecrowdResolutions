def bubble_sort(arr: list[int]) -> list[int]:
    for i in range (len(arr) - 1):
        for j in range (len(arr) - 1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j] 
    return arr

valores = list(map(int, input().split(" ")))

valores_desordenados = valores
valores_ordenados = bubble_sort(valores)

for i in valores_ordenados:
    print(i)

print()

for i in valores_desordenados:
    print(i)