var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split(/\s+/);

function valorGolpe (ataque,defesa){
    return (ataque + defesa) / 2
}

var T = Number(lines.shift())

for(var i = 0; i < T; i++){
    var bonus = Number(lines.shift())
    var atkDab = Number(lines.shift())
    var defDab = Number(lines.shift())
    var lvlDab = Number(lines.shift())

    var atkGua = Number(lines.shift())
    var defGua = Number(lines.shift())
    var lvlGua = Number(lines.shift())

    var totalDab = valorGolpe(atkDab,defDab)
    var totalGua = valorGolpe(atkGua, defGua)

    if (lvlDab % 2 == 0){
        totalDab += bonus
    }
    if (lvlGua % 2 == 0){
        totalGua += bonus
    }

    if(totalDab > totalGua){
        console.log("Dabriel")
    }
    if (totalGua > totalDab){
        console.log("Guarte")
    }
    if (totalDab == totalGua){
        console.log("Empate")
    }
}
