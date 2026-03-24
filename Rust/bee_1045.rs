use std::io::{self, Read};

fn bubble_sort(v: &mut [f64]) {
    for _ in 0..v.len() - 1 {
        for j in 0..v.len() - 1 {
            if v[j] < v[j + 1] {
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

    let mut valores: Vec<f64> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();

    bubble_sort(&mut valores);

    let a = valores[0];
    let b = valores[1];
    let c = valores[2];

    let mut forma_triangulo = true;

    if a >= b + c {
        println!("NAO FORMA TRIANGULO");
        forma_triangulo = false;
    } else if a.powf(2.0) == b.powf(2.0) + c.powf(2.0) {
        println!("TRIANGULO RETANGULO");
    } else if a.powf(2.0) > b.powf(2.0) + c.powf(2.0) {
        println!("TRIANGULO OBTUSANGULO");
    } else if a.powf(2.0) < b.powf(2.0) + c.powf(2.0) {
        println!("TRIANGULO ACUTANGULO");
    }

    let mut contador = 0;

    if a == b {
        contador += 1;
    }
    if a == c {
        contador += 1;
    }
    if b == c {
        contador += 1;
    }

    if forma_triangulo {
        if contador == 3 {
            println!("TRIANGULO EQUILATERO");
        } else if contador == 1 {
            println!("TRIANGULO ISOSCELES");
        }
    }
}
