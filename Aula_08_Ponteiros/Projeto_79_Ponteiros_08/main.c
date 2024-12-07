#include <stdio.h>
int main() {
  int x = 4, y = 7;  // Declara e inicializa variaveis
  int *py, *px;      // Declara ponteiros
  printf("\nx eh %d, y eh %d.", x, y);
  px = &x;  // O ponteiro px apontar para var x
  py = &y;  // O ponteiro py apontar para var y
  px = py;  // O ponteiro px e py apontar para var y
  if (px == py) {
    printf("\nIguais!");
    printf("\npx %u py %u", px, py);
    printf("\n*px %d *py %d", *px, *py);
  }
  return 0;
}  // Fim da funcao main()
