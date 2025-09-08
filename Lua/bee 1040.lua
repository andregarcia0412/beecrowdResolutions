local n1 = tonumber(io.read("*n")) * 2
local n2 = tonumber(io.read("*n")) * 3
local n3 = tonumber(io.read("*n")) * 4
local n4 = tonumber(io.read("*n"))

local media = (n1 + n2 + n3 + n4)/10
print(string.format("Media: %.1f", media))
if media >= 7 then
    print("Aluno aprovado.")
elseif media < 5 then
    print("Aluno reprovado.")
else
    local n5 = tonumber(io.read("*n"))
    print("Aluno em exame.")
    print("Nota do exame: " .. n5)
    local mediaFinal = (n5 + media)/2
    if mediaFinal >= 5 then
        print("Aluno aprovado.")
    else 
        print("Aluno reprovado.")
    end
    print(string.format("Media final: %.1f", mediaFinal))
end
