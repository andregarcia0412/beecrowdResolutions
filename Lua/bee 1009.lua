local nome = io.read()
local salario = tonumber(io.read("*n"))
local montante = tonumber(io.read("*n"))

print(string.format("TOTAL = R$ %.2f", (salario + montante*0.15)))
