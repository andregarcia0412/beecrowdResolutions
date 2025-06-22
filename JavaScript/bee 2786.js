var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

let [l, c] = lines.map(Number)
let areaLajota1 = Math.sqrt(2) ** 2
let areaLajota2 = areaLajota1/2

let qtdLaj1 = l * c + (l - 1) * (c - 1)
let qtdLaj2 = (l + c - 2) * 2

console.log(qtdLaj1)
console.log(qtdLaj2)
