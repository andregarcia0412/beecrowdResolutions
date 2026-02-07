x1, y1 = gets.split(" ").map{|x|  x.to_f}
x2, y2 = gets.split(" ").map {|x| x.to_f}

puts "%.4f" % Math.sqrt((x2 - x1) ** 2 + (y2 - y1) ** 2)
