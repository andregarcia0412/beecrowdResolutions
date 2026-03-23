use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let n: f64 = input.trim().parse().unwrap();

    if n >= 0.0 && n <= 25.0 {
        println!("Intervalo [0,25]");
    } else if n > 25.0 && n <= 50.0 {
        println!("Intervalo (25,50]");
    } else if n > 50.0 && n <= 75.0 {
        println!("Intervalo (50,75]");
    } else if n > 75.0 && n <= 100.0 {
        println!("Intervalo (75,100]");
    } else {
        println!("Fora de intervalo");
    }
}
