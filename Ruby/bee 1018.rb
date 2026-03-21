valor = gets.to_i

notas100 = valor/100
resto = valor % 100

notas50 = resto/50
resto = resto % 50

notas20 = resto/20
resto = resto % 20

notas10 = resto/10
resto = resto % 10

notas5 = resto/5
resto = resto % 5

notas2 = resto/2
resto = resto % 2

notas1 = resto

puts valor
puts "#{notas100} nota(s) de R$ 100,00"
puts "#{notas50} nota(s) de R$ 50,00"
puts "#{notas20} nota(s) de R$ 20,00"
puts "#{notas10} nota(s) de R$ 10,00"
puts "#{notas5} nota(s) de R$ 5,00"
puts "#{notas2} nota(s) de R$ 2,00"
puts "#{notas1} nota(s) de R$ 1,00"

