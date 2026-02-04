name = gets
fix = gets.to_f
total_sales = gets.to_f

puts "TOTAL = R$ %.2f" % (fix + total_sales * 0.15)
