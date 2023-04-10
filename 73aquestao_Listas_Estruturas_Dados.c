/*
73. Faça um programa que leia um vetor de 10 posições e verifique se existem
valores iguais e os escreva na tela.
*/

#include <stdio.h>

int
main ()
{
  float posicao[10], diferenciar;
  char resultado = 'N';

  printf ("\nInsira 10 números reais: \n");

  for (int i; i <= 9; i++){
      
      scanf ("%f", &posicao[i]);
      

      if (diferenciar != posicao[i]){
              resultado = 'N';
          }


	}

      if (resultado == 'S'){
	  printf ("\n\nForam informados números iguais!");
          
      }else{
	    printf("\n\nNão foram informados números iguais!");
          
      }

      
      return 0;
    }
