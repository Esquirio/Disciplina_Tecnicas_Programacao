#include <stdio.h>  // Funções de I/O, etc.
/* Funcão: main() */
int main() {
  // Declaração de variáveis
  char mensagem[] = {78, 111, 119, 32, 72, 105, 114, 105, 110, 103, 0};
  int i;
  for (i = 0;; i++) {
    printf("%c", mensagem[i]);
    if (mensagem[i + 1] == 0) break;
  }  // Fim do for
  printf("\n\n");
  return 0;
}  // Fim da função main()
