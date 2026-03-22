total = gets.to_i

anos = total / 365
resto = total % 365

meses = resto / 30
resto = resto % 30

dias = resto

puts "#{anos} ano(s)"
puts "#{meses} mes(es)"
puts "#{dias} dia(s)"