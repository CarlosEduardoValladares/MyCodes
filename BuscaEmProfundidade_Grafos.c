#include <stdio.h>

void Proximo(int raiz, int n, int matriz[n][n], int checados[n]){
	
	printf("%d ", raiz);
	checados[raiz] = 1;
	
	int i;
	for (i = 0; i < n; i++){
		
		if (matriz[i][raiz] != 0 && checados[i] == 0){
			
			Proximo(i, n, matriz, checados);
			
		}
		
	}
	
	return;
	
} 

int main(){

	int n = 5;
	int matriz[5][5] = {
	
		{0, 1, 1, 0, 0},
		{1, 0, 0, 0, 1},
		{1, 0, 0, 1, 0},
		{0, 0, 1, 0, 1},
		{0, 1, 0, 1, 0}
	
	};
	
	int raiz = 4;
	
	int checados[n];
	int i;
	for (i = 0; i < n; i++){
		
		checados[i] = 0;
		
	}
	
	printf("Busca em Profundidade: ");
	
	Proximo(raiz, n, matriz, checados);

	return 0;
}
