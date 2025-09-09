local x = tonumber(io.read("*n"))
local y = tonumber(io.read("*n"))

if x == 0  and y == 0 then
    print("Origem")
elseif x ~= 0 and y == 0 then
    print("Eixo X")
elseif x == 0 and y ~= 0 then
    print("Eixo Y")
elseif x > 0 and y > 0 then
    print("Q1")
elseif x < 0 and y > 0 then
    print("Q2")
elseif x < 0 and y < 0 then
    print("Q3") 
elseif x > 0 and y < 0 then
    print("Q4")    
end
