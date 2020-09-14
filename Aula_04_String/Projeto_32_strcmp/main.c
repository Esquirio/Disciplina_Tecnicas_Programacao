#include <stdio.h> // Funções de I/O, etc.
#include <string.h> // Funçõe de strings
/* Funcão: main() */
int main()
{
  char nome_01[10], nome_02[10], ch = 's';
  int tam_01, tam_02;

  do{
    //Digitando strings
    printf("Digite uma string: ");
    gets(nome_01);
    printf("Digite outra string: ");
    gets(nome_02);

    // Função strcmp
    if(strcmp(nome_01, nome_02)<0)
      printf("Strings diferentes e %s < %s. \n\n", nome_01, nome_02);
    else if(strcmp(nome_01, nome_02)>0)
      printf("Strings diferentes e %s > %s. \n\n", nome_01, nome_02);
    else
      printf("Strings iguais. \n\n");
    printf("Deseja continuar (s ou n)? ");
    ch = getchar();
    fflush(stdin);
  }while(ch!='n');
  return 0;
}// Fim da função main()
