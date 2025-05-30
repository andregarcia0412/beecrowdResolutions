var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

function fibonacciVetor(quant){
    let sequenciaFibonacci = [0,1]
    let soma = 0
    var num1 = 0
    var num2 = 0
    for(var i = 1; i <= quant - 1; i++){
        num1 = sequenciaFibonacci[i - 1]
        num2 = sequenciaFibonacci[i]
        soma = num1 + num2
        sequenciaFibonacci.push(soma)
    }
    return sequenciaFibonacci
}


var n = Number(lines.shift())
for(var i = 0; i < n; i++){
    var num = Number(lines[i])
    sequenciaFibonacci = fibonacciVetor(num)
    console.log(`Fib(${num}) = ${sequenciaFibonacci[num]}`)
}
