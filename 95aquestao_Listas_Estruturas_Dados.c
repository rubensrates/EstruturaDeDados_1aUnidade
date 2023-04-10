/*
95. Leia um vetor com 10 números reais, ordene os elementos deste vetor, e no
final escreva os elementos do vetor ordenado.
 */

#include <stdio.h>

int main() {
    float vetorDezNumeros[10];
    int i, j;
    float mudar;
    
    printf("\nDigite 10 numeros reais\n");
    
    for (i = 0; i < 10; i++) { // Recebe
        scanf("\n%f\n", &vetorDezNumeros[i]);
    }

    for (i = 0; i < 9; i++) { //Ordena 10 numeros
        for (j = i+1; j < 10; j++) {
            if (vetorDezNumeros[i] > vetorDezNumeros[j]) {
                mudar = vetorDezNumeros[i];
                vetorDezNumeros[i] = vetorDezNumeros[j];
                vetorDezNumeros[j] = mudar;
            }
        }
    }

    
    printf("Vetor de 10 numeros ordenados: "); 
    for (i = 0; i < 10; i++) {
        printf("%.0f ", vetorDezNumeros[i]);
    }
    printf("\n");

    return 0;
}