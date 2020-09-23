#include <stdio.h>  // Funções de I/O
#include <string.h> // Funções string
/* Função main() */
int main(){
  struct Aluno       //Início da definição da estrutura
  {
      int nmat;      //Número da matrícula
      float nota[3]; //Três notas
      float media;   //Média
      char status [10];
  };

  struct Aluno Jose;

  Jose.nmat = 4460;
  Jose.nota[0] = 7.5;
  Jose.nota[1] = 5.2;
  Jose.nota[2] = 8.4;

  Jose.media = (Jose.nota[0]+Jose.nota[1]+Jose.nota[2])/3.0;

  if(Jose.media>=7)
      strcpy(Jose.status, "Aprovado");
  else
      strcpy(Jose.status, "Reprovado");

  printf("Matricula:\t%d\n", Jose.nmat);
  printf("Media:\t\t%.2f\n", Jose.media);
  printf("Status:\t\t%s\n", Jose.status);
  return 0;
}//Fim da função main()

