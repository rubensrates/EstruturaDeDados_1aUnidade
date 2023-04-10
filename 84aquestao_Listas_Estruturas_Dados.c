#include <stdio.h>

int main()
{
    /*84. Faça um programa que preencha um vetor de tamanho 100 com os 100
primeiros naturais que não são múltiplos de 7 ou que terminam com 7.*/

    int vMultiplosSete[99];
    int vMultiplosSeteNaoTerminamSete[99];
    int cont = 1;
    
    printf ("\nInformando os 100 primeiros números naturais que não são multiplos de 7 ou que terminam com 7\n"); 
    
        for(int i=0; cont < 100; i++){
        
            vMultiplosSete[i] = i;
            int Mult_Sete = vMultiplosSete[i] % 7;
            int Termina_em_Sete = vMultiplosSete[i] % 10; 
            
            if (Mult_Sete != 0 && Termina_em_Sete == 7) {
                
                vMultiplosSeteNaoTerminamSete[i] = vMultiplosSete[i];
                cont++ ;
                
                printf("\n%d\n", vMultiplosSeteNaoTerminamSete[i]);
            
            }
            
        }
        
printf("\nTotal de %d PRIMEIROS números NATURAIS e que NÃO SÃO MULTIPLOS DE 7 e que TERMINAM COM 7 .\n\n", cont);

    return 0;
}