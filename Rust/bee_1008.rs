use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let numeros: Vec<f64> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();

    let numero = numeros[0] as i32;
    let horas_trabalhadas = numeros[1];
    let valor_hora = numeros[2];

    println!("NUMBER = {}", numero);
    println!("SALARY = U$ {:.2}", horas_trabalhadas * valor_hora);
}
