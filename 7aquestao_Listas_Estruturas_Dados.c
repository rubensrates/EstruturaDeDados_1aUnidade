#include <stdio.h>
#include <math.h>

int main()
{
    /*
    Questao 7. Fazer um programa que recebe um símbolo de operação do usuário (+, -, / ou *) e dois
    números reais. O programa deve retornar o resultado da operação recebida sobre
    estes dois números.

    */
    
    char operacao='N';
    float NumInformado1=0.0, NumInformado2=0.0, resultado=0.0;
    
    printf ("\nInforme a operação que deseja realizar: \n '+' para Soma.\n '-' para Subtração.\n '/' para Divisão.\n '*' para Multiplicação.\n"  );
    scanf("%c",&operacao);
    
    if(operacao == '+'){
      printf("\nInforme dois números reais:\n");
      scanf("%f%f", &NumInformado1, &NumInformado2);
      
      resultado = NumInformado1+NumInformado2;
      printf("\nResultado da soma dos números informados eh: %.2f",resultado);  
      
    }
    if(operacao == '-'){
      printf("\nInforme dois números reais:\n");
      scanf("%f%f", &NumInformado1, &NumInformado2);
      
      resultado = NumInformado1-NumInformado2;
      printf("\nResultado da subtracao dos números informados eh: %.2f",resultado);  
      
    }    
    if(operacao == '/'){
      printf("\nInforme dois números reais:\n");
      scanf("%f%f", &NumInformado1, &NumInformado2);
      if ((NumInformado1 != 0.0)&&(NumInformado2 != 0.0)){
            resultado = NumInformado1/NumInformado2;
            printf("\nResultado da divisao dos números informados eh: %.2f",resultado);  
      }else{
          printf("\n Nesta operacao voce deve informar números reais diferente de 0.\n");
      }
 
    }
    
    if(operacao == '*'){
      printf("\nInforme dois números reais:\n");
      scanf("%f%f", &NumInformado1, &NumInformado2);
      
      resultado = NumInformado1*NumInformado2;
      printf("\nResultado da multiplicacao dos números informados eh: %.2f",resultado);  
    }
    
    if ( (operacao !='+') && (operacao !='-') && (operacao !='/') && (operacao !='*') ){
      printf("\nVoce nao informou um dos simbolos das 4 operacoes mencionadas acima.\n");  
    }    
    

    return 0;
}