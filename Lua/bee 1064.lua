local qtdPositivos = 0
local soma = 0
for i = 1, 6, 1 do
    local n = tonumber(io.read("*n"))
    if n > 0 then
        qtdPositivos = qtdPositivos + 1
        soma = soma + n
    end
end
print(string.format("%d valores positivos\n%.1f", qtdPositivos, soma/qtdPositivos))
