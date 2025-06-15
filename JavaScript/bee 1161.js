var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split(/\s+/)

function calcularFatorial(n){
    var soma = 1n //precisa começar em bigint
    for(var i = 1n; i <= n ; i++){
        soma *= i        
    }
    return soma
}

var tamanho = (Number(lines.length) / 2) - 1
for(var i = 0; i < tamanho; i++){
    var m = BigInt(lines.shift())
    var n = BigInt(lines.shift())

    var resultado = calcularFatorial(m) + calcularFatorial(n)
    console.log(String(resultado))
}
