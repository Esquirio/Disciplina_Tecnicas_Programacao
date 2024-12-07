#include <stdio.h>
#include <string.h>

int main() {
  char nome[30];
  char *p = "Estudando ponteiros";
  // p pode ser usado como uma string
  // strcpy(destino, origem)
  strcpy(nome, p);
  printf("%s %s\n", nome, p);
  return 0;
}  // Fim da função main()
