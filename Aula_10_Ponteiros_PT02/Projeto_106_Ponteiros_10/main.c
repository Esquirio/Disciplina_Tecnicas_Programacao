#include <stdio.h>
// Funcao main() 
int main() {
  char letra = 'a';
  char *ptr;
  char **ptrNivel2;
  char ***ptrNivel3;
  ptr = &letra;
  ptrNivel2 = &ptr;
  ptrNivel3 = &ptrNivel2;
  printf("%c", ***ptrNivel3);
  return 0;
}  // Fim da funcao main()
