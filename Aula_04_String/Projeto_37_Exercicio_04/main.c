#include <stdio.h>  // Funções de I/O
#include <string.h> // Funções string
/* Função main () */
int main(){
  char string_01[50]; //Declara uma string
  int tam = 0, cont[5] ={0,0,0,0,0};
  printf("Digite uma frase: ");
  gets(string_01); //Lê a string
  //Define o tamanho da string
  tam = strlen(string_01);
  for(int i=0; i<tam; i++){
      if (string_01[i]=='a'||string_01[i]=='A')
          cont[0]++;
      if (string_01[i]=='e'||string_01[i]=='E')
          cont[1]++;
      if (string_01[i]=='i'||string_01[i]=='I')
          cont[2]++;
      if (string_01[i]=='o'||string_01[i]=='O')
          cont[3]++;
      if (string_01[i]=='u'||string_01[i]=='U')
          cont[4]++;
  }//Fim do for
  //Imprime resultado
  printf("Letras 'a's: %d\n", cont[0]);
  printf("Letras 'e's: %d\n", cont[1]);
  printf("Letras 'i's: %d\n", cont[2]);
  printf("Letras 'o's: %d\n", cont[3]);
  printf("Letras 'u's: %d\n", cont[4]);
  return 0;
}//Fim da função main()

