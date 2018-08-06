#include <stdio.h>

int Ordenado(int Vetor[], int tamanho){

    int i;
    for (i = 0; i < tamanho-1; i++){

        if (Vetor[i] > Vetor[i+1]){

            return 0;
        }

    }

    return 1;

}

void QuickSort(int Vetor[], int esquerda, int direita){

    if (esquerda == direita){

        return;
    }

    int pivot;
    pivot = Vetor[direita];
    int primeiro = esquerda;
    int ultimo = direita;

    direita--;

    int i;
    for (i = esquerda; i <= direita; i++){

        if (Vetor[i] > pivot){

            int aux;
            aux = Vetor[i];
            Vetor[i] = Vetor[direita];
            Vetor[direita] = aux;

            direita--;
            i--;

        }

    }

    int aux;
    aux = Vetor[i];
    Vetor[i] = pivot;
    Vetor[ultimo] = aux;

    if (i >= primeiro && i < ultimo){

        QuickSort(Vetor, i+1, ultimo);

    }

    if (i <= ultimo && i > primeiro){

        QuickSort(Vetor, primeiro, i-1);

    }

}

int main(void){

    int tamanho;
    printf("Tamaho do vetor: ");
    scanf("%d", &tamanho);

    printf("Itens: ");

    int Vetor[tamanho];
    int i;
    for (i = 0; i < tamanho; i++){

        scanf("%d", &Vetor[i]);

    }

    if (Ordenado(Vetor, tamanho) == 1){

        printf("Vetor Ordenado: ");
        for(i = 0; i < tamanho; i++){

            printf("%d ", Vetor[i]);

        }

        return 0;

    }

    QuickSort(Vetor, 0, tamanho-1);

    printf("Vetor Ordenado: ");
    for (i = 0; i < tamanho; i++){

        printf("%d ", Vetor[i]);

    }

    return 0;

}
