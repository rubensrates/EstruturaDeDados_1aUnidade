#include <stdio.h>
#include <math.h>

int main()
{
    /*
    Questão 40.	Um corpo se move sobre uma reta e duplica sua velocidade, a cada segundo, durante os primeiros 10s. Seja 2 m/s a velocidade inicial. 
    Qual é a velocidade média nos primeiros 10s? Responda a essa pergunta elaborando um programa em C que simula a variação da velocidade e o 
    deslocamento do corpo, com intervalos de tempo variando entre 1 s e 0,1 s.
    */
    
    //a variação da velocidade = Δs/Δt, onde Δs é o deslocamento e Δt é o intervalo de tempo.
    //
    
    
    float Velocidade = 1.0, VelociadeMedia = 0.0, Espaco= 0.0, Tempo = 0.0;
    
    
    
    for(int s=1; s<=10; s++){
       Velocidade = 2*Velocidade;
       //printf("A velocidade do corpo no %do seg. eh de: %.2f m/s.\n", s,Velocidade);
    }
    Tempo = (1.0 - 0.1); // variação do tempo ∆t = tf – t0
    VelociadeMedia = Velocidade/10;
    Espaco = (VelociadeMedia / Tempo);
    printf("\n>>>> A velocidade média eh: %.2f m/s\n", VelociadeMedia);
    printf(">>>> O deslocamento eh: %.2f m", Espaco);

    return 0;
}