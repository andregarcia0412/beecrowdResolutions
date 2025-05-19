var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split("\n")

let t = Number(input)
let arr = []
let j = 0

for(var i = 0; i < 1000; i++){
    arr.push(j)
    console.log(`N[${i}] = ${j}`)
    j++
    if(j > t - 1){
        j = 0
    }

}