#include <stdio.h>   // Funções de I/O
#include <string.h>  // Funções string
/* Função main () */
int main() {
  char string_01[50];  // Declara uma string
  int tam = 0, cont = 0;
  printf("Digite uma string: ");
  gets(string_01);  // Lê a string
  // Define o tamanho da string
  tam = strlen(string_01);
  for (int i = 0; i < tam; i++)
    if (string_01[i] == 'a' || string_01[i] == 'A') cont++;

  printf("Numeros de letras 'a's: %d\n\n", cont);
  return 0;
}  // Fim da função main()
