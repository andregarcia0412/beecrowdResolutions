var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split(/\s+/); // /\s+/ para separar tanto por linhas quanto por espaços

/* os exemplo de entrada são:
2.0 4.0 7.5 8.0
6.4

2.0 6.5 4.0 9.0

9.0 4.0 8.5 9.0
*/


var n1 = Number(lines[0]) //peso 2 
var n2 = Number(lines[1]) //peso 3 
var n3 = Number(lines[2]) //peso 4
var n4 = Number(lines[3]) //peso 1

var media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10

if(media >= 7){
    console.log("Media: " + media.toFixed(1))
    console.log("Aluno aprovado.")
}
if(media >= 5.0 && media <= 6.9){
    console.log("Media: " + media.toFixed(1))
    console.log("Aluno em exame.")
    var n5 = Number(lines[4])
    var mediaexame = (n5 + media) / 2
    if(mediaexame > 5){
        console.log("Nota do exame: " + n5.toFixed(1))
        console.log("Aluno aprovado.")
        console.log("Media final: " + mediaexame.toFixed(1))
    }
    else{
        console.log("Nota do exame: " + n5.toFixed(1))
        console.log("Aluno reprovado.")
        console.log("Media final: " + mediaexame.toFixed(1))
       
    }
}
if(media < 5){
    console.log("Media: " + media.toFixed(1))
    console.log("Aluno reprovado.")
}
