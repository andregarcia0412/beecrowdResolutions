var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split(/\s+/);

let [horaInicial, horaFinal] = lines.map(Number)

if(horaFinal > horaInicial){
    console.log(`O JOGO DUROU ${horaFinal - horaInicial} HORA(S)`)
}
else{ // exemplo se for entre 22h e 1h: (24 - 22) + 1 == 3; pois a hora inicial não pode ser mais tarde do que a final
    console.log(`O JOGO DUROU ${(24 - horaInicial) + horaFinal} HORA(S)`)
}
