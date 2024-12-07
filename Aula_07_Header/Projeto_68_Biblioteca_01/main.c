#include <stdio.h>

#include "minha_bibli.h"

// Funcao: int main()
int main() {
  int num1, num2, resultado;
  // Solicita os valores pelo usuario
  printf("Digite o primeiro numero: ");
  scanf("%d", &num1);
  printf("Digite o segundo numero: ");
  scanf("%d", &num2);
  // Chamada a funcao soma
  resultado = soma(num1, num2);
  // Imprime o resultado
  printf("A soma dos numeros eh: %d", resultado);
  return 0;  // Retorna um valor inteiro
}  // Fim da funcao int main()
