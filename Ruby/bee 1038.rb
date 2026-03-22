codigo, qtd = gets.split(" ").map { |n| n.to_i }

total = case codigo
  when 1 then 4.0 * qtd
  when 2 then 4.5 * qtd
  when 3 then 5.0 * qtd
  when 4 then 2.0 * qtd
  when 5 then 1.5 * qtd
end

puts sprintf("Total: R$ %.2f", total)