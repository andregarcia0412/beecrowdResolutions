use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let tempo_total_dias: i32 = input.trim().parse().unwrap();

    let anos = tempo_total_dias / 365;
    let mut resto = tempo_total_dias % 365;

    let meses = resto / 30;
    resto %= 30;

    let dias = resto;

    println!("{} ano(s)\n{} mes(es)\n{} dia(s)", anos, meses, dias);
}
