use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let valores: Vec<i32> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();

    let mut a = valores[0];
    let mut b = valores[1];

    if b < a {
        let aux = a;
        a = b;
        b = aux;
    }

    println!(
        "{}",
        (if b % a == 0 {
            "Sao Multiplos"
        } else {
            "Nao sao Multiplos"
        })
    );
}
