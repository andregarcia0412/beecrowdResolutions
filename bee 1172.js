var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');


var x = lines.map(Number) 

for(var i = 0; i < 10; i++){
    if(x[i] <= 0){
        x[i] = 1
    }
    console.log(`X[${i}] = ${x[i]}`)
}
