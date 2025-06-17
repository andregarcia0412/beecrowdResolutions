var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

let [numCasas, numEncomendas] = lines[0].split(" ").map(Number)
let ordemCasas = lines[1].split(" ").map(Number)
let ordemEntregas = lines[2].split(" ").map(Number)

let tempo = 0
let posicaoAtual = 0


for(let i = 0; i < numEncomendas; i++){
    let posicaoEntrega = ordemCasas.indexOf(ordemEntregas[i])
    tempo += Math.abs(posicaoEntrega - posicaoAtual)
    posicaoAtual = posicaoEntrega
}
console.log(tempo)
