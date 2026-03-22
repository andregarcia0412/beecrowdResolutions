a,b,c,d = gets.split(" ").map { |n| n.to_i }

if b > c && d > a && c + d > a + b && c > 0 && b > 0 && a % 2 == 0
  puts "Valores aceitos"
else
  puts "Valores nao aceitos"
end

