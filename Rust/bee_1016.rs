use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let t: i32 = input.trim().parse().unwrap();

    println!("{} minutos", t * 2);
}
