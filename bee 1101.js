var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split(/\s+/)

var n = Number(lines.shift())
var m = Number(lines.shift())
var arr = []
var soma = 0

while(n > 0 && m > 0){
    if(n > m){
        [n,m] = [m,n]
    }
    for(var i = n; i <= m; i++){
        arr.push(i)
        soma += i
    }
    console.log(arr.join(" ") + ` Sum=${soma}`)

    arr = []
    soma = 0

    n = Number(lines.shift())
    m = Number(lines.shift())
}
