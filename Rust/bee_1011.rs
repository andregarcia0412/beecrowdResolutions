use std::io::{self, Read};

fn main() {
    let pi = 3.14159;

    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let raio: i32 = input.trim().parse().unwrap();

    let volume = (4.0 / 3.0) * pi * (raio as f64).powf(3.0);

    println!("VOLUME = {:.3}", volume);
}
