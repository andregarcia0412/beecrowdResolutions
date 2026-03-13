times = input().split(" ")

pa_H, pa_M = map(int, times[0].split(":"))
cb_H, cb_M = map(int, times[1].split(":"))
pb_H, pb_M = map(int, times[2].split(":"))
ca_H, ca_M = map(int, times[3].split(":"))

pa = pa_H*60 + pa_M
cb = cb_H*60 + cb_M
pb = pb_H*60 + pb_M
ca = ca_H*60 + ca_M

voo_A = (cb - pa + 1440) % 1440
voo_B = (ca - pb + 1440) % 1440

duracao = int(((voo_A + voo_B) % 1440) / 2)
fuso_minutos = voo_A-duracao

if fuso_minutos <= -750:
    fuso_minutos += 1440
elif fuso_minutos > 750:
    fuso_minutos -= 1440

print(str(duracao) + " " + str(int(fuso_minutos/60)))
