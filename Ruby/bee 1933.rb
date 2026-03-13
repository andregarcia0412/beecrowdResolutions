def maior(a, b) 
    if a > b
        return a
    end

    return b
end

valores = gets.split(" ")
a = valores[0].to_i
b = valores[1].to_i

puts maior(a,b)
