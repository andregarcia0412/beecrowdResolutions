use std::io::{self, Read};

fn bubble_sort(v: &mut [i32]) {
    for _ in 0..v.len() - 1 {
        for j in 0..v.len() - 1 {
            if v[j + 1] < v[j] {
                let aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
}

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();
    let mut valores: Vec<i32> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();

    let valores_desordenados = valores.clone();

    bubble_sort(&mut valores);

    for valor in valores {
        println!("{}", valor);
    }

    println!();

    for valor in valores_desordenados {
        println!("{}", valor);
    }
}
