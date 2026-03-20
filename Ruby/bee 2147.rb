n = gets.to_i

for i in 0..n-1
    palavra = gets.chomp
    puts format("%.2f\n", palavra.length/100.0)
end
