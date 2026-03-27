use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let ddd: i32 = input.trim().parse().unwrap();

    let cidade: &str = match ddd {
        61 => "Brasilia",
        71 => "Salvador",
        11 => "Sao Paulo",
        21 => "Rio de Janeiro",
        32 => "Juiz de Fora",
        19 => "Campinas",
        27 => "Vitoria",
        31 => "Belo Horizonte",
        _ => "DDD nao cadastrado",
    };

    println!("{}", cidade);
}
