#include <stdio.h>
int main() {
  int num_sor = 0, num_lido = 0, acerto = 0;
  // Use current time as seed for random generator
  srand(time(0));
  num_sor = rand() % 21;  // Sorteia um numero aleatorio de 0 a 20
  while (!acerto) {
    printf("Tente advinhar o numero: ");
    scanf("%d", &num_lido);
    if (num_lido < num_sor)
      printf("Numero digitado eh menor do que o sorteado!\n\n");
    else if (num_lido > num_sor)
      printf("Numero digitado eh maior do que o sorteado!\n\n");
    else {
      printf("Parabens voce acertou!\n\n");
      acerto = 1;
    }  // Fim do else
  }  // Fim do while()
  return 0;
}  // Fim da funcao main()
