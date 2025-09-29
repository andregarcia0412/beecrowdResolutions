local n = tonumber(io.read("*n"))
local sum = 1

for i = 1, n, 1 do
    sum = sum * i
end

print(sum)
