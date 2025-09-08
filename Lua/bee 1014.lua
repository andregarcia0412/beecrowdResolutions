local distancia = tonumber(io.read("*n"))
local combustivel = tonumber(io.read("*n"))

print(string.format("%.3f km/l", (distancia/combustivel)))
