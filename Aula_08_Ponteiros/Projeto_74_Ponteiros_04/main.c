#include <stdio.h>
int main()
{
  int *p;     //Declarei o ponteiro
  int x = 10; //Declarei e inicializei a variável
  p = &x;     //Inicializei o ponteiro
  x = 20;     //Alterei o conteúdo da variável
  *p = 30;    //Alterei o conteúdo da variável
  printf("\nEndereco de x %u", p);
  printf("\nConteudo de x %d", *p);
  return 0;
}
