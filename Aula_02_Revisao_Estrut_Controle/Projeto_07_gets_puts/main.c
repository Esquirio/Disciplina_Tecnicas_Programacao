#include <stdio.h> // Necess�rio gets, puts e printf

/* Func�o: main() */
int main(){
  char nome[30], sobrenome[30]; // Declara��o de vari�veis
  printf("Digite seu nome: ");  // Imprime mensagem com puts
  gets(nome); // L� a string usando gets
  printf("Digite seu sobrenome: ");  // Imprime mensagem com puts
  gets(sobrenome); // L� a string usando gets

  // Imprime mensagem na tela
  puts("\n------------------------------\n");
  puts("Tenha uma boa aula!");
  puts(nome);
  puts(sobrenome);
  return 0;
}// Fim da fun��o main()

