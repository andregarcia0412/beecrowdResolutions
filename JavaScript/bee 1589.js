var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

let n = Number(lines.shift())
for(let i = 0; i < n; i++){
    let nums = lines[i].split(" ").map(Number)
    console.log(nums[0] + nums[1])
}
