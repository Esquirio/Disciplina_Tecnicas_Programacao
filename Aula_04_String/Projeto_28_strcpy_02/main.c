#include <stdio.h>   // Funções de I/O, etc.
#include <string.h>  // Funçõe de strings
/* Funcão: main() */
int main() {
  char nome[] = "Jose";
  char prof[100];
  strcpy(prof, nome);
  printf("%s", prof);
  return 0;
}  // Fim da função main()
