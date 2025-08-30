#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    string tipo1, tipo2, tipo3, animal;
    cin >> tipo1 >> tipo2 >> tipo3;

    if (tipo1 == "vertebrado") {
        if (tipo2 == "ave") {
            if (tipo3 == "carnivoro") {
                animal = "aguia";
            } else if (tipo3 == "onivoro") {
                animal = "pomba";
            }
        } else if (tipo2 == "mamifero") {
            if (tipo3 == "onivoro") {
                animal = "homem";
            } else if (tipo3 == "herbivoro") {
                animal = "vaca";
            }
        }

    } else if (tipo1 == "invertebrado") {
        if (tipo2 == "inseto") {
            if (tipo3 == "hematofago") {
                animal = "pulga";
            } else if (tipo3 == "herbivoro") {
                animal = "lagarta";
            }
        } else if (tipo2 == "anelideo") {
            if (tipo3 == "hematofago") {
                animal = "sanguessuga";
            } else if (tipo3 == "onivoro") {
                animal = "minhoca";
            }
        }
    }

    cout << animal << endl;

    return 0;
}

