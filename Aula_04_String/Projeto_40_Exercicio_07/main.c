#include <stdio.h>  // Funções de I/O
/* Função main () */
int main() {
  char string_01[50], ch;  // Declara uma string
  int i = 0, tam = 0;
  printf("Digite uma frase: ");
  gets(string_01);  // Lê a string
  // Calcula o tamanho da string
  while (string_01[tam] != '\0') tam++;
  printf("Digite um caractere: ");
  ch = getchar();
  while (string_01[i] != ch) {
    if (string_01[i] == '\0') break;
    i++;
  }  // Fim do while

  if (i == tam)
    printf("O caractere nao esta na frase!");
  else
    printf("\nO caractere %c aparece na posicao %d.\n", ch, i);
  return 0;
}  // Fim da funcao main()
