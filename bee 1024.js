var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n')

function addXToAscii(str, x){
    var code = str.charCodeAt(0)
    code += x
    return String.fromCharCode(code)
}

function invertString(str){
    var aux = ""
    var j = 1
    for(var i = 0; i < str.length; i++){
        aux += str[str.length - j]
        j++
    }
    return aux
}

var n = Number(lines.shift())

// console.log("A".charCodeAt(0))
// console.log(String.fromCharCode(65))
// console.log(add3ToAscii("A"))


for(var i = 0; i < n; i++){
    var str = lines.shift()
    var middleStr = ""
    for(var j = 0; j < str.length; j++){
        var char = str[j]
        if(char.toLowerCase() == "a" || char.toLowerCase() == "b" || char.toLowerCase() == "c" || char.toLowerCase() == "d" || char.toLowerCase() == "e" || char.toLowerCase() == "f" || char.toLowerCase() == "g" || char.toLowerCase() == "h" || char.toLowerCase() == "i" || char.toLowerCase() == "j" || char.toLowerCase() == "k" || char.toLowerCase() == "l" || char.toLowerCase() == "m" || char.toLowerCase() == "n" || char.toLowerCase() == "o" || char.toLowerCase() == "p" || char.toLowerCase() == "q" || char.toLowerCase() == "r" || char.toLowerCase() == "s" || char.toLowerCase() == "t" || char.toLowerCase() == "u" || char.toLowerCase() == "v" || char.toLowerCase() == "w" || char.toLowerCase() == "x" || char.toLowerCase() == "y" || char.toLowerCase() == "z"){
            char = addXToAscii(char,3)
        }
        middleStr += char 
    }    
    var auxStr = ""
    middleStr = invertString(middleStr)
        for(var k = middleStr.length - 1; k > (middleStr.length / 2) - 1; k--){
            auxStr += middleStr[k]
        }
    auxStr = invertString(auxStr)
    
    var finalString = ""
    // console.log(auxStr)
    if(auxStr.length % 2 !== 0){
        for(var h = 1; h < auxStr.length; h++){
            finalString += addXToAscii(auxStr[h], -1)
        }
    }
    else{
        for(var h = 0; h < auxStr.length; h++){
            finalString += addXToAscii(auxStr[h], -1)
        }
    }
    // console.log(finalString)

    if(auxStr.length % 2 !== 0){
        console.log(middleStr.substring(0, (middleStr.length / 2) + 1) + finalString)
    }
    else{
        console.log(middleStr.substring(0, (middleStr.length / 2)) + finalString)
    }
}
