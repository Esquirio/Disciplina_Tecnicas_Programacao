#include <stdio.h> // Necessário gets, puts e printf

/* Funcão: main() */
int main(){
  char nome[30], sobrenome[30]; // Declaração de variáveis
  printf("Digite seu nome: ");  // Imprime mensagem com puts
  gets(nome); // Lê a string usando gets
  printf("Digite seu sobrenome: ");  // Imprime mensagem com puts
  gets(sobrenome); // Lê a string usando gets

  // Imprime mensagem na tela
  puts("\n------------------------------\n");
  puts("Tenha uma boa aula!");
  puts(nome);
  puts(sobrenome);
  return 0;
}// Fim da função main()

