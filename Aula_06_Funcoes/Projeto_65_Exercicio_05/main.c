#include <stdio.h>
//Prototipo da funcao
int Pares(int n);
//Funcao int main()
int main()
{
    int num = 0, result = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    result = Pares(num);
    printf("Entre 1 e %d tem %d numeros pares.\n", num, result);
    return 0;
}//Fim da funcao main()
//Funcao float Pares()
int Pares(int n){
    int cont=0;
    for( ; n>0; n--)
        if(!(n%2))
           cont++;
    return cont;
}//Fim da funcao Pares()


