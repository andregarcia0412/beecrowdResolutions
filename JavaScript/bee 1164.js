var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split("\n")

var n = Number(lines.shift())

for(var i = 0; i < n; i++){
    let x = Number(lines[i])
    let somaDivisores = 0

    for(var j = 1; j < x; j++){
        if(x % j == 0){
            somaDivisores += j
        }
    }

    if(somaDivisores == x){
        console.log(`${x} eh perfeito`)
    } else{
        console.log(`${x} nao eh perfeito`)
    }
}
