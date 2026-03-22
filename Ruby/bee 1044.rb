a,b = gets.split(" ").map { |n| n.to_i }

if b < a
  b,a = a,b
end

puts b % a == 0 ? "Sao Multiplos" : "Nao sao Multiplos"