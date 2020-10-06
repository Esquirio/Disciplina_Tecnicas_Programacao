#include <stdio.h>
//Prototipo da funcao
int Fatorial(int n);
//Funcao main()
int main()
{
    int num = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    printf("O Fatorial de %d eh %d\n", num, Fatorial(num));
    return 0;
}//Fim da main()
//Funcao Fatorial()
int Fatorial(int n){
    int fat = 1;
    if (n > 0)
        for ( ; n>0; n--)
            fat *= n;
    return fat;
}//Fim da funcao Fatorial()

