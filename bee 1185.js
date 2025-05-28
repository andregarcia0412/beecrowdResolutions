var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

function gerarMatriz (linha,coluna){
    let m = []
    for(var i = 0; i < linha; i++){
        m[i] = []
        for (var j = 0; j < coluna; j++){
            m[i][j] = Number(lines.shift())
        }
    }
    return m
}
let operacao = lines.shift().trim()
let matriz = gerarMatriz(12,12)
let soma = 0

for(var i = 0; i < 11; i++){
    for(var j = 0; j < 11; j++){
        if(j < 11 - i){
        soma += matriz[i][j]
        }
    }
}
if (operacao.toLowerCase() == "s"){
    console.log(soma.toFixed(1))
} else if (operacao.toLowerCase() == "m"){
    console.log((soma/66).toFixed(1))
}
