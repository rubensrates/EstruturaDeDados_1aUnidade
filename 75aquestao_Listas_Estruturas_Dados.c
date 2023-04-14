/* Faça um programa que leia um vetor de 5 posições para números reais e, 
depois, um código inteiro. Se o código for zero, finalize o programa; se for 1, 
mostre o vetor na ordem direta; se for 2, mostre o vetor na ordem inversa. Caso 
o código for diferente de 1 e 2 escreva uma mensagem informando que o código 
é invalido.
*/



#include <stdio.h>

int main()
{
    float vetor[5] ;
    int inteiro=-1;
    
    
    for(int i=0;i<5;i++){
        printf("\ninforme numeros reais:\n");
        scanf("%f",&vetor[i]);
    }
    
    while(inteiro!=0){
        printf("\nInforme:\n'1'-Mostra o vetor na ordem direta;\n'2'-Mostra o vetor na ordem inversa\n'0'-Finaliza o programa\n\n");
        scanf("%d",&inteiro);
        printf("\n\n");
        
        if (inteiro==1){
            
            for(int i=0;i<5;i++){
                
                printf("%f ",vetor[i]);
                
            }
            
        }
        
        if (inteiro==2){
            
            for(int i=4;i>=0;i--){
                
                printf("%f ",vetor[i]);
                
            }
            
        }
        
        printf("\n\n");
    }
    
    printf("Você saiu do programa!");
    
    return 0;
}
