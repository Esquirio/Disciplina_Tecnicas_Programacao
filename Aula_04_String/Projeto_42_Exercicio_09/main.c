#include <stdio.h>  // Fun��es de I/O
/* Fun��o main () */
int main(){
  char string_01[50], string_02[50];
  int i, tam[] = {0,0};
  printf("Digite uma string: ");
  gets(string_01); //L� a primeira string
  while(string_01[tam[0]]!='\0'){
    tam[0] ++;
  }//Fim do while(string_01[i]!='\0')
  printf("Digite outra string: ");
  gets(string_02); //L� a segunda string
  while(string_02[tam[1]]!='\0'){
    tam[1] ++;
  }//Fim do while(string_01[i]!='\0')
  // Imprime strings originais
  printf("\nString 01 original: %s\n", string_01);
  printf("String 02 original: %s\n\n", string_02);
  // Concatena as strings
  for(i=0; i<=tam[1]; i++)
    string_01[i+tam[0]] = string_02[i];

  printf("String 01 concatenada %s\n", string_01);
  printf("String 02 %s\n", string_02);
  return 0;
}// Fim da fun��o main()

/* // outra forma
for(int i=tam[0]; i < tam[0]+tam[1]; i++){
  string_01[i]= string_02[i - tam[0]];
}
*/

