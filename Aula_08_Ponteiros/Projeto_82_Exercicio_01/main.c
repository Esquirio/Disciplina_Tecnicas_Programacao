#include <stdio.h> //Funcoes de I/O
/* Funcao main() */
int main(){
  char ch = 's', *pt;
  pt = &ch;
  printf("Digite um caractere: ");
  scanf(" %c", pt); //Le o caractere pelo ponteiro
  printf("\nConteudo da variavel: %c %c \n", ch, *pt);
  printf("\nEndereco da variavel: %d %d \n", &ch, pt);
  return 0;
}//Fim da funcao main()
