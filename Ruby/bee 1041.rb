x, y = gets.split(" ").map{ |n| n.to_f }

if x > 0 && y > 0
  puts "Q1"
elsif x < 0 && y > 0
  puts "Q2"
elsif x < 0 && y < 0
  puts "Q3"
elsif x > 0 && y < 0
  puts "Q4"
elsif x == 0 && y != 0
  puts "Eixo Y"
elsif x != 0 && y == 0
  puts "Eixo X"
else
  puts "Origem"
end