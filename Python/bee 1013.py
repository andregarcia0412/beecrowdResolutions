[a, b, c] = map(int, input("").split(" "))

maiorAB = (a+b + abs(a-b))/2
maiorABC = (c+maiorAB + abs(c-maiorAB))/2
print(f"{int(maiorABC)} eh o maior")
