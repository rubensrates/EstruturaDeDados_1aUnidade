/*

106. Um cinema que possui capacidade de 20 lugares está sempre lotado.
Certo dia cada espectador respondeu a um questionário, onde constava:
• sua idade;
• sua opinião em relação ao filme, que podia ser: ótimo, bom,
regular, ruim ou péssimo.
Elabore um programa que, recebendo estes dados calcule e mostre:
a. a quantidade de respostas ótimo;
b. a diferença percentual entre respostas bom e regular;
c. a média de idade das pessoas que responderam ruim;
d. a porcentagem de respostas péssimo e a maior idade que utilizou esta opção;
e. A diferença de idade entre a maior idade que respondeu ótimo e a maior idade
que respondeu ruim.

*/


#include <stdio.h>

int main()
{
    
    int idade=0, opiniao=0, somaTodos=0, somaOtimo=0, somaBom=0, somaRegular=0, somaRuim=0, somaPessimo=0; 
    int MaiorIdadeOpiniaoOtimo=0,MaiorIdadeOpiniaoPessimo=0, MaiorIdadeOpiniaoRuim=0, diferencaIdadeOtimoRuim=0, MediaIdadeRespRuim=0;
    float PercRespTotal=0.0, PercRespOtimo=0.0, PercRespBom=0.0, PercRespRegular=0.0, PercRespRuim=0.0, PercRespPessimo=0.0, difPercBomRegular=0.0;
    
    
    
    for (int i=0; i<=5;){
    printf("\ninforme sua idade e opiniao em ao filme ['5'- p/ otimo, '4'- p/ Bom, '3'- p/Regular, 2- p/Ruim, 1- p/Péssimo]\n");
    scanf("%d\n%d", &idade, &opiniao);
    
        
        if(idade >=0 && idade <=150 && opiniao >=1 && opiniao <=5){
            
            i++;
            somaTodos++;
            
            if(opiniao==5){
                somaOtimo++;
                
                if(MaiorIdadeOpiniaoOtimo > idade){
                }else{
                    MaiorIdadeOpiniaoOtimo = idade;
                }
            }
            
            if(opiniao==4){
                somaBom++;
            }
            
            if(opiniao==3){
                somaRegular++;
            }
            
            if(opiniao==2){
                somaRuim++;
                MediaIdadeRespRuim += idade;
                
                if(MaiorIdadeOpiniaoRuim > idade){
                }else{
                    MaiorIdadeOpiniaoRuim = idade;
                }
                
            } 
            
            if(opiniao==1){
                somaPessimo++;
                
                if(MaiorIdadeOpiniaoPessimo > idade){
                }else{
                    MaiorIdadeOpiniaoPessimo = idade;
                }
            } 
            
        } else{
            printf("\n\n ***** Atenção: Por gentileza, Informar idade ou opição correta! ******\n\n");
        } 
        
    }
    
    MediaIdadeRespRuim = MediaIdadeRespRuim/somaRuim;
    
    PercRespBom = (somaBom*100)/somaTodos;
    PercRespRegular = (somaRegular*100)/somaTodos;
    difPercBomRegular = (PercRespBom - PercRespRegular);
    MediaIdadeRespRuim = MediaIdadeRespRuim/somaRuim;
    PercRespPessimo = (somaPessimo*100)/somaTodos;
    diferencaIdadeOtimoRuim = MaiorIdadeOpiniaoOtimo - MaiorIdadeOpiniaoRuim;
    
    if(difPercBomRegular < 0){
        difPercBomRegular = difPercBomRegular * -1;
    }
    
    if(diferencaIdadeOtimoRuim < 0){
        diferencaIdadeOtimoRuim = diferencaIdadeOtimoRuim * -1;
    }
    
    printf("\nA quantidade de respostas ótimo eh: %d\n", somaOtimo);
    printf("\nA diferença percentual entre respostas bom e regular eh: %.2f\n", difPercBomRegular);
    printf("\nA média de idade das pessoas que responderam ruim eh: %d\n", MediaIdadeRespRuim);
    printf("\nA porcentagem de respostas péssimo eh: %.2f e a maior idade que utilizou esta opção eh: %d\n", PercRespPessimo, MaiorIdadeOpiniaoPessimo);
    printf("\nA diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim eh: %d\n", diferencaIdadeOtimoRuim);
    
    return 0;
}
