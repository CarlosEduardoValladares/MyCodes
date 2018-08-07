#include <stdio.h>

int Calcular(int valor, int nota) {

  int quantidade = 0;

  while ( valor - nota >= 0) {

    quantidade = quantidade + 1;
    valor = valor - nota;

  }

  printf("%d nota(s) de R$ %d,00\n", quantidade, nota);

  return valor;

}

int main() {

  int valor;

  scanf("%d", &valor);
  printf("%d\n", valor);

  int cedulas[7] = {100, 50, 20, 10, 5, 2, 1};

  int i = 0;

  for (i; i < 7; i++){

    valor = Calcular(valor, cedulas[i]);

  }

  return 0;

}
