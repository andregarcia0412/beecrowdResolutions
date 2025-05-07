var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split(/\s+/);

var contador = parseInt(input)
var valorinicial = contador
var numero = 1
//o for precisa de 3 condições: a primeira é a variavel a ser utilizada, depois a condição para que ocorra e por fim o incremento, que nesse caso é -1
for(var contador = Number(input); contador > 1; contador -= 1){
    numero = numero * contador 
}
console.log(`O fatorial de ${valorinicial} é ${numero}`)