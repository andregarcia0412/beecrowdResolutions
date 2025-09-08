local n = tonumber(io.read("*n"))

local anos = math.floor(n/365)
local resto = n % 365
local meses = math.floor(resto/30)
resto = resto % 30
local dias = resto

print(string.format("%d ano(s)\n%d mes(es)\n%d dia(s)", anos, meses, dias))
