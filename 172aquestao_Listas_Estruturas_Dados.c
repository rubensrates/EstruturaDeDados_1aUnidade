/*
172. Fazer um programa para receber dois números do usuário, chamar a
função e mostrar se os números são iguais. Além disso, mostrar sua soma e
seu produto.
*/


#include <stdio.h>
#include <string.h>

void DoisNumeros(int a, int b, int* soma, int* produto, char* igualdade) { // criado os ponteiros para repassarem o valor as suas respectivas variáveis da main
    
    if (a == b){
        strcpy(igualdade, "Os números são iguais."); //usando a função strcpy para copiar a string para o endereço de memória apontado pelo ponteiro
    }
    
    *soma = a + b;
    *produto = a * b; 
}

int main() {
    int a = 0, b = 0, soma = 0, produto = 0;
    char igualdade[]="Os números não são iguais." ; //VLA (que é uma Array de Tamanho Variado) que recebe seu tamanho pela mensagem (argumento ou valor) que a incializa.
    
    printf("\nInforme 2 numeros interios:\n");
    scanf("%d %d", &a, &b);

    DoisNumeros(a, b, &soma, &produto, igualdade); // já contém o endereço de memória do primeiro elemento do array (VLA), que é exatamente o que a função DoisNumeros espera como argumento.

    printf("\n%s\nA soma deles é %d.\nO produto é %d\n", igualdade, soma, produto);

    return 0;
}