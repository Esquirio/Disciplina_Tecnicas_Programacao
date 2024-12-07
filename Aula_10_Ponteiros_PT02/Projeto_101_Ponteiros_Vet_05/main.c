#include <stdio.h>
// Funcao mani()
int main() {
  int valor[2][4] = {1, 2, 3, 4, 5, 6, 7, 8};
  int *pont;
  pont = valor;
  for (int cont = 0; cont < 8; cont++) {
    printf("%d\t", *pont);
    pont++;
    if (cont == 3 || cont == 7) putchar('\n');
  }  // Fim do for
  return 0;
}  // Fim da main()
