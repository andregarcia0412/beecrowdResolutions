def bubble_sort(arr)
  for i in 0..arr.length-2
    for j in 0..arr.length-2
      if arr[j] < arr[j+1]
        arr[j], arr[j+1] = arr[j+1], arr[j]
      end
    end
  end

  return arr
end

lados = gets.split(" ").map { |n| n.to_f }

bubble_sort(lados)

a,b,c = lados

forma_triangulo = true

if a >= b + c
  puts "NAO FORMA TRIANGULO"
  forma_triangulo = false
elsif a ** 2 == b ** 2 + c ** 2
  puts "TRIANGULO RETANGULO"
elsif a ** 2 > b ** 2 + c ** 2
  puts "TRIANGULO OBTUSANGULO"
elsif a ** 2 < b ** 2 + c ** 2
  puts "TRIANGULO ACUTANGULO"
end

if forma_triangulo
  contador = 0
  if a == b
    contador += 1
  end

  if a == c
    contador += 1
  end

  if b == c
    contador += 1
  end

  if contador == 3
    puts "TRIANGULO EQUILATERO"
  elsif contador == 1
    puts "TRIANGULO ISOSCELES"
  end
end