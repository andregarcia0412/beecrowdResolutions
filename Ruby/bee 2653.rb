require 'set'

joias = Set.new

while linha = gets&.chomp
  joias << linha
end

puts joias.length