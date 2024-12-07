#include <stdio.h>
#include <time.h>

const float TOTAL = 100.0;

int main() {
  int dado_01 = 0, dado_02 = 0, soma = 0;

  int lanc[2][11] = {{2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12},
                     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};
  float perc[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

  // Use current time as seed for random generator
  srand(time(0));

  // Sorteio dos dados
  for (int i = 0; i < (int)TOTAL; i++) {
    dado_01 = (rand() % 6) + 1;
    dado_02 = (rand() % 6) + 1;
    soma = dado_01 + dado_02;
    lanc[1][soma - 2]++;
  }  // Fim do for(int lin=0; lin<100; lin++)

  // Cálculo de Porcentagens
  for (int col = 0; col < 11; col++) perc[col] = lanc[1][col] / TOTAL;

  // Impressão formatada
  printf("Somas sorteados: \n");
  for (int lin = 0; lin < 2; lin++) {
    if (lin == 0)
      printf("Soma:\t");
    else
      printf("Qtdade:\t");

    for (int col = 0; col < 11; col++) printf("%d\t", lanc[lin][col]);
    putchar('\n');
  }  // Fim do for(int lin=0; lin<100; lin++)

  // Imprimir porcentagens
  printf("%%:\t");
  for (int col = 0; col < 11; col++) printf("%.2f\t", perc[col]);
  putchar('\n');
  return 0;
}  // Fim funcao main()
