local cod = tonumber(io.read("*n"))
local qtd = tonumber(io.read("*n"))
local preco = 0

if cod == 1 then
    preco = 4.0
elseif cod == 2 then
    preco = 4.5
elseif cod == 3 then
    preco = 5
elseif cod == 4 then
    preco = 2
elseif cod == 5 then
    preco = 1.5
end

print(string.format("Total: R$ %.2f", preco*qtd))
