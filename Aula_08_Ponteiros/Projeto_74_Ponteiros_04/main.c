#include <stdio.h>
int main()
{
  int *p;     //Declarei o ponteiro
  int x = 10; //Declarei e inicializei a vari�vel
  p = &x;     //Inicializei o ponteiro
  x = 20;     //Alterei o conte�do da vari�vel
  *p = 30;    //Alterei o conte�do da vari�vel
  printf("\nEndereco de x %u", p);
  printf("\nConteudo de x %d", *p);
  return 0;
}
