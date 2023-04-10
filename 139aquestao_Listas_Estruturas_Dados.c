/*
139. Procure determinar quais valores são impressos ao final deste
programa. Confira sua resposta testando o programa no micro. Execute-o
passo a passo conferindo o valor das variáveis em cada momento.
*/

//      a) 5 5      b) 5 7 7        c)  3 2     d) 37 - 10 - 38 - B

#include <stdio.h>
/*
//a.
    void main()
{
 int a,b,*c;        // c foi manipulado para se tornar ponteiro de um int*
 a = 3;
 b = 4;
 c = &a;            // Foi colocado operador de referencia de memoria de *c (ponteiro c) para a variável a.    
 b++;
 *c = a+2;          // através do *c foi adicionado mais 2 a variável a, resultando 5 a variável a.
 printf("%d %d",a,b);  // 5 5
}


//b. 

void main()
{
 int a,b,*c;        // c foi manipulado para se tornar ponteiro de um int*
 a = 4;
 b = 3;
 c = &a;            // Foi colocado operador de referencia de memoria de *c (ponteiro c) para a variável a.    
 *c = *c +1;        // Toda operação em *c está sendo inserido na variável a.
 c = &b;            // Foi trocado operador de referencia de memoria de *c (ponteiro c) agora para a variável b. 
 b = b+4;           // Tu que é inserido na variável b reflete na variável c.
 printf("%d %d %d",a,b,*c); // 5 7 7
}


//c. 

void main()
{
 int a,b,*c,*d,*f;           // Existem 3 variáveis ponteiro do tipo int
 a = 4;
 b = 3;
 c = &a;                    //Fazendo referencia de memoria da variável a para a variavel ponteiro c. As variáveis a e c possuem 4.
 d = &b;                    //Fazendo referencia de memoria da variável b para a variavel ponteiro d. As variáveis b e d possuem 3.
 *c /= 2;                   // A variável ponteiro c recebeu a atribuíção composta ao qual dividido por 2 e o valor existente em c e a agora é possuem 2.
 f = c;                     // A variável f recebeu 2 da variável a através do ponteiro c.
 c = d;                     // A variável a recebeu 3 da variável ponteiro b através da também variaveis ponteiro c e d. A variavel a possui agora 3 
 d = f;                     // A variável ponteiro d recebeu agora 3 da variável ponteiro f. 
 printf("%d %d",*c,*d);     // 3 2
}
*/

/*
//d.

int calcula(int);
void main()
{
 int a,b,c;
 char d;
 a=1;b=2;c=3;d='A';
 a+=b*c;                                    // a variável a possui 2 mais a soma dela mesma e produto da variavel b para c que é 6. Resultado para variável a é 8
 d=(a>7)?d-1:d+1;                           // pela condição a variável d recebeu A1
 b = calcula(b);                            // 
 c = calcula(calcula(a));
 a = c++;
 printf("%d - %d - %d - %c\n",a,b,c,d);     // 37 - 10 - 38 - B
}
int calcula(int x)
{
 int i;
 if ((x=x*2)>5) return(x+3);
 for(i=0;i<10;i++)
 {
 if (i<5) continue;
 if (x>8) break;
 x+=2;
 }
 return(x);
}
*/

int main()
{
    printf("\nRespostas da questão 139:\n\na) 5 5      b) 5 7 7        c)  3 2     d) 37 - 10 - 38 - B \n\n***** No código existem as explicações.****** ");

    return 0;
}
