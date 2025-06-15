var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split(/\s+/);

var [p,j1,j2,r,a] = lines.map(Number)

if (p == 1){
    if((j1 + j2) % 2 == 0 && r == 0 && a == 0){
        console.log("Jogador 1 ganha!")
    }
    else if((j1 + j2) % 2 != 2 && r == 0 && a == 0){
        console.log("Jogador 2 ganha!")
    }
    else if((j1 + j2) % 2 == 0 && r == 0 && a == 1){
        console.log("Jogador 1 Ganha!")
    }
    else if((j1 + j2) % 2 != 0 && r == 0 && a == 1){
        console.log("Jogador 1 ganha!")
    }
    else if((j1 + j2) % 2 == 0 && r == 1 && a == 0){
        console.log("Jogador 1 ganha!")
    }
    else if((j1 + j2) % 2 != 0 && r == 1 && a == 0){
        console.log("Jogador 1 ganha!")
    }
    else if ((j1 + j2) % 2 == 0 && r == 1 && a == 1){
        console.log("Jogador 2 ganha!")
    }
    else if((j1 + j2) % 2 != 0 && r == 1 && a == 1){
        console.log("Jogador 2 ganha!")
    }
}
else if (p == 0){
    if((j1 + j2) % 2 == 0 && r == 0 && a == 0){
        console.log("Jogador 2 ganha!")
    }
    else if((j1 + j2) % 2 != 2 && r == 0 && a == 0){
        console.log("Jogador 1 ganha!")
    }
    else if((j1 + j2) % 2 == 0 && r == 0 && a == 1){
        console.log("Jogador 1 Ganha!")
    }
    else if((j1 + j2) % 2 != 0 && r == 0 && a == 1){
        console.log("Jogador 1 ganha!")
    }
    else if((j1 + j2) % 2 == 0 && r == 1 && a == 0){
        console.log("Jogador 1 ganha!")
    }
    else if((j1 + j2) % 2 != 0 && r == 1 && a == 0){
        console.log("Jogador 1 ganha!")
    }
    else if ((j1 + j2) % 2 == 0 && r == 1 && a == 1){
        console.log("Jogador 2 ganha!")
    }
    else if((j1 + j2) % 2 != 0 && r == 1 && a == 1){
        console.log("Jogador 2 ganha!")
    }
}
