local a = tonumber(io.read("*n"))
local b = tonumber(io.read("*n"))

if a < b then
    local aux = a
    a = b
    b = aux
end

if a % b == 0 then
    print("Sao Multiplos")
else 
    print("Nao sao Multiplos")
end
