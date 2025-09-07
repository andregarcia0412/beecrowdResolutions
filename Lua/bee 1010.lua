local cod1 = tonumber(io.read("*n"))
local num1 = tonumber(io.read("*n"))
local valor1 = tonumber(io.read("*n"))

local cod2 = tonumber(io.read("*n"))
local num2 = tonumber(io.read("*n"))
local valor2 = tonumber(io.read("*n"))

print(string.format("VALOR A PAGAR: R$ %.2f", (num1 * valor1 + num2 * valor2)))

