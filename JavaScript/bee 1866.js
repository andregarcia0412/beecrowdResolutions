var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

let c = Number(lines.shift())

for(let i = 0; i < c; i++){
    let soma = 0
    let contador = Number(lines.shift())
    let n = 1
    for(let j = 0; j < contador; j++){
        soma += n
        n *= -1 
    }
    console.log(soma)
}
