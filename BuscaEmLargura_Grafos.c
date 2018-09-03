#include <stdio.h>

void busca_em_largura(int n, int adjacencias[n][n], int raiz) {
	
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
  
  if (j == 1){
    
    printf("Busca em Largura: ");
  	printf("%d", raiz);
  	return;
  
  }

  printf("Busca em Largura: ");	
  for(i = 0; i < n; i++){
  
  	printf("%d ", vetor[i]);
  
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
  busca_em_largura(tamanho, matriz, raiz);

  return 0;
}
