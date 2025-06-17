var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split(' ');

function bubbleSortCrescente(arr){
    for(let i = 0; i < 5; i++){
        for(let j = 0; j < 5; j++){
            if(arr[j] > arr[j+1]){
                let temp = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = temp
            }
        }
    }
    return arr
}

function bubbleSortDecrescente(arr){
    for(let i = 0; i < 5; i++){
        for(let j = 0; j < 5; j++){
            if(arr[j] < arr[j+1]){
                let temp = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = temp
            }
        }
    }
    return arr
}

let arrCartas = lines.map(Number)
let arrCartasCrescente = bubbleSortCrescente(lines.map(Number))
let arrCartasDecrescente = bubbleSortDecrescente(lines.map(Number))

let qtdCrescente = 0
let qtdDecrescente = 0

for(let i = 0; i < 5; i++){
    if(arrCartas[i] == arrCartasCrescente[i]){
        qtdCrescente++
    }
    if(arrCartas[i] == arrCartasDecrescente[i]){
        qtdDecrescente++
    }
}   

if(qtdCrescente == 5){
    console.log('C')
} else if(qtdDecrescente == 5){
    console.log('D')
} else{
    console.log('N')
}

