#include <stdio.h>
void Troca(int *x, int *y);
int main()
{
   int a = 5, b = 1;
   Troca( &a, &b);
   printf("%d - %d", a, b);
   return ( 0 );
}//Fim da função main()

void Troca(int *x, int *y)
{
   int aux;
   aux = *x;
   *x = *y;
   *y = aux;
}//Fim da função Troca()
