use std::io::{self, Read};

fn fatorial(n: u64) -> u64 {
    if n == 0 {
        return 1;
    }

    return n * fatorial(n - 1);
}

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();
    let n: u64 = input.trim().parse().unwrap();

    println!("{}", fatorial(n));
}
