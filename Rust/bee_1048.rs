use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let salario: f64 = input.trim().parse().unwrap();
    let novo_salario: f64;
    let reajuste: f64;
    let mut percentual: f64 = 0.0;

    if salario > 0.0 && salario <= 400.0 {
        percentual = 0.15;
    } else if salario > 400.0 && salario <= 800.0 {
        percentual = 0.12;
    } else if salario > 800.0 && salario <= 1200.0 {
        percentual = 0.10;
    } else if salario > 1200.0 && salario <= 2000.0 {
        percentual = 0.07;
    } else if salario > 2000.0 {
        percentual = 0.04;
    }

    reajuste = salario * percentual;
    novo_salario = salario + reajuste;

    println!(
        "Novo salario: {:.2}\nReajuste ganho: {:.2}\nEm percentual: {:.0} %",
        novo_salario,
        reajuste,
        (percentual * 100.0)
    );
}
