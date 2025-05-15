var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');
//beecrowd 1007
var [a,b,c,d] = input.split("\n").map(item => Number(item)) //cria o array "a, b, c, d" e coloca os valores do input ja separados como Number, agilizando o processo (Desestruturação), tambem pode ser lines.map... e o argumento de map pode ser apenas Number
var diferenca = (a * b) - (c * d)
console.log(`DIFERENCA = ${diferenca}`) //template literal

//para separar valores em "matriz" usar:
var [a,b,c,d] = lines[0].split(" ").map(Number)
var [e,f,g,h] = lines[1].split(" ").map(Number)
//isso vai separar os valores em dois arrays com 4 numeros ja definidos pela função map
