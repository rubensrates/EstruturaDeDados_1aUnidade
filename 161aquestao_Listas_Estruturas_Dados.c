/*
161. Escreva um programa que declare um array de inteiros e um ponteiro
para inteiros. Associe o ponteiro ao array. Agora, some mais um (+1) a cada
posição do array usando o ponteiro (use *).
*/

#include <stdio.h>

int main()
{
    
    int t = 0;
    printf("\ninforme o tamanho da array: ");
    scanf("%d",&t);
    
    int arr[t], *c=0;
    
    
    for (int i = 0; i < t; i++){
        c = &arr[i];
        *c += i;
        printf("\nInserido na posicao %d no endereço de memória %p o valor %d", i, &arr[i], arr[i]);
        
    }
    
    return 0;
}