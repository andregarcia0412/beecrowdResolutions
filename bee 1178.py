#essa questão precisou ser em python, pois o javascript não teve precisão de ponto flutuante o suficiente para armazenar os valores dessa questão
x = float(input())
arr = []
for i in range(100):
    arr.append(x)
    print(f"N[{i}] = {x:.4f}")
    x /= 2

# código em javascript:
# var input = require('fs').readFileSync('stdin', 'utf8');
# var lines = input.split("\n")

# let x = Number(input)
# let arr = []
# arr.push(x)
# let n = x
# for(var i = 0; i < 100; i++){
#     console.log(`N[${i}] = ${n.toFixed(4)}`)
#     arr.push(n)
#     n = n / 2
# }
