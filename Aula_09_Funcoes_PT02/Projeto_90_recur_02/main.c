#include <stdio.h>
// Prototipo da funcao
double Fatorial(int n);
// Funcao main()
int main(void) {
  int numero = 0;
  double f = 0.0;
  printf("\nDigite o numero que deseja calcular o fatorial: ");
  scanf("%d", &numero);
  // chamada da fun��o Fatorial
  f = Fatorial(numero);
  printf("Fatorial de %d = %.0lf.\n", numero, f);
  return 0;
}  // Fim int main(void)

// Fun��o recursiva que calcula o fatorial
double Fatorial(int n) {
  double vfat;
  if (n <= 1)
    return (1);  // Caso base: se n <= 1 retorna 1
  else {
    // Chamada recursiva
    vfat = n * Fatorial(n - 1);
    return (vfat);
  }  // Fim else
}  // Fim double Fatorial(int n)
