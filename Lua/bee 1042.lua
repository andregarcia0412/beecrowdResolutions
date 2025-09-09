function bubbleSort(arr)
    for i=1,#arr-1 do
        for j=1,#arr-1 do
            if arr[j] > arr[j+1] then
                local aux = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = aux
            end
        end
    end
    return arr
end

local a = tonumber(io.read("*n"))
local b = tonumber(io.read("*n"))
local c = tonumber(io.read("*n"))

local arr = {a,b,c}
local arr_ordered = bubbleSort(arr)

print(string.format("%d\n%d\n%d\n", arr_ordered[1], arr_ordered[2], arr_ordered[3]))
print(string.format("%d\n%d\n%d", a, b, c))
