var input = require("fs").readFileSync("stdin", "utf8");
var lines = input.split("\n");

let n = Number(lines.shift())
newLines = lines[0].split(" ").map(Number)

for(var i = 0; i < n - 1; i++){
    for(var j = 0; j < n - 1; j++){
        if(newLines[j] > newLines[j+1]){
            var temp = newLines[j]
            newLines[j] = newLines[j + 1]
            newLines[j + 1] = temp
        }
    }
}

console.log(`Menor valor: ${newLines[0]}
Posicao: ${lines[0].split(" ").indexOf(newLines[0].toString())}`)