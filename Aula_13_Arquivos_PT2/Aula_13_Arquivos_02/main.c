#include <stdio.h>

int main() {
  char string[80];
  printf("Digite uma string: ");
  fgets(string, 80, stdin);
  printf("\n\nString digitada: ");
  fputs(string, stdout);
  return 0;
}  // Fim da funcao main()
