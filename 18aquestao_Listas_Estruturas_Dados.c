#include <stdio.h>
#include <math.h>

int main()
{
    /*
    Questão 18.Fazer um programa para mostrar os 15 primeiros termos da série de Fibonacci.
    */
    
    
    int i, antecessor1 = 1, antecessor2 = 1, somaAntecessor = 0 ;
    
    printf( "\n Os 15 primeiros termos da série de Fibonacci:\n\n %d, %d, ", antecessor1, antecessor2 );
    for(i = 3; i <= 14; i++){
      
      somaAntecessor = antecessor1 + antecessor2;
      printf("%d, ",somaAntecessor);
      
      antecessor1 = antecessor2;
      antecessor2 = somaAntecessor;
        
    }   
    
      somaAntecessor = antecessor1 + antecessor2;
      printf("%d.",somaAntecessor);

    return 0;
}