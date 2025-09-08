local tempo = tonumber(io.read("*n"))
local vel_media = tonumber(io.read("*n"))

print(string.format("%.3f",vel_media * tempo/12))
