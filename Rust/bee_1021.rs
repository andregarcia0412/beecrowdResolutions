use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let valor: f64 = input.trim().parse::<f64>().unwrap() * 100.0;

    let notas_100 = (valor / 10000.0).floor();
    let mut resto = valor % 10000.0;

    let notas_50 = (resto / 5000.0).floor();
    resto %= 5000.0;

    let notas_20 = (resto / 2000.0).floor();
    resto %= 2000.0;

    let notas_10 = (resto / 1000.0).floor();
    resto %= 1000.0;

    let notas_5 = (resto / 500.0).floor();
    resto %= 500.0;

    let notas_2 = (resto / 200.0).floor();
    resto %= 200.0;

    let moedas_1 = (resto / 100.0).floor();
    resto %= 100.0;

    let moedas_50 = (resto / 50.0).floor();
    resto %= 50.0;

    let moedas_25 = (resto / 25.0).floor();
    resto %= 25.0;

    let moedas_10 = (resto / 10.0).floor();
    resto %= 10.0;

    let moedas_5 = (resto / 5.0).floor();
    resto %= 5.0;

    let moedas_01 = resto.floor();

    println!("NOTAS:");
    println!("{} nota(s) de R$ 100.00", notas_100);
    println!("{} nota(s) de R$ 50.00", notas_50);
    println!("{} nota(s) de R$ 20.00", notas_20);
    println!("{} nota(s) de R$ 10.00", notas_10);
    println!("{} nota(s) de R$ 5.00", notas_5);
    println!("{} nota(s) de R$ 2.00", notas_2);

    println!("MOEDAS:");
    println!("{} moeda(s) de R$ 1.00", moedas_1);
    println!("{} moeda(s) de R$ 0.50", moedas_50);
    println!("{} moeda(s) de R$ 0.25", moedas_25);
    println!("{} moeda(s) de R$ 0.10", moedas_10);
    println!("{} moeda(s) de R$ 0.05", moedas_5);
    println!("{} moeda(s) de R$ 0.01", moedas_01);
}
