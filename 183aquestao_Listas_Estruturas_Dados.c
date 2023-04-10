/*
183. Fazer um programa em C para:
a. receber um nome do usuário na forma de string (máx. 100 caracteres).
b. mostrar o nome no formato de autor de referência bibliográfica (último
sobreNome no início, depois as iniciais dos demais nomes, eliminando
todas as palavras com dois caracteres ou menos).
Por exemplo, para o nome "Paulo Jose de Almeida Prado", o resultado
seria "Prado, P. J. A."

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void formatoAutor(char nome[]) {
    char sobreNome[100];
    char iniciais[100] = {0};
    char primeiroNome[100];
    char *pRefBiblio; 
    int i = 0;
    
    
    pRefBiblio = strtok(nome, " "); // dividir a string em substrings (strtok)
    while (pRefBiblio != NULL) { // 1o repetição para pegar o sobreNome e primeiro nome
        if (i == 0) {
            strcpy(primeiroNome, pRefBiblio);
            i++;
        } else {
            strcpy(sobreNome, pRefBiblio);
        }
        pRefBiblio = strtok(NULL, " ");
    }
    
    
    pRefBiblio = strtok(primeiroNome, " "); 
    while (pRefBiblio != NULL) { // 2o repetição para pegar as iniciais.
        if (strlen(pRefBiblio) > 2) {
            char temp[2] = {toupper(pRefBiblio[0]), '\0'};
			strncat(iniciais, temp, 1);
            strcat(iniciais, ". ");
        }
        pRefBiblio = strtok(NULL, " ");
    }
    
    pRefBiblio = strtok(nome, " ");
    while (pRefBiblio != NULL) {
        if (strcmp(pRefBiblio, sobreNome) != 0) {
            if (strlen(pRefBiblio) > 2) {
                char temp[2] = {toupper(pRefBiblio[0]), '\0'};
                strncat(iniciais, temp, 1);
                strcat(iniciais, ". ");
            }
        }
        pRefBiblio = strtok(NULL, " ");
    }
    
    
    printf("%s, %s\n", sobreNome, iniciais); // imprimir o resultado
}

int main() {
    char nome[100];
    printf("Informe o seu o nome completo: ");
    fgets(nome, 100, stdin);
    nome[strlen(nome)-1] = '\0'; // remove o caractere de nova linha
    formatoAutor(nome);
    return 0;
}