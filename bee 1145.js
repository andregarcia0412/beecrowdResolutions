var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split(" ")

var [x,y] = lines.map(Number)
var contador = 0

while(contador < y){
    var str = ""
    for(var i = 0; i < x; i++){
        contador++
        str += contador + " "
        if(contador >= y){
            break
        }
    }
    console.log(str.trim())

}
