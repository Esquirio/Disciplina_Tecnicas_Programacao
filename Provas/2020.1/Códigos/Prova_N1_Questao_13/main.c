#include <stdio.h>
#include <string.h>

#define MAX 21

int main() {
  char palind[MAX], tam = 0, inicio = 0, fim = 0, cont = 0;
  printf("Digite uma string de ate 20 caracteres: ");
  scanf("%[^\n]", palind);
  fim = tam = strlen(palind);  // Calcula o tamanho da string

  while (inicio < fim - 1) {
    if (palind[inicio] == palind[fim - 1]) {
      inicio++;
      fim--;
      cont++;
    }  // Fim do if
    else
      break;
  }  // Fim do while()
  if (cont == tam / 2) {
    printf("A palavra %s eh palimdromo!", palind);
  }  // Fim do if
  else
    printf("A palavra %s nao eh palimdromo!", palind);

  return 0;
}  // Fim da funcao main()
