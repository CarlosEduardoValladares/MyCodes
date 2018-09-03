#include <stdio.h>

int busca_em_largura(int n, int adjacencias[n][n], int raiz) {
	
  int verificado[n];
  int vetor[n];
  int i, j = 0;
  
  for (i = 0; i < n; i++){

    vetor[i] = -1;
    verificado[i] = 0;

  }

  vetor[0] = raiz;
  verificado[raiz] = 1;
  j++;
  
  for(i = 0; i < n; i++){
  	
    if(vetor[i] == -1){
	
		break;
	
    }

    raiz = vetor[i];
    int x;
    for(x = 0; x < n; x++){
      
      if(adjacencias[x][raiz] != 0 && (verificado[raiz] == 0 || verificado[x] == 0)){

        vetor[j] = x;
        verificado[x] = 1;
        j++;
  
      }
        
    }
  }

  int x, contador = 0;
  for (x = 0; x < n; x++){

    if (verificado[x] == 1){

      contador++ ;

    }

  }

  if (contador == n){

    return 1;

  } else {

    return 0;

  }

}

int main(void) {

  int tamanho = 5;
  int matriz[5][5] = {
        
    {0, 1, 1, 0, 0},
    {1, 0, 0, 0, 0},
    {1, 0, 0, 1, 1},
    {0, 0, 1, 0, 0},
    {0, 0, 1, 0, 0}

  };

  int raiz = 3;
  int conexo = 0;
  conexo = busca_em_largura(tamanho, matriz, raiz);

  if (conexo == 0){

    printf("Não é uma Árvore");
    return 0;

  }

  int arestas = 0;
  int i, j;
  for (i = 0; i < tamanho; i++){
    for (j = 0; j < tamanho - i; j++){

      if (matriz[i][j] != 0){

        arestas++ ;

      }

    }

  }

  if (arestas == tamanho - 1){

    printf("É uma árvore");

  } else {

    printf("Não é uma Árvore");  
  
  }

  return 0;
}
