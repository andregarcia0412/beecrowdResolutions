use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let palavras: Vec<String> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();

    if palavras[0] == "vertebrado" {
        if palavras[1] == "ave" {
            if palavras[2] == "carnivoro" {
                println!("aguia");
            } else {
                println!("pomba");
            }
        } else {
            if palavras[2] == "onivoro" {
                println!("homem");
            } else {
                println!("vaca");
            }
        }
    } else {
        if palavras[1] == "inseto" {
            if palavras[2] == "hematofago" {
                println!("pulga");
            } else {
                println!("lagarta");
            }
        } else {
            if palavras[2] == "hematofago" {
                println!("sanguessuga");
            } else {
                println!("minhoca");
            }
        }
    }
}
