use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let salario: f64 = input.trim().parse().unwrap();
    let mut imposto:f64 =  0.0;
    let mut should_print = true;

    if salario >= 0.0 && salario <= 2000.0 {
        println!("Isento");
        should_print = false;
    } else if salario > 2000.0 && salario <= 3000.0 {
        imposto = (salario - 2000.0) * 0.08;
    } else if salario > 3000.0 && salario <= 4500.0 {
        imposto = 1000.0 * 0.08 + (salario - 3000.0) * 0.18
    } else if salario > 4500.0 {
        imposto = 1000.0 * 0.08 + 1500.0 * 0.18 + (salario - 4500.0) * 0.28; 
    }

    if should_print {
        println!("R$ {:.2}", imposto);
    }
}
