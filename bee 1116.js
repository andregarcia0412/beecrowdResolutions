var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split(/\s+/);
n = Number(lines[0])
var j = 0

for (var i = 0; i < n; i++){ //desse jeito é possivel pegar um valor para fazer quantas vezes algo acontecerá, por exemplo nesse caso ele pega um valor, "digamos que 3", e havera uma repetição de algo, nesse caso uma divisão de dois numeros 3 vezes, dessa forma aumentando o valor do array conforme o for da seus loops
    var a = lines[j + 1]
    var b = lines[j + 2]
    if (b != 0){
        console.log((a/b).toFixed(1))
    }else{
        console.log("divisao impossivel")
    }
    j += 2
}