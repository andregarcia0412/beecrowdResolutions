var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split(" ");

var item = Number(lines.shift()) // o comando lines.shift() faz com que os valores do array lines, ex: ['3', '2'], ao serem atribuidos a uma variavel, sejam deletados, por exemplo, quando o valor 3 é atribuido à variavel item, ele é excluido do array e passa a existir só na variavel, portanto, ao dar lines.shift() na variavel qtd, o valor dele passar a ser o 2, porque o 3 foi deletado do array, muito bom para usar em loops.
var qtd = Number(lines.shift())

switch (item){
    case 1:
        var preco = 4
        var pagar = preco * qtd
        console.log(`Total: R$ ${pagar.toFixed(2)}`)
        break;
    
    case 2:
        var preco = 4.50
        var pagar = preco * qtd 
        console.log(`Total: R$ ${pagar.toFixed(2)}`)
        break;
    
    case 3: 
        var preco = 5
        var pagar = preco * qtd
        console.log(`Total: R$ ${pagar.toFixed(2)}`)
        break;

    case 4:
        var preco = 2
        var pagar = preco * qtd 
        console.log(`Total: R$ ${pagar.toFixed(2)}`)
        break;

    case 5:
        var preco = 1.50
        var pagar = preco * qtd
        console.log(`Total: R$ ${pagar.toFixed(2)}`)
        break;

}