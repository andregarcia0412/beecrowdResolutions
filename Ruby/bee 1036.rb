a,b,c = gets.split(" ").map { |n| n.to_f }

delta = b ** 2 - (4 * a * c)

if(delta < 0 || a == 0) 
  puts "Impossivel calcular"
else
  r1 = (-b + Math.sqrt(delta)) / (2 * a)
  r2 = (-b - Math.sqrt(delta)) / (2 * a)

  puts sprintf("R1 = %.5f", r1)
  puts sprintf("R2 = %.5f", r2)
end