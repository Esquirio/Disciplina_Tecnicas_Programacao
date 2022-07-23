#include <stdio.h>

int main()
{
    int y, *p, x; //Declara duas variaveis e um ponteiro
    y = 0;        //atribuia conteúdo a variavel
    p = &y;       //Aponta o ponteiro para a variavel  p-> y
    x = *p;       //Copia o conteudo da variavel apontada pelo ponteiro para a outra variavel x = y
    x = 4;        //Altera o conteudo da variavel
    (*p)++;       //Incrementa o conteudo da variavel apontada pelo ponteiro y++ -> y =1
    x--;          //Decrementa a variavel x -> x = 3
    (*p) += x;    //Conteudo da variavel que o ponteiro aponta recebe o proprio conteudo mais c -> y = y + x -> y = 4
    printf ("y = %d\n", y); //Imprime o valor final de y
    return(0);
}//Fim da main()
