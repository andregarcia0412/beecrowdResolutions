use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let valores: Vec<f64> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();

    let a = valores[0];
    let b = valores[1];
    let c = valores[2];

    let delta = b.powf(2.0) - (4.0 * a * c);

    if delta < 0.0 || a == 0.0 {
        println!("Impossivel calcular");
    } else {
        let r1 = (-b + delta.sqrt()) / (2.0 * a);
        let r2 = (-b - delta.sqrt()) / (2.0 * a);

        println!("R1 = {:.5}", r1);
        println!("R2 = {:.5}", r2);
    }
}
