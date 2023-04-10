#include <stdio.h>

    float calculaValorDevido (float peso, float custo_fixo, float preco_kg, float largura_faixa, float desconto_faixa, float desconto_max){
        
        float ValorDevido;

        if (peso <= 100 ) {
            
            ValorDevido = ((preco_kg * peso)/1000) + custo_fixo;
            
            return ValorDevido; 
            
        }else if(peso > 100 && peso <= 200){
                
             ValorDevido = (((preco_kg * peso)/1000) + custo_fixo);
             float percentual =  ValorDevido * 0.1;
             ValorDevido = ValorDevido - percentual;
             
             return ValorDevido;
            
        }else if(peso > 200 && peso <= 300){
            
             ValorDevido = (((preco_kg * peso)/1000) + custo_fixo);
             float percentual =  ValorDevido * 0.2;
             ValorDevido = ValorDevido - percentual;
             
             return ValorDevido;
            
        }else if(peso > 300 && peso <= 400){

             ValorDevido = (((preco_kg * peso)/1000) + custo_fixo);
             float percentual =  ValorDevido * 0.3;
             ValorDevido = ValorDevido - percentual;
             
             return ValorDevido;
            
        }else if(peso > 400 && peso < 500){

             ValorDevido = (((preco_kg * peso)/1000) + custo_fixo);
             float percentual =  ValorDevido * 0.4;
             ValorDevido = ValorDevido - percentual;
             
             return ValorDevido;
            
        }else if(peso >= 500){

             ValorDevido = (((preco_kg * peso)/1000) + custo_fixo);
             float percentual =  ValorDevido * 0.5;
             ValorDevido = ValorDevido - percentual;
             
             return ValorDevido;
            
        }
               
    }    

        

int main()
{
    //float calculaValorDevido (float peso, float custo_fixo, float preco_kg, float, largura_faixa, float desconto_faixa, float desconto_max);

    // valor fixo por atendimento
    //Sobre valor adiciona-se 2o valor po KG
    //1os 100g considera-se o preço normal
    // >= 100g recebem 10% de desconto
    // os 100g seguintes +10% até 50% até 500g (200g 20%, 300g 30%, 400g 40% e >= 500g 50%)
    // função que calcula quanto um cliente deve pagar:
    //  Peso do prato e em certos parâmetros que não foram fixados e serem reconfigurados com o tempo ou modificados com a necessidade do estabelecimento
    // função = peso da comida, preço fixo, preço do kg em reais, faixa de desconto em gramas, o bonus do desconto progressivo e desconto máximo.
    // retorno deve ser o valor a ser cobrado pelo cliente, sem arredondamentos (não se preocupar com valores quebrados).
    
    //Variáveis do parametros do programa
    float peso = 0.0,  custo_fixo = 50.00,  preco_kg = 50.00,  largura_faixa = 5.0,  desconto_faixa = 0.0,  desconto_max = 0.0 ;
    
    char parametros = 'n', usarPrograma = 's';
    
    //Demais variáveis do programa
    float precocomidaCliente = 0.0;
    
    /*
    printf("\nUsar programa? (' s '- para Sim e ' n ' - para Não ) \n "); // Acesso ao programa
    scanf("%c", &usarPrograma); // Acesso ao programa
    
    printf("\n<<< Atenção, para começar a utilizar o programa configure os parametros a seguir. >>> \n "); // Acesso ao programa
    
    printf("\nQual o valor do custo fixo?\n");
    scanf("%f",&custo_fixo); 
    printf("\nQual o valor do preco por kg?\n");
    scanf("%f",&preco_kg);
    printf("\nQual o valor da largura da faixa?\n");
    scanf("%f",&largura_faixa); 
    printf("\nQual o valor do desconto da faixa?\n");
    scanf("%f",&desconto_faixa);         
    printf("\nQual o valor do desconto maximo?\n");
    scanf("%f",&desconto_max); 
    
    printf("\n\n **********************************\n\n");   
    */
    
    while (usarPrograma == 's'){ 
        
        printf("\nInforme o peso da comida do cliente:\n");
        scanf("%f", &peso);
        
        precocomidaCliente = calculaValorDevido (peso, custo_fixo, preco_kg, largura_faixa, desconto_faixa, desconto_max);
        
        printf("\n Valor a ser pago pelo cliente R$: %f", precocomidaCliente);
        
        //Continuar no acesso ao programa
        printf("\n Continuar usando programa? (' s '- para Sim e ' n ' - para Não )\n"); 
        scanf("%c", &usarPrograma); 
        
        printf("\n\n ****************próximo cliente******************\n\n");
        
    }
    
    return 0;    
    
}
    
    



