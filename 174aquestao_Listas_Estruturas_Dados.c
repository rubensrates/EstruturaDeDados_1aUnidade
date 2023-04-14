/*174. Fazer um programa que receba 3 números do usuário, chame a função 
e mostre os números ordenados.*/


#include <stdio.h>

void ordenar(int numero1, int numero2, int numero3, int vetor[3]){
    
    if((numero1<numero2)&&(numero1<numero3)&&(numero2<numero3)){
        vetor[0]=numero1;
        vetor[1]=numero2;
        vetor[2]=numero3;
    }else if((numero2<numero1)&&(numero2<numero3)&&(numero1<numero3)){
        vetor[0]=numero2;
        vetor[1]=numero1;
        vetor[2]=numero3;
    }else if((numero3<numero1)&&(numero3<numero2)&&(numero1<numero2)){
        vetor[0]=numero3;
        vetor[1]=numero1;
        vetor[2]=numero2;
    }else if((numero1<numero2)&&(numero1<numero3)&&(numero3<numero2)){
        vetor[0]=numero1;
        vetor[1]=numero3;
        vetor[2]=numero2;
    }else if((numero2<numero1)&&(numero2<numero3)&&(numero3<numero1)){
        vetor[0]=numero2;
        vetor[1]=numero3;
        vetor[2]=numero1;
    }else if((numero3<numero1)&&(numero3<numero2)&&(numero2<numero1)){
        vetor[0]=numero3;
        vetor[1]=numero2;
        vetor[2]=numero1;        
    }    
    
    
}


int main()
{
    int numero1=0 , numero2=0 , numero3=0 , vetor[3]; 
    
    printf("\nInforme 3 números:\n");
    scanf("%d%d%d",&numero1,&numero2,&numero3);
    
    ordenar(numero1,numero2,numero3,vetor);
    
    printf("\n Os números em ordem crescente: \n");
    
    for(int i=0;i<3;i++){
        printf("%d ", vetor[i]);
    }
    
    return 0;
}