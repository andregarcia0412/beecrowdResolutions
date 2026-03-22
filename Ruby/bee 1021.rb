valor = gets.to_f * 100

notas100 = (valor / 10000).floor
resto = valor % 10000

notas50 = (resto / 5000).floor
resto = resto % 5000

notas20 =( resto / 2000).floor
resto = resto % 2000

notas10 = (resto / 1000).floor
resto = resto % 1000

notas5 = (resto / 500).floor
resto = resto % 500

notas2 = (resto / 200).floor
resto = resto % 200

moedas1 = (resto / 100).floor
resto = resto % 100

moedas50 = (resto / 50).floor
resto = resto % 50

moedas25 = (resto / 25).floor
resto = resto % 25

moedas10 = (resto / 10).floor
resto = resto % 10

moedas05 = (resto / 5).floor
resto = resto % 5

moedas01 = resto.floor

puts 'NOTAS:'
puts "#{notas100} nota(s) de R$ 100.00"
puts "#{notas50} nota(s) de R$ 50.00"
puts "#{notas20} nota(s) de R$ 20.00"
puts "#{notas10} nota(s) de R$ 10.00"
puts "#{notas5} nota(s) de R$ 5.00"
puts "#{notas2} nota(s) de R$ 2.00"
puts 'MOEDAS:'
puts "#{moedas1} moeda(s) de R$ 1.00"
puts "#{moedas50} moeda(s) de R$ 0.50"
puts "#{moedas25} moeda(s) de R$ 0.25"
puts "#{moedas10} moeda(s) de R$ 0.10"
puts "#{moedas05} moeda(s) de R$ 0.05"
puts "#{moedas01} moeda(s) de R$ 0.01"

