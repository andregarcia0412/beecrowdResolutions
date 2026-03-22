n1, n2, n3, n4 = gets.split(" ").map { |n| n.to_f }

media = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / 10

puts sprintf("Media: %.1f", media)

if media >= 7
  puts "Aluno aprovado."
elsif media < 5
  puts "Aluno reprovado."
else  
  puts "Aluno em exame."
  n5 = gets.to_f
  puts sprintf("Nota do exame: %.1f", n5)
  media_final = (media+n5) / 2
  puts media_final > 5 ? "Aluno aprovado." : "Aluno reprovado."
  puts sprintf("Media final: %.1f", media_final)
end