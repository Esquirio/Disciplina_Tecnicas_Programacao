#include <stdio.h>

int main() {
  int letra = 0, fim = 1;
  while (fim != -1) {
    printf("Digite um decimal de 0 a 127: ");
    scanf("%d", &letra);
    fflush(stdin);

    if (!(letra <= 31 || letra == 127)) {
      printf("Caractere: %3c\n", letra);
      printf("Decimal:   %3d\n", letra);
      printf("Hexa:      %3x\n", letra);
    }  // Fim do if()
    else
      printf("Caractere nao imprimivel!\n");

    printf("\nContinuar? -1 para sair e c para continar: ");
    scanf("%d", &fim);
    fflush(stdin);
    printf("\n\n");
  }  // Fim do while()
  return 0;
}  // Fim da funcao main()
