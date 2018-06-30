#include <stdio.h>
#include <stdlib.h>

// By: Carlos Eduardo Valladares da Mota
// log: 28/06/2018 16:38:00

int main(void) {
  
  // Número de Caixas
  int numeroCaixas;
  scanf("%d", &numeroCaixas); 

  int Caixas[numeroCaixas]; 

  int i;
  for (i = 0; i < numeroCaixas; i++){
    scanf("%d", &Caixas[i]);

  }

  // Veotres para o Andar 1 e 2
  int Andar1[numeroCaixas];
  int Andar2[numeroCaixas];

  // Colocando todas as Caixas no Andar 1
  for (i = 0; i < numeroCaixas; i++){
    Andar1[i] = Caixas[i];

  }

  // Deixando o Andar 2 vazio (preenchido de zeros)
  for (i = 0; i < numeroCaixas; i++){
    Andar2[i] = 0;

  }

  //Verificando se é possível levantar alguma caixa
  // E se sim, levando sozinhas para o Andar 2
  int alteracoes = 0;
  for (i = 0; i < numeroCaixas; i++){
    if (Andar1[i] <= 8){
      Andar2[i] = Andar1[i];
      Andar1[i] = 0;

      alteracoes = alteracoes + 1;

      //printf("Step 1: ");
      //printf("Sobe %d, Desce %d\n", Andar2[i], Andar1[i]);

    }

  }

  //Retornar impossível se todas as caixas forem muito pesadas
  if (alteracoes == 0){
    printf("N");
    return 0;

  }

  // Fazendo o processo de subir e descer as caixas
  int andarVazio = 0;
  while (andarVazio == 0){

    int j;
    int movimentacao = 0;
    for (i = 0; i < numeroCaixas; i++){
        
        for (j = 0; j < numeroCaixas; j++){

          if ( abs(Andar1[i] - Andar2[j]) <= 8 && Andar1[i] > 0 && Andar1[i] > Andar2[j]){

            // Trocando Duas caixas de lugar, entre
            // Os Andares 1 e 2
            Andar2[i] = Andar1[i];
            Andar1[i] = 0;
            Andar1[j] = Andar2[j];
            Andar2[j] = 0;

            //printf("Step 2: ");
            //printf("Sobe %d, Desce %d\n", Andar2[i], Andar1[j]);

            movimentacao = 1;

            if (Andar1[j] <= 8 && Andar1[j] > 0){

              //printf("Step 3: ");

              Andar2[j] = Andar1[j];
              Andar1[j] = 0;

              //printf("Sobe %d, Desce %d\n", Andar2[j], Andar1[i]);

            }

          }

        }
      }

      // Se nada foi subido e ainda há caixa, ela é pesada demais
        // para ser levantada
        if (movimentacao == 0){
          for (j = 0; j < numeroCaixas; j++){
            if (Andar1[j] != 0) {
              printf("N");

              return 0;

          } 
          else {
              andarVazio = 1;

          }

          }        

        }


  }

  printf("S");
  return 0;

}