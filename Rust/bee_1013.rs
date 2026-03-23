use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let valores: Vec<i32> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();

    let maior_ab = (valores[0] + valores[1] + (valores[0] - valores[1]).abs()) / 2;
    let maior_abc = (maior_ab + valores[2] + (maior_ab - valores[2]).abs()) / 2;

    println!("{} eh o maior", maior_abc);
}
