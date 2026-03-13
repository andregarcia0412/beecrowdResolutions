var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split(" ");

const [pah, pam] = lines[0].split(":").map(Number);
const [cbh, cbm] = lines[1].split(":").map(Number);
const [pbh, pbm] = lines[2].split(":").map(Number);
const [cah, cam] = lines[3].split(":").map(Number);

const pa = pah * 60 + pam;
const cb = cbh * 60 + cbm;
const pb = pbh * 60 + pbm;
const ca = cah * 60 + cam;

const vooA = (cb - pa + 1440) % 1440;
const vooB = (ca - pb + 1440) % 1440;

const duracao = ((vooA + vooB) % 1440) / 2;
let fusoMinutos = vooA - duracao;

if (fusoMinutos <= -720) {
  fusoMinutos += 1440;
} else if (fusoMinutos > 720) {
  fusoMinutos -= 1440;
}

console.log(`${duracao} ${fusoMinutos/60}`);
