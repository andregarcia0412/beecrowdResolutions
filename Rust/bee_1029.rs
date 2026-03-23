use std::io::{self, Read};

static mut QTD_CHAMADAS: u32 = 0;

fn fib(n: u32) -> u32 {
    unsafe { QTD_CHAMADAS += 1 };
    if n == 0 {
        return 0;
    }

    if n == 1 {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();
    let valores: Vec<u32> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();

    for i in 1..valores.len() {
        let result = fib(valores[i]);
        unsafe { QTD_CHAMADAS = QTD_CHAMADAS - 1 };

        println!(
            "fib({}) = {} calls = {}",
            valores[i],
            unsafe { QTD_CHAMADAS },
            result
        );

        unsafe { QTD_CHAMADAS = 0 };
    }
}
