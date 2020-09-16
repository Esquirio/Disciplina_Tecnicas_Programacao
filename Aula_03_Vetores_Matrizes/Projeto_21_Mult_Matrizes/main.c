#include <stdio.h> // Funções de I/O, etc.
#define M1L 2      // Num linhas mat_A
#define M1C 3      // Num colunas mat_A
#define M2L 3      // Num linhas mat_B
#define M2C 2      // Num colunas mat_B
/* Funcão: main() */
int main()
{
  float mat_a[M1L][M1C]={{.5,.5,.5},{.5,.5,.5}};
  float mat_b[M2L][M2C]={{2,2},{2,2},{2,2}};
  float mat_c[M1L][M2C];
  int somaprod = 0, lin, col;
  // Multiplicação de Matrizes
  for(lin=0; lin<M1L; lin++)
    for(col=0; col<M2C; col++){
      somaprod = 0;
      for(int i=0; i<M1L; i++)
        somaprod += mat_a[lin][i]*mat_b[i][col];
      mat_c[lin][col]=somaprod;
    }// Fim do for(int j=0; j<3; j++)
  // Imprime mat_c
  printf("matriz C:\n");
  for(lin=0; lin<M1L; lin++){
    for(col=0; col<M2C; col++)
      printf("%.1f ", mat_c[lin][col]);
    printf("\n");
  }// Fim do for(lin=0; lin<M1L; lin++)
  return 0;
}// Fim da função main()


