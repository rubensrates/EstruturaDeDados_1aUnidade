/*
128.Leia uma matriz 5 x 10 que se refere às
respostas de 10 questões de múltipla escolha, referentes a 5 alunos. Leia
também um vetor de 10 posições contendo o gabarito de
respostas que podem ser a, b, c ou d. Seu programa deverá comparar
as respostas de cada candidato com o gabarito e emitir um vetor denominado
resultado, contendo a pontuação correspondente a cada aluno.
*/


#include <stdio.h>
#include <stdlib.h>

int main() {
    
    
    char respostas_alunos[5][10], gabarito[10];
    int resultado[5];
    int i, j;
    for (i = 0; i < 5; i++) {
        printf("\nInforme a resposta do aluno %d, separadas por espaco:\n", i+1);
        for (j = 0; j < 10; j++) {
            scanf("%c\n", &respostas_alunos[i][j]);
        }
    }

    printf("\nInforme o gabarito:\n");
    for (i = 0; i < 10; i++) {
        scanf("%c\n", &gabarito[i]);
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 10; j++) {
            if (respostas_alunos[i][j] == gabarito[j]) {
                resultado[i]++;
            }
        }
    }

    printf("\nPontuacao dos alunos:\n");
    for (i = 0; i < 5; i++) {
        printf("Aluno %d: %d pontos\n", i+1, resultado[i]);
    }

    return 0;
}