use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let valores: Vec<i32> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();

    let hora_inicial = valores[0];
    let hora_final = valores[1];

    if hora_final > hora_inicial {
        println!("O JOGO DUROU {} HORA(S)", (hora_final - hora_inicial));
    } else {
        println!(
            "O JOGO DUROU {} HORA(S)",
            ((24 - hora_inicial) + hora_final)
        );
    }
}
