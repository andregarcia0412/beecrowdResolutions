var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

while(lines.length){
    let [numHab, numConsultas] = lines.shift().split(" ").map(Number)
    let arrNotas = []
    let arrPosicao = []
    
    for(let i = 0; i < numHab; i++){
        arrNotas.push(Number(lines.shift()))
    }
    
    for(let i = 0; i < numConsultas; i++){
        arrPosicao.push(Number(lines.shift()))
    }
    
    arrNotas.sort((a,b) => b - a)
    
    for(let i = 0; i < arrPosicao.length; i++){
        console.log(arrNotas[arrPosicao[i] - 1])
    }
}
