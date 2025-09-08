local x1 = tonumber(io.read("*n"))
local y1 = tonumber(io.read("*n"))
local x2 = tonumber(io.read("*n"))
local y2 = tonumber(io.read("*n"))

print(string.format("%.4f", (math.sqrt((x2 - x1)^2 + (y2-y1)^2))))
