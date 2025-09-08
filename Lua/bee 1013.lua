local a = tonumber(io.read("*n"))
local b = tonumber(io.read("*n"))
local c = tonumber(io.read("*n"))

local maiorAB = (a+b + math.abs(a-b))/2
local maiorABC = (c + maiorAB + math.abs(c-maiorAB))/2
print(string.format("%d eh o maior", maiorABC))
