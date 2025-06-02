var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split("\n")

function gerarMatriz(linha,coluna){
    let m = []
    for(let i = 0; i < linha; i++){
        m[i] = []
        for(let j = 0; j < coluna; j++){
            m[i][j] = Number(lines.shift())
        }
    }
    return m
}

let op = lines.shift()
matriz = gerarMatriz(12,12)
let soma = 0

for(let i = 11; i >= 7; i--){
    for(let j = 1; j < 11; j++){
        if(j < i && j > 11 - i){
            soma += matriz[i][j]
        }
    }
}

if (op == "S"){
    console.log(soma.toFixed(1))
} else if(op == "M"){
    console.log((soma/30).toFixed(1))
}
