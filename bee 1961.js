var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split(/\s+/)

var alturaPulo = Number(lines.shift())
var totalCanos = Number(lines.shift())
var perdeu = false

for (var i = 0; i < totalCanos - 1; i++){
    var alturaCano1 = Number(lines[i])
    var alturaCano2 = Number(lines[i + 1])

    if(Math.abs(alturaCano1 - alturaCano2) > alturaPulo){
        perdeu = true
        break;
    }

}

if(perdeu){
    console.log("GAME OVER")
}
else{
    console.log("YOU WIN")
}



