values = gets.split(" ")
a = values[0].to_f
b = values[1].to_f
c = values[2].to_f

puts "TRIANGULO: %.3f" % ((a * c) / 2)
puts "CIRCULO: %.3f" % (3.14159 * c ** 2)
puts "TRAPEZIO: %.3f" % ((a + b) * c / 2)
puts "QUADRADO: %.3f" % (b ** 2)
puts "RETANGULO: %.3f" % (a*b)
