times = gets.split(" ")

pa_H, pa_M = times[0].split(":").map(&:to_i)
cb_H, cb_M = times[1].split(":").map(&:to_i)
pb_H, pb_M = times[2].split(":").map(&:to_i)
ca_H, ca_M = times[3].split(":").map(&:to_i)

pa = pa_H*60 + pa_M
cb = cb_H*60 + cb_M
pb = pb_H*60 + pb_M
ca = ca_H*60 + ca_M

voo_A = (cb - pa + 1440) % 1440
voo_B = (ca - pb + 1440) % 1440

duracao = ((voo_A + voo_B) % 1440) / 2
fuso_minutos = voo_A-duracao

if fuso_minutos <= -750
    fuso_minutos += 1440
elsif fuso_minutos > 750
    fuso_minutos -= 1440
end

puts duracao.to_s + " " + (fuso_minutos/60).to_s
