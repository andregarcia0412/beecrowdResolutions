var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

function bubbleSort(arr){
    for(var i = 0; i < arr.length; i++){
        for(var j = 0; j < arr.length; j++){
            if(arr[j] > arr[j + 1]){
                var temp = arr[j]
                arr[j] = arr[j + 1]
                arr[j + 1] = temp
            }
        }
    }
    return arr
}

while(n != "eof"){
    var n = lines.shift()
    if (n == undefined){
        break
    }
    if (n.length = 1){
        var contador = n
    } else{
        var codigo = n
    }

    var codigos = []
    for(var i = 0; i < contador; i++){
        var codigo = lines.shift().trim()
        if(codigo.length == 4){
        codigos.push(codigo)
    }
}
    if(codigos[0] != undefined){
        console.log(bubbleSort(codigos).join("\n"))
    }
}
