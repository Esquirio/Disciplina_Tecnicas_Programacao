#include <stdio.h>
#define TAM 3

typedef struct {
  char comida[20];
  float peso;
  int calorias;
} Dieta;

int main() {
  Dieta vetor[TAM];
  for (int i = 0; i < TAM; i++) {
    printf("Digite o nome da %da comida: ", i + 1);
    scanf("%[^\n]", vetor[i].comida);
    printf("Digite o peso(kg) da %da comida: ", i + 1);
    scanf("%f", &vetor[i].peso);
    printf("Digite a caloria da %da comida: ", i + 1);
    scanf("%d", &vetor[i].calorias);
    fflush(stdin);
    putchar('\n');
  }  // Fim do for

  printf("Valores digitados\n");
  printf("|\tComida\t|\tPeso(kg)\t|\tCalorias\t\n");
  for (int i = 0; i < TAM; i++) {
    printf("|\t%s\t|\t", vetor[i].comida);
    printf("%.3f\t\t|\t", vetor[i].peso);
    printf("%d\t|\n", vetor[i].calorias);
  }  // Fim do for
  return 0;
}  // Fim da main()
