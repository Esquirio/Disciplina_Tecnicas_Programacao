#include <stdio.h>  // Funções de I/O
/* Função main () */
int main() {
  char string_01[50];  // Declara uma string
  int tam = 0;
  printf("Digite uma frase: ");
  gets(string_01);  // Lê a string
  // Calcula o tamanho da string
  while (string_01[tam] != '\0') {
    tam++;
  }  // Fim do while(string_01[tam]!='\0')
  printf("\nA string \"%s\" tem %d caracteres.\n", string_01, tam);
}  // Fim da função main()
