var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split("\n")

let arr = []
let n = Number(input)

for(var i = 0; i < 10; i++){
    arr.push(n)
    console.log(`N[${i}] = ${arr[i]}`)
    n *= 2
}
