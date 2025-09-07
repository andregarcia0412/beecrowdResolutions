local num = tonumber(io.read("*n"))
local horas_trabalhadas = tonumber(io.read("*n"))
local valor_hora = tonumber(io.read("*n"))
print(string.format("NUMBER = %d\nSALARY = U$ %.2f", num, horas_trabalhadas*valor_hora))
