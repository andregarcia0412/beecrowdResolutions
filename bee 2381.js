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

var [n,k] = lines.shift().split(" ").map(Number)
var nomes = []
for(var i = 0; i < n; i++){
    var nome = lines[i].trim()
    nomes.push(nome)
    
}
console.log(bubbleSort(nomes)[k - 1])
