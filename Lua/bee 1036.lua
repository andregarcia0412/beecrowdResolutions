local a = tonumber(io.read("*n"))
local b = tonumber(io.read("*n"))
local c = tonumber(io.read("*n"))
local delta = b^2 - (4 * a * c)

if a ~= 0 and delta >= 0 then
    local R1 = (-b + math.sqrt(delta))/(2*a)
    local R2 = (-b - math.sqrt(delta))/(2*a)
    print(string.format("R1 = %.5f\nR2 = %.5f", R1, R2))
else
    print("Impossivel calcular")
end
