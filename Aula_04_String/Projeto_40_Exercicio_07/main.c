#include <stdio.h>  // Fun��es de I/O
/* Fun��o main () */
int main(){
  char string_01[50], ch; //Declara uma string
  int i = 0;
  printf("Digite uma string: ");
  gets(string_01); //L� a string
  printf("Digite um caractere: ");
  ch = getchar();
  while(!(string_01[i]==ch))
      i++;
  printf("\nO caractere %c aparece na posicao %d.\n", ch, i);
  return 0;
}//Fim da fun��o main()
