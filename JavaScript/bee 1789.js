var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

while(lines.length != 0) {    
    const n = lines.shift()
    if (n === undefined) break

    const v = lines.shift()
    if (v === undefined) break
    const velocidades = v.split(" ").map(Number)

   classificarVelocidade(getMaior(velocidades))
}


function getMaior(arr) {
    let maior = arr[0]
    for(let i = 0; i < arr.length; i++) {
        if(arr[i] > maior) {
            maior = arr[i]
        }
    }
    
    return maior
}

function classificarVelocidade(n) {
    switch(true) {
        case n < 10:
            console.log(1)
            break
        case n < 20:
            console.log(2)
            break
        case n >= 20:
            console.log(3)
            break
    }
}
