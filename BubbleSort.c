#include <stdio.h>
#include <stdlib.h>

// By: Carlos Eduardo Valladares da Mota
// log: 30/06/2018

int Ordenado(int Vetor[], int tamanho){

    int i;

    for (i = 0; i < tamanho-1; i++){

        if (Vetor[i] < Vetor[i+1]){

            return 0;
        }

        if (i == tamanho ){

            return 1;

        }

    }

}

int main(void){

    int tamanho;
    printf("Tamanho do vetor: ");
    scanf("%d", &tamanho);

    int Numeros[tamanho];
    printf("Itens: ");

    int i;
    for (i = 0; i < tamanho; i++){

        scanf("%d", &Numeros[i]);

    }

    while ( Ordenado(Numeros, tamanho) == 0){

        for (i = 0; i < tamanho - 1; i++){

            if (Numeros[i] < Numeros[i+1]) {

                int aux;
                aux = Numeros[i];
                Numeros[i] = Numeros[i+1];
                Numeros[i+1] = aux;

            }

        }

    }

    printf("Vetor ordenado: ");
    for (i = 0; i < tamanho; i++){

        printf("%d ", Numeros[i]);

    }

    return 0;

}
