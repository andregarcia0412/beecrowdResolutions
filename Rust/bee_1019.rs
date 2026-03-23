use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let tempo_segundos: i32 = input.trim().parse().unwrap();

    let horas = tempo_segundos / 3600;
    let mut resto = tempo_segundos % 3600;

    let minutos = resto / 60;
    resto %= 60;

    let segundos = resto;

    println!("{}:{}:{}", horas, minutos, segundos);
}
