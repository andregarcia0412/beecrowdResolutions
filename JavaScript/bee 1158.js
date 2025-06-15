var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split("\n")

var n = Number(lines.shift())

for(var i = 0; i < n; i++){
    var [x,y] = lines[i].split(" ").map(Number)
    var somaImpares = 0

    for(var j = 0; j < y; j++){
        if(x % 2 == 0){
            x++
        }
        if(x % 2 != 0){
            somaImpares += x
        }
        x += 2
    }
    console.log(somaImpares)
}
