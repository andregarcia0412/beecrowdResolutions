t = gets.to_i

h = t/3600
resto = t % 3600

m = resto/60
resto = resto % 60

s = resto

puts "#{h}:#{m}:#{s}"