n = gets.to_f

if n >= 0 && n <= 25
  puts "Intervalo [0,25]"
elsif n > 25 && n <= 50
  puts "Intervalo (25,50]"
elsif n > 50 && n <= 75
  puts "Intervalo (50,75]"
elsif n > 75 && n <= 100
  puts "Intervalo (75,100]"
else
  puts "Fora de intervalo"
end