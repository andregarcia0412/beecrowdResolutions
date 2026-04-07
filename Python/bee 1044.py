a, b = map(int, input().split(" "))

if b < a:
    a,b = b,a

if b % a == 0:
    print("Sao Multiplos")
else :
    print("Nao sao Multiplos")