use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let valores: Vec<i32> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();

    let total = match valores[0] {
        1 => 4.0 * valores[1] as f64,
        2 => 4.5 * valores[1] as f64,
        3 => 5.0 * valores[1] as f64,
        4 => 2.0 * valores[1] as f64,
        5 => 1.5 * valores[1] as f64,
        _ => 0.0,
    };

    println!("Total: R$ {:.2}", total);
}
