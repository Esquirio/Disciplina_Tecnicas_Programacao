#include <stdio.h>  // Fun��es de I/O
#include <string.h> // Fun��es string
/* Fun��o main () */
int main(){
  //Declara��o de duas strings
  char string_01[20], string_02[20], ch = 's';
  do{
    printf("Digite uma string: ");
    gets(string_01); //L� a primeira string
    printf("Digite outra string: ");
    gets(string_02); //L� a segunda string
    //Testa strings
    if (strcmp(string_01,string_02)==0)
      printf("Strings iguais!\n\n");
    else{
      strcat(string_01, string_02);
      printf("String concatenada: %s\n\n", string_01);
    }// Fim do else
    printf("Deseja continuar? (s ou n): ");
    ch = getchar();
    fflush(stdin);
  }while(ch!='n');
  return 0;
}//Fim da fun��o main()

