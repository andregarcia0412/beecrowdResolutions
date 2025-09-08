local n = tonumber(io.read("*n"))

local horas = math.floor(n/3600)
local resto = n % 3600
local minutos = math.floor(resto/60)
resto = resto % 60
local segundos = resto

print(string.format("%d:%d:%d", horas, minutos, segundos))
