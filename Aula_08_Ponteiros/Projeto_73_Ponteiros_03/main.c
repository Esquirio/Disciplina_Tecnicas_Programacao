#include <stdio.h>

int main()
{
    int i = 10; //Declarei uma vari�vel
    int *pont;  //Declarei um ponteiro
    pont = &i;  //Inicilizei o ponteiro
    *pont = 5;  //Modifico o conte�do da vari�vel i

    printf("%d\t%d\t%p\n", i, *pont, pont);
    return 0;
}
