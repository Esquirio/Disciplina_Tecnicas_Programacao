#include <stdio.h>  // Fun��es de I/O
/* Fun��o main () */
int main(){
  char string_01[50]; //Declara uma string
  int tam = 0;
  printf("Digite uma frase: ");
  gets(string_01); //L� a string
  //Calcula o tamanho da string
  while(string_01[tam]!='\0'){
    tam ++;
  }//Fim do while(string_01[tam]!='\0')
  printf("\nA string \"%s\" tem %d caracteres.\n", string_01, tam);
}//Fim da fun��o main()


