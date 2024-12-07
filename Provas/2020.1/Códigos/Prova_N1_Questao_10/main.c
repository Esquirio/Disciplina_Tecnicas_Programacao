#include <stdio.h>

int main() {
  float pi = 0.0, num = 4.0, denom = 1.0;
  int casa_dec = 0;

  printf("Digite o numero de casa decimais: ");
  scanf("%d", &casa_dec);
  printf("\t\tTabela com o valores\n");
  for (int i = 1; i <= casa_dec; i++) {
    if (i % 2 != 0) {
      pi += num / denom;
    }  // Fim do if
    else {
      pi -= 4.0 / denom;
    }  // Fim do else
    denom += 2.0;
    printf("Valor de PI\tQtde de termos da serie\n");
    printf("%.10f\t%d\n", pi, i);
  }  // Fim do for
  return 0;
}  // Fim do main()
