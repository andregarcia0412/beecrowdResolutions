var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');


if(lines[0].length > 140){
    console.log("MUTE")
} else{
    console.log("TWEET")
}
