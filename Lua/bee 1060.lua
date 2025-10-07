local qtdPositivos = 0
for i = 1, 6, 1 do
    if tonumber(io.read("*n")) > 0 then
        qtdPositivos = qtdPositivos + 1
    end
end
print(qtdPositivos .. " valores positivos")
