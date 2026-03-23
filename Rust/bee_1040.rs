use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let valores: Vec<f64> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();

    let n1 = valores[0] * 2.0;
    let n2 = valores[1] * 3.0;
    let n3 = valores[2] * 4.0;
    let n4 = valores[3];

    let media = (n1 + n2 + n3 + n4) / 10.0;

    println!("Media: {:.1}", media);

    if media >= 7.0 {
        println!("Aluno aprovado.");
    } else if media < 5.0 {
        println!("Aluno reprovado.");
    } else {
        println!("Aluno em exame.");

        let n5 = valores[4];
        println!("Nota do exame: {:.1}", n5);

        let media_final = (media + n5) / 2.0;
        println!(
            "{}",
            (if media_final >= 5.0 {
                "Aluno aprovado."
            } else {
                "Aluno reprovado."
            })
        );

        println!("Media final: {:.1}", media_final);
    }
}
