/*194. Escreva um programa que utilize uma função "replace" que aceita um
string como parâmetro e retorna um inteiro. A função substitui todos os espaços
do seu parâmetro pelo caracter '-', e retorna o número de substituições feitas.
O programa que a usa deverá testar a sua funcionalidade.*/

#include <stdio.h>
#include <string.h>

int replace(char texto[]) { 
    int cont = 0;
    for (int i = 0; i < strlen(texto); i++) {
        if (texto[i] == ' ') {
            texto[i] = '-';
            cont++;
        }
    }
    return cont;
}

int main() {
    char texto[100];
    printf("\nDigite um texto até 100 caracteres:\n\n");
    fgets(texto, 100, stdin);
    int cont = replace(texto);
    printf("\n\nO Texto modificado: %s\n", texto);
    printf("Quantidade de substituicoes: %d\n", cont);
    return 0;
}
