#include <stdio.h>

void Mensagem (void);

int main () {
  Mensagem();
  printf ("\tDiga de novo:\n");
  Mensagem();
  return 0;
}//Fim da fun��o main()

void Mensagem (void){
  printf ("Ola! Eu estou vivo.\n");
}//Fim da fun��o Mensagem()
