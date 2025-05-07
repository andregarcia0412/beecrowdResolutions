var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split("\n");

var n = Number(lines.shift())

for(var i = 0; i < n; i++){
    var somaMedia = 0
    var totalAlunos = 0
    var valores = lines[i].split(" ").map(Number)
    var contador = valores.shift()

    for(var j = 0; j < contador; j++){
        somaMedia += valores[j]
    }
    for(var h = 0; h < contador; h++){
        var media = somaMedia / valores.length
        if(valores[h] > media){
            totalAlunos++
        }
    }
    mediaAlunos = ((totalAlunos / contador) * 100).toFixed(3)
    console.log(mediaAlunos + "%")
}   