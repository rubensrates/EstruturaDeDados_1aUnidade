/*
117.Leia uma matriz 4 x 4, imprima a matriz e retorne a localização (linha e a coluna)
do maior valor.
*/

#include <stdio.h>

int main() {
    int MquatroPorquatro[4][4];
    int maior = 0;
    int Lmaior, Cmaior; 

    
    for (int i = 0; i < 4; i++) { //a cada terminos de laço do For j, o For i cria a nova linha.
        for (int j = 0; j < 4;j++) {
            printf("Valor na posição [%d] x [%d]: ", i, j); // formando a linha e consequentemente a coluna.
            scanf("%d", &MquatroPorquatro[i][j]);  // Os "4 valores primeiros" valores inseridos "formam a 1a linha" e assim até sucessivamente.
            }
        }
    
	printf("\nA matrix 4 x 4:\n");
    for (int i = 0; i < 4; i++) { 
        for (int j = 0; j < 4; j++) { 
            printf("%d ", MquatroPorquatro[i][j]); // inversamente ao que foi feito, agora imprime na tela.
            if (MquatroPorquatro[i][j] > maior) {
                maior = MquatroPorquatro[i][j];
                Lmaior = i;
                Cmaior = j;
            }
        }
        printf("\n");
    }

    
    printf("\nO maior valor da matriz 4x4 eh: %d\n", maior);
    printf("E a localização na matriz 4x4 eh: %d x %d\n", Lmaior + 1, Cmaior + 1); //adicionado porque não estava trazendo a localização correta. Começa em 0x0 e por isso acontece. 

    return 0;
}
