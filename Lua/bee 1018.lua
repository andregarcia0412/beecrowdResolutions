local valor = tonumber(io.read("*n"))

local notas100 = math.floor(valor/100)
local resto = valor % 100
local notas50 = math.floor(resto/50)
resto = resto % 50
local notas20 = math.floor(resto/20)
resto = resto % 20
local notas10 = math.floor(resto/10)
resto = resto % 10
local notas5 = math.floor(resto/5)
resto = resto % 5
local notas2 = math.floor(resto/2)
resto = resto % 2
local notas1 = resto

print(valor)
print(notas100 .. " nota(s) de R$ 100,00\n" .. notas50 .. " nota(s) de R$ 50,00\n" .. notas20 .. " nota(s) de R$ 20,00\n" .. notas10 .. " nota(s) de R$ 10,00\n" .. notas5 .. " nota(s) de R$ 5,00\n" .. notas2 .. " nota(s) de R$ 2,00\n" .. notas1 .. " nota(s) de R$ 1,00")
