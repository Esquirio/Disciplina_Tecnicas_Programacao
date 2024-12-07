#include <math.h>
#include <stdio.h>

typedef struct {
  float x;
  float y;
} Ponto;

int main() {
  Ponto dois_pontos[2];
  float distancia;
  for (int i = 0; i < 2; i++) {
    printf("Digite a Abscissa (x) do %do ponto: ", i + 1);
    scanf("%f", &dois_pontos[i].x);
    printf("Digite a Ordenada (y) do %do ponto: ", i + 1);
    scanf("%f", &dois_pontos[i].y);
  }  // Fim do for

  distancia = sqrt(pow(dois_pontos[0].x - dois_pontos[1].x, 2) +
                   pow(dois_pontos[0].y - dois_pontos[1].y, 2));

  printf("Distancia entre (%.1f, %.1f) e (%.1f, %.1f) eh %.2f.\n",
         dois_pontos[0].x, dois_pontos[0].y, dois_pontos[1].x, dois_pontos[1].y,
         distancia);
  return 0;
}  // Fim da funcao main()
