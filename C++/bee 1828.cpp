#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
      string sheldon, raj;
      cin >> sheldon >> raj;

      if (sheldon == "tesoura" && raj == "papel") {
      printf("Caso #%d: Bazinga!\n", i+1);
      } else if (sheldon == "papel" && raj == "tesoura") {
        printf("Caso #%d: Raj trapaceou!\n", i+1);
      } else if (sheldon == "papel" && raj == "pedra") {
        printf("Caso #%d: Bazinga!\n",i+1);
      } else if (sheldon == "pedra" && raj == "papel") {
        printf("Caso #%d: Raj trapaceou!\n",i+1);
      } else if (sheldon == "pedra" && raj == "lagarto") {
        printf("Caso #%d: Bazinga!\n",i+1);
      } else if (sheldon == "lagarto" && raj == "pedra") {
        printf("Caso #%d: Raj trapaceou!\n",i+1);
      } else if (sheldon == "lagarto" && raj == "Spock") {
        printf("Caso #%d: Bazinga!\n",i+1);
      } else if (sheldon == "Spock" && raj == "lagarto") {
        printf("Caso #%d: Raj trapaceou!\n",i+1);
      } else if (sheldon == "Spock" && raj == "tesoura") {
        printf("Caso #%d: Bazinga!\n",i+1);
      } else if (sheldon == "tesoura" && raj == "Spock") {
        printf("Caso #%d: Raj trapaceou!\n",i+1);
      } else if (sheldon == "tesoura" && raj == "lagarto") {
        printf("Caso #%d: Bazinga!\n",i+1);
      } else if (sheldon == "lagarto" && raj == "tesoura") {
        printf("Caso #%d: Raj trapaceou!\n",i+1);
      } else if (sheldon == "lagarto" && raj == "papel") {
        printf("Caso #%d: Bazinga!\n",i+1);
      } else if (sheldon == "papel" && raj == "lagarto") {
        printf("Caso #%d: Raj trapaceou!\n",i+1);
      } else if (sheldon == "papel" && raj == "Spock") {
        printf("Caso #%d: Bazinga!\n",i+1);
      } else if (sheldon == "Spock" && raj == "papel") {
        printf("Caso #%d: Raj trapaceou!\n",i+1);
      } else if (sheldon == "Spock" && raj == "pedra") {
        printf("Caso #%d: Bazinga!\n",i+1);
      } else if (sheldon == "pedra" && raj == "Spock") {
        printf("Caso #%d: Raj trapaceou!\n",i+1);
      } else if (sheldon == "pedra" && raj == "tesoura") {
        printf("Caso #%d: Bazinga!\n",i+1);
      } else if (sheldon == "tesoura" && raj == "pedra") {
        printf("Caso #%d: Raj trapaceou!\n",i+1);
      } else if (sheldon == raj) {
        printf("Caso #%d: De novo!\n",i+1);
      }

  }


    return 0;
}


