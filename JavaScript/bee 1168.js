var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.trim().split('\n')

var n = Number(lines.shift())

for(var i = 0; i < n; i++){
    var num = lines.shift().toString()
    var qtdLeds = 0
    for(var j = 0; j < num.length; j++){
        var led = num[j]
        switch(led){
            case "1":
                qtdLeds += 2
                break
            case "2":
                qtdLeds += 5
                break
            case "3":
                qtdLeds += 5
                break
            case "4":
                qtdLeds += 4
                break
            case "5":
                qtdLeds += 5
                break
            case "6":
                qtdLeds += 6
                break
            case "7":
                qtdLeds += 3
                break
            case "8":
                qtdLeds += 7
                break
            case "9":
                qtdLeds += 6
                break
            case "0":
                qtdLeds += 6
                break
            default:
                break
        }
    }
    console.log(`${qtdLeds} leds`)
}
