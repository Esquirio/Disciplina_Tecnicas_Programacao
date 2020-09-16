#include <stdio.h> // Funções de I/O, etc.
#define ML 8       // Num linhas mat
#define MC 5       // Num colunas mat
/* Funcão: main() */
int main()
{
  float mat[ML][MC], media=0.0;
  // Leitura das notas
  printf("Digite as notas:\n");
  for(int i=0; i<ML; i++){
    for(int j=0; j<MC-1; j++){
      printf("Nota %d do aluno %d: ", j, i);
      scanf("%f", &mat[i][j]);
      media+=mat[i][j];
    }// Fim do for(int j=0; j<MC-1; j++)
    mat[i][MC-1]=media/(float)(MC-1);
  }// Fim do for(int i=0; i<ML; i++)
  //Imprimindo a Matriz de notas
  printf("Aluno\tNota1\tNota2\tNota3\tNota4\tMedia\n");
  for(int i=0; i<ML; i++){
    printf("%d\t", i);
    for(int j=0; j<MC; j++)
      printf("%.1f\t", mat[i][j]);
    putchar('\n');
  }// Fim do for(int i=0; i<ML; i++)
  printf("\n\n");
  return 0;
}// Fim da função main()

