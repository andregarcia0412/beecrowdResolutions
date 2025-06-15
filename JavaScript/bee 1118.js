var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split(/\s+/)

var repetindo = true


while(repetindo){
    var testing = true
    var nota1 = null
    var nota2 = null
    var qtdValidas = 0
    
    while(qtdValidas != 2){
        var n = Number(lines.shift())

        if(n >= 0 && n <= 10){
            if(nota1 === null){
                nota1 = n
                qtdValidas++
            }
            else if (nota2 === null){
                nota2 = n
                qtdValidas++
                console.log(`media = ${((nota1 + nota2) / 2).toFixed(2)}`)
            }
        } 
        else{
            console.log("nota invalida")
        }
        
    }
    while (testing){
        if(n == 1){
            repetindo = true
            testing = false
        }
        else if (n == 2){
            repetindo = false
            testing = false
        }
        else{
            console.log("novo calculo (1-sim 2-nao)")
            var n = Number(lines.shift())
        }
    }

}
