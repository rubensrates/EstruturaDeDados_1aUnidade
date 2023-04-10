/*205. Cebolinha é um personagem de história em quadrinhos que quando fala,
troca o R pelo L. Escreva uma função cebolinhaString, que recebe uma string
s e um buffer (um vetor capaz de armazenar outra string com o mesmo tamanho
de s) e armazene no buffer uma versão de s com todos os R's trocados por L's,
exceto quando o R é a última letra de uma palavra. Dois R's seguidos devem
ser substituídos por um único L. Lembre-se de manter as letras maiúsculas e
minúsculas como no texto original.*/


#include <stdio.h>
#include <ctype.h>
#include <string.h>

void cebolinhaString(char s[], char buffer[]) {
    int i = 0; // índice atual na string s
    int j = 0; // índice atual no buffer

    while (s[i] != '\0') {
        char c = s[i]; // caractere atual

        if (tolower(c) == 'r') {
            // se for o último caractere da string ou o próximo não for uma letra
            if (s[i+1] == '\0' || !isalpha(s[i+1])) {
                buffer[j] = c;
                j++;
            } else if (tolower(s[i+1]) != 'r') {
                buffer[j] = 'l';
                j++;
            }
            i++;
        } else {
            buffer[j] = c;
            i++;
            j++;
        }
    }

    buffer[j] = '\0'; // terminador de string
}

int main(){
    
    char s[200];
    char buffer[200];
 
    printf("\nInsira o texto:\n\n");
    
    //strcpy(s, "Brasil, meu Brasil Brasileiro, terra quente e gostosa, Vou canta-lo em meus versos. O Brasil samba que dá, terra do nosso senhor!");
    
    fgets(s, 200, stdin);
 
    cebolinhaString(s, buffer);
 
    printf("\nTexto Cebolinha:\n\n%s\n\n", buffer);
    
    return 0;
}