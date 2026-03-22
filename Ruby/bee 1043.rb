a,b,c = gets.split(" ").map { |n| n.to_f }

if a + b > c && a + c > b && b + c > a
  puts sprintf("Perimetro = %.1f", a+b+c)
else
  puts sprintf("Area = %.1f", ((a+b) * c)/2)
end