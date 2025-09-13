local a = tonumber(io.read("*n"))
local b = tonumber(io.read("*n"))
local c = tonumber(io.read("*n"))

if a < b + c and b < a + c and c < b + a then
    print(string.format("Perimetro = %.1f", (a+b+c)))
else
    print(string.format("Area = %.1f",((a+b)*c)/2))
end
