local a = tonumber(io.read("*n"))
local b = tonumber(io.read("*n"))
local c = tonumber(io.read("*n"))

print(string.format("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f", ((a * c)/2), (3.14159 * c^2), ((a + b) * c / 2), (b^2), (a*b)))
