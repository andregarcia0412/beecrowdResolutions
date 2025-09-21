function bubbleSort(arr)
    for i = 1, #arr-1, 1 do
        for j = 1, #arr-1, 1 do
            if arr[j] < arr[j+1] then
                local aux = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = aux
            end
        end
    end
end

local arr = {tonumber(io.read("*n")),tonumber(io.read("*n")),tonumber(io.read("*n"))}
bubbleSort(arr)
local a = arr[1]
local b = arr[2]
local c = arr[3]

if a >= b + c then
    print("NAO FORMA TRIANGULO")
elseif a^2 == b^2 + c^2 then
    print("TRIANGULO RETANGULO")
elseif a^2 > b^2 + c^2 then
    print("TRIANGULO OBTUSANGULO")
elseif a^2 < b^2 + c^2 then
    print("TRIANGULO ACUTANGULO")
end

local contador = 0

if a == b then
    contador = contador + 1
end

if a == c then
    contador = contador + 1
end

if b == c then
    contador = contador + 1
end

if contador == 3 then
    print("TRIANGULO EQUILATERO")
elseif contador == 1 then
    print("TRIANGULO ISOSCELES")
end
