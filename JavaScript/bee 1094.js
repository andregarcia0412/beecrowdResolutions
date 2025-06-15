/* input:
10
10 C
6 R
15 S
5 C
14 R
9 C
6 R
8 S
5 C
14 R
*/
var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split(/\s+/);
var totalCobaias = 0
var coelhos = 0
var ratos = 0
var sapos = 0
var j = 1
for (var i = Number(lines[0]); i > 0; i--){
    totalCobaias += Number(lines[j])
    
    if(lines[j + 1] == "C"){
        coelhos += Number(lines[j])
    }
    else if(lines[j + 1] == "R"){
        ratos += Number(lines[j])
    }
    else if(lines[j + 1] == "S"){
        sapos += Number(lines[j])
    }
    j += 2
}
var percentualCoelhos = (coelhos / totalCobaias) * 100
var percentualRatos = (ratos / totalCobaias) * 100
var percentualSapos = (sapos / totalCobaias) * 100

console.log(`Total: ${totalCobaias} cobaias`)
console.log(`Total de coelhos: ${coelhos}`)
console.log(`Total de ratos: ${ratos}`)
console.log(`Total de sapos: ${sapos}`)
console.log(`Percentual de coelhos: ${percentualCoelhos.toFixed(2)} %`)
console.log(`Percentual de ratos: ${percentualRatos.toFixed(2)} %`)
console.log(`Percentual de sapos: ${percentualSapos.toFixed(2)} %`)
