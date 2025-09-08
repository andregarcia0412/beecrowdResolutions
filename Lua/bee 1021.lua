local valor = tonumber(io.read("*n"))
valor = valor * 100

local notas100 = math.floor(valor/10000)
local resto = valor % 10000
local notas50 = math.floor(resto/5000)
resto = resto % 5000
local notas20 = math.floor(resto/2000)
resto = resto % 2000
local notas10 = math.floor(resto/1000)
resto = resto % 1000
local notas5 = math.floor(resto/500)
resto = resto % 500
local notas2 = math.floor(resto/200)
resto = resto % 200

local moedas1 = math.floor(resto/100)
resto = resto % 100
local moedas50 = math.floor(resto/50)
resto = resto % 50
local moedas25 = math.floor(resto/25)
resto = resto % 25
local moedas10 = math.floor(resto/10)
resto = resto % 10
local moedas05 = math.floor(resto/5)
resto = resto % 5
local moedas01 = math.floor(resto)



print("NOTAS:")
print(notas100 .. " nota(s) de R$ 100.00\n" .. notas50 .. " nota(s) de R$ 50.00\n" .. notas20 .. " nota(s) de R$ 20.00\n" .. notas10 .. " nota(s) de R$ 10.00\n" .. notas5 .. " nota(s) de R$ 5.00\n" .. notas2 .. " nota(s) de R$ 2.00")

print("MOEDAS:")
print(moedas1 .. " moeda(s) de R$ 1.00\n" .. moedas50 .. " moeda(s) de R$ 0.50\n" .. moedas25 .. " moeda(s) de R$ 0.25\n" .. moedas10 .. " moeda(s) de R$ 0.10\n" .. moedas05 .." moeda(s) de R$ 0.05\n" .. moedas01 .. " moeda(s) de R$ 0.01")
