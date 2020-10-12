#include <stdio.h>
//Prototipo da funcao
int Maior(int x, int y, int z);
//Funcao int main()
int main()
{
    int num1 = 0, num2 = 0, num3 = 0;
    printf("Digite 3 inteiros: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    printf("Maior eh: %d\n", Maior(num1, num2, num3));
    return 0;
}//Fim da funcao int main()
//Funcao int Maior()
int Maior(int x, int y, int z)
{
    int max = x;
    if(y > max)
        max = y;
    if(z > max)
        max = z;
    return max;
}//Fim da funcao int Maior()



