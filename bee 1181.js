var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

function gerarMatriz(linha,coluna){
    var m = []
    for(var i = 0; i < linha; i++){
        m[i] = []
        for(var j = 0; j < coluna; j++){
            m[i][j] = Number(lines.shift());
        }
    }
    return m
}
var L = Number(lines.shift())
var Op = Number(lines.shift())

var matriz = gerarMatriz(12,12)


if(Op == "s"){
    var soma = 0
    for(var i = 0; i < 12; i++){
        soma += matriz[L][i]
    }
    console.log(soma.toFixed(1))
} else{
    var soma = 0
    for(var i = 0; i < 12; i++){
        soma += matriz[L][i]
        var media = soma/12
    }
    console.log(media.toFixed(1))
}