var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var vetorImpar = []
var vetorPar = []

for(var i = 0; i < 15; i++){
    var num = lines[i]

    if(num % 2 == 0){
        push(vetorPar, num)
    } else if(num % 2 != 0){
        push(vetorImpar, num)
    }

    if(vetorPar.length == 5){
        for(var j = 0; j < 5; j++){
            console.log(`par[${j}] = ${vetorPar[j]}`)
        }
        vetorPar = []
    }

    if(vetorImpar.length == 5){
        for(var j = 0; j < 5; j++){
            console.log(`impar[${j}] = ${vetorImpar[j]}`)
        }
        vetorImpar = []
    }
}

for(var i = 0; i < vetorImpar.length; i++){
    console.log(`impar[${i}] = ${vetorImpar[i]}`)
}

for(var i = 0; i < vetorPar.length; i++){
    console.log(`par[${i}] = ${vetorPar[i]}`)
}

function push(arr, num){
    arr[arr.length] = num
}
