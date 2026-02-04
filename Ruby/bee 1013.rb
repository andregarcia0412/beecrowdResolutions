valores = gets.split(" ")
a = valores[0].to_i
b = valores[1].to_i
c = valores[2].to_i

maiorAB = ((a+b+(a-b).abs))/2
maiorABC = ((maiorAB+c+(maiorAB-c).abs))/2

puts "#{maiorABC} eh o maior"
