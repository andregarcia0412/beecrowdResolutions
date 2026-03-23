use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let valor: i32 = input.trim().parse().unwrap();

    let notas_100 = valor / 100;
    let mut resto = valor % 100;

    let notas_50 = resto / 50;
    resto %= 50;

    let notas_20 = resto / 20;
    resto %= 20;

    let notas_10 = resto / 10;
    resto %= 10;

    let notas_5 = resto / 5;
    resto %= 5;

    let notas_2 = resto / 2;
    resto %= 2;

    let notas_1 = resto;

    println!("{}", valor);
    println!("{} nota(s) de R$ 100,00", notas_100);
    println!("{} nota(s) de R$ 50,00", notas_50);
    println!("{} nota(s) de R$ 20,00", notas_20);
    println!("{} nota(s) de R$ 10,00", notas_10);
    println!("{} nota(s) de R$ 5,00", notas_5);
    println!("{} nota(s) de R$ 2,00", notas_2);
    println!("{} nota(s) de R$ 1,00", notas_1);
}
