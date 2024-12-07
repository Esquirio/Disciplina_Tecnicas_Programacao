#include <stdio.h>
#include <stdlib.h>
int main() {
  int dados[100];
  int i, qtdDados;
  printf("\nDigite a qtd de dados que ira utilizar: ");
  scanf("%d", &qtdDados);
  for (i = 0; i < qtdDados; i++) {
    printf("\nDigite valor de dados[%d] = ", i);
    scanf("%d", &dados[i]);
  }  // Fim for(i=0; i < qtdDados; i++)
  for (i = 0; i < qtdDados; i++) {
    printf("\nValor de dados[%d] = %d", i, dados[i]);
  }  // Fim for(i=0; i < qtdDados; i++)
  return 0;
}  // Fim da funcao main()
