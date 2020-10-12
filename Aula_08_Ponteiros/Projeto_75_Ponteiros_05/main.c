#include <stdio.h>
int main(){
    int a, b;       //Declara variaveis
    int *p1, *p2;   //Declara ponteiros

    p1 = &a;        //Inicializa ponteiro p1
    p2 = &b;        //Inicializa ponteiro p2

    a = 10;         //Atribui conteudo a var a
    b = 5;          //Atribui conteudo a var b
    *p1 = a + 10;   //Corresponde a = a + 10;
    *p2 = *p1 - 5;  //Corresponde b = a - 5;

    printf("Primeira parte.\n");
    printf("a = %d, b = %d, *p1 = %d, *p2 = %d \n", a, b, *p1, *p2);

    a = b + 1;      //Operação normal
    b = *p1;        //Corresponde b = a

    printf("Segunda parte.\n");
    printf("a = %d, b = %d, *p1 = %d, *p2 = %d \n", a, b, *p1, *p2);

    p1 = p2;        //Igualdade de ponteiro
    a = *p1 + 1;    //Corresponde a = b + 1
    *p2 = *p1 + 1;  //Corresponde b = b + 1
    b = a + b;

    printf("Terceira parte.\n");
    printf("a = %d, b = %d, *p1 = %d, *p2 = %d \n", a, b, *p1, *p2);

    return 0;
}//Fim da Funaçào main()

