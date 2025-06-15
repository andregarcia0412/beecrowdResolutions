var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split("\n")

let arr = lines.map(Number)

for(var i = 0; i < 100; i++){
    let n = arr[i]

    if(n <= 10){
        console.log(`A[${i}] = ${arr[i].toFixed(1)}`)
    }
}
