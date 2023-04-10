#include <stdio.h>
#include <math.h>

int main()
{
    /*
    Questão 29.Fazer um programa no qual o usuário vai entrando sucessivamente com valores positivos. 
    Quando o usuário entrar com um valor negativo o programa para de pedir valores e calcula a média dos valores já fornecidos.
    */
    
    int ContaValorPositivo = 0;
    float ValorPositivo = 0.0, SomaValorPositivo = 0.0, MediaValorPositivo=0.0;
    
    printf ("\nInforme valores: \n\n");
    scanf ("%f", &ValorPositivo);
    
    while (ValorPositivo >= 0.0) {
        
        SomaValorPositivo = SomaValorPositivo + ValorPositivo;
        ContaValorPositivo++ ;
        
        printf ("\nInforme valores: \n\n");
        scanf ("%f", &ValorPositivo);

    }
    MediaValorPositivo = (SomaValorPositivo/ContaValorPositivo);
    printf("\n<<< A média de valores positivos: %.2f >>>", MediaValorPositivo);

    return 0;
}