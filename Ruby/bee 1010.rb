PECA1 = gets
PECA2 = gets

qtd1 = PECA1.split(" ")[1].to_i
preco1 = PECA1.split(" ")[2].to_f

qtd2 = PECA2.split(" ")[1].to_i
preco2 = PECA2.split(" ")[2].to_f

puts "VALOR A PAGAR: R$ %.2f" % (qtd1 * preco1 + qtd2 * preco2)
