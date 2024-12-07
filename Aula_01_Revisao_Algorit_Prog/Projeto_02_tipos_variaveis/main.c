#include <locale.h>  // Necessário para usar setlocale
#include <stdio.h>   // Necessário para usar printf

int main() {
  int valor = 9;                    // Variavel do tipo inteiro
  char letra = 'P';                 // Variavel do tipo char
  float din = 124.32;               // Variavel do tipo float
  setlocale(LC_ALL, "Portuguese");  // Configura a língua portuguesa
  // Imprimindo as variáveis
  printf("Imprimindo um valor inteiro: %i.\n", valor);
  printf("Imprimindo um valor decimal: %f.\n", din);
  printf("Imprimindo um valor literal: %c.\n", letra);
  printf("Imprimindo uma string (sequência de caracteres): %s", "Pitágoras.\n");
  return 0;  // Retorna um valor inteiro
}  // Fim da função int main()
