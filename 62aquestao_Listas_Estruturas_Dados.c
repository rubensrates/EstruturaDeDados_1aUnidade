#include <stdio.h>


/*
62. Ler um conjunto de números reais, armazenando-o em vetor e calcular o
quadrado das componentes deste vetor, armazenando o resultado em outro
vetor. Os conjuntos têm 10 elementos cada. Imprimir todos os conjuntos.
*/

int main() {
  float conjuntoNR[10], conjuntoNR2[10];
  int i;

  // Recebendo números reais
  printf("Digite o conjunto de números reais:\n");
  for(i = 0; i < 10; i++) {
      
    scanf("%f", &conjuntoNR[i]);
  }

  // Cálculando o quadrado dos elementos do 1o conj.
  for(i = 0; i < 10; i++) {
    conjuntoNR2[i] = conjuntoNR[i] * conjuntoNR[i];
  }

  //Conjunto 1 impresso
  printf("\nConjunto 1: ");
  for(i = 0; i < 10; i++) {
    printf("%.0f ", conjuntoNR[i]);
  }
  //Conjunto 2 impresso
  printf("\nConjunto 2: ");
  for(i = 0; i < 10; i++) {
    printf("%.0f ", conjuntoNR2[i]);
  }

  return 0;
}