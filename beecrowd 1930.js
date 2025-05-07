var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split(/\s+/);

var [t1,t2,t3,t4] = lines.map(Number)

t1 -= 1
t2 -= 1
t3 -= 1

console.log(t1 + t2 + t3 + t4)