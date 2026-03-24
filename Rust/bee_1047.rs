use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let valores: Vec<i32> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();

    let hora_inicial = valores[0];
    let minuto_inicial = valores[1];
    let hora_final = valores[2];
    let minuto_final = valores[3];

    let inicio = 60 * hora_inicial + minuto_inicial;
    let fim = 60 * hora_final + minuto_final;

    let mut duracao = fim - inicio;

    if duracao <= 0 {
        duracao += 1440;
    }

    let horas = duracao / 60;
    let minutos = duracao % 60;

    println!("O JOGO DUROU {} HORA(S) E {} MINUTO(S)", horas, minutos);
}
