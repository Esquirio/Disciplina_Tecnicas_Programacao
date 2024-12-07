// Programa funcao
#include <stdio.h>  //Necessario para usar printf

// Prototipo da funcao
int soma(int a, int b);

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

// Funcao: int soma(int a, int b)
int soma(int a, int b) {
  int valor;
  valor = a + b;  // Calcula a soma dos numeros
  return valor;   // Retorna a variavel valor
}  // Fim da Funcao soma()
