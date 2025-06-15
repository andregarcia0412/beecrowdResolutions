var input = require('fs').readFileSync('stdin', 'utf8'); //usado para ler os numeros do stdin (3.0 4.0 5.2)
var lines = input.split(' '); // trocar por "/n", se for uma mudanca de linha,  " ", se forem espaços e "," se forem virgulas separando os valores do array

const pi = 3.14159

var A = Number(lines[0])
var B = Number(lines[1])
var C = Number(lines[2])

var triangulo = (A * C) / 2
var circulo = pi *  C ** 2
var trapezio = (A + B) * C / 2
var quadrado = B ** 2
var retangulo = A * B



console.log("TRIANGULO: " + triangulo.toFixed(3))
console.log("CIRCULO: " + circulo.toFixed(3))
console.log("TRAPEZIO: " + trapezio.toFixed(3))
console.log("QUADRADO: " + quadrado.toFixed(3))
console.log("RETANGULO: " + retangulo.toFixed(3))
