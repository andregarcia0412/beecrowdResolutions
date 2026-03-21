while True:
    try:
        n = int(input())

        velocidades = list(map(int, input().split(" ")))
        maior = max(velocidades)
            

        if maior < 10:
            print(1)
        elif maior < 20:
            print(2)
        elif maior >= 20:
            print(3)
            
    except EOFError:
        break
