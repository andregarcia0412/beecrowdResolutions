var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split(/\s+/);

while(true){
    var arr = []
    var numero = Number(lines.shift())
    var j = 1
    
    if (numero === 0){
    break;
    }

    for (var i = numero; i > 0; i--){
        arr.push(j)
        j += 1
    }
    console.log(arr.join(" ")) //desse jeito é possivel separar o array, nesse caso como 1 2 3 4 5, por exemplo
}
