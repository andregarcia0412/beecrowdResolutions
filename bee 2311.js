var input = require("fs").readFileSync("stdin", "utf8");
var lines = input.trim().split("\n").map(line => line.trim());

var n = Number(lines.shift())

for(var i = 0; i < n; i++){
    var nome = lines.shift()
    var dificuldade = Number(lines.shift())
    var [n1,n2,n3,n4,n5,n6,n7] = lines.shift().split(" ").map(Number)
    var notaTotal = n1 + n2 + n3 + n4 + n5 + n6 + n7 - (Math.max(n1,n2,n3,n4,n5,n6,n7) + Math.min(n1,n2,n3,n4,n5,n6,n7))

    var notaFinal = (notaTotal * dificuldade).toFixed(2)

    console.log(`${String(nome)} ${String(notaFinal)}`)
}