var lines = input.split("\n");

var arr = []
var [N, I, F] = lines[0].split(" ").map(Number)
var contador = 0
for(var i = 0; i < N; i++){
    arr.push(lines[1].split(" ")[i])
}

arr = arr.map(Number)
for(var j = 0; j < arr.length; j++){
    var pos = arr.length - 1
    for(var k = 0; k < arr.length; k++){
        if(arr[j] != arr[pos]){
            if(arr[j] + arr[pos] >= I && arr[j] + arr[pos] <= F){
                contador++
            }
        }
        pos--
    }
}
console.log(contador / 2)
