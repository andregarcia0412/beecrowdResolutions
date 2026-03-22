def bubble_sort(arr)

  for i in 0..arr.length-2
    for j in 0..arr.length-2
      if arr[j] > arr[j+1]
        arr[j], arr[j+1] = arr[j+1], arr[j]
      end
    end
  end
  
  return arr
end

valores = gets.split(" ").map{ |n| n.to_i }

valores_desordenados = valores.dup
valores_ordenados = bubble_sort(valores)

for valor in valores_ordenados
  puts valor
end

puts

for valor in valores_desordenados
  puts valor
end