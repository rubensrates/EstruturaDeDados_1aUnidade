/*
150. Crie um programa que contenha um array contendo 5 elementos
inteiros. Leia esse array do teclado e imprima o endereço das posições
contendo valores pares.
*/

#include <stdio.h>

int main() {
  int vetor[5], i;
  printf("Digite 5 números inteiros:\n");

  for (i = 0; i < 5; i++) {
    scanf("%d", &vetor[i]);
  }

  printf("Endereços das posições com valores pares:\n");
  for (i = 0; i < 5; i++) {
    if (vetor[i] % 2 == 0) {
      printf("%p\n", &vetor[i]); // imprime o endereco de memoria e não o valor existente neste endereco. impressão do valor  ("%d\n", vetor[i]).  p e & foram trocados.
    }
  }

  return 0;
}