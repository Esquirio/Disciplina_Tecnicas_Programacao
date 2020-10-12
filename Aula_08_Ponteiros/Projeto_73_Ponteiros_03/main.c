#include <stdio.h>

int main()
{
    int i = 10; //Declarei uma variável
    int *pont;  //Declarei um ponteiro
    pont = &i;  //Inicilizei o ponteiro
    *pont = 5;  //Modifico o conteúdo da variável i

    printf("%d\t%d\t%p\n", i, *pont, pont);
    return 0;
}
