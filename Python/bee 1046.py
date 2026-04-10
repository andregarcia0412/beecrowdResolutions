import math

horaInicial, minutoInicial, horaFinal, minutoFinal = map(int, input().split(" "))

inicio = 60 * horaInicial + minutoInicial
fim = 60 * horaFinal + minutoFinal

duracao = fim - inicio

if duracao <= 0:
    duracao += 1440

horas = math.floor(duracao/60)
minutos = duracao % 60 

print(f"O JOGO DUROU {horas} HORA(S) E {minutos} MINUTO(S)")