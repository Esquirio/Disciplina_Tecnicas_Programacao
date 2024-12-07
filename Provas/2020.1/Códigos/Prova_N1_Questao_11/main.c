#include <stdio.h>
#define MAX 20
int main() {
  int vetor[MAX] = {0}, num = 0, cont = 0, duplicado = 0;
  for (int i = 0; i < MAX; i++) {
    duplicado = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if (i == 0) {
      vetor[i] = num;
      cont++;
    }  // Fim do if
    else {
      for (int j = 0; j < cont; j++) {
        if (num == vetor[j]) duplicado = 1;
      }  // Fim do for
      if (!duplicado) {
        vetor[cont] = num;
        cont++;
      }  // Fim do if
    }  // Fim do else
  }  // Fim do for()

  printf("Imprimindo valores nao duplicados:\n");
  for (int i = 0; i < cont; i++) printf("%d  ", vetor[i]);
  return 0;
}  // Fim da funcao main()
