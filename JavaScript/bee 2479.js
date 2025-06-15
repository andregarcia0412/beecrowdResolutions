var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

function bubbleSort(arr){
    for(var i = 0; i < arr.length; i++){
        for(var j = 0; j < arr.length; j++){
            if(arr[j] > arr[j + 1]){
                var temp = arr[j]
                arr[j] = arr[j + 1]
                arr[j + 1] = temp
            }
        }
    }
    return arr
}
var comportado = 0
var naocomportado = 0

var n = Number(lines.shift())
var nomes = []
for(var i = 0; i < n; i++){
    var [comportamento, nome] = lines[i].trim().split(" ")
    nomes.push(nome)
    if (comportamento == "+"){
        comportado++
    } else{
        naocomportado++
    }
    
}
console.log(bubbleSort(nomes).join("\n"))
console.log(`Se comportaram: ${comportado} | Nao se comportaram: ${naocomportado}`)
