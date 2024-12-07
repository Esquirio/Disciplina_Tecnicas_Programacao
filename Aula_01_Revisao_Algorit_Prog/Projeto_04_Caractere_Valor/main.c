#include <stdio.h>  // Necessário para usar printf

/* Função:    int main()*/
int main() {
  char letra;                       // Cria variável char com o valor A
  printf("Digite um caractere: ");  // Interação com o usuário
  scanf("%c", &letra);              // Recebe um valor do teclado
  printf("\n%c", letra);            // Imprime o caractere
  printf("\n%d", letra);            // Imprime em decimal
  printf("\n%x", letra);            // Imprime em hexadecimal
  printf("\n%o", letra);            // Imprime em octal
  return 0;                         // Retorna um valor inteiro
}  // Fim da função int main()
