#include <stdio.h>
// Prototipo da funcao
void Fibonacci(int n);
// Funcao main()
int main() {
  int num = 0;
  printf("Digite um numero inteiro: ");
  scanf("%d", &num);
  Fibonacci(num);
  return 0;
}  // Fim da main()
// Funcao Fibonacci()
void Fibonacci(int n) {
  int fib_n1 = 1, fib_n2 = 1, aux = 0;
  if (n == 1)
    printf("Sequencia de Fibonacci eh: %d ", fib_n1);
  else {
    printf("Sequencia de Fibonacci eh: %d %d ", fib_n1, fib_n2);
    for (int i = 3; i <= n; i++) {
      aux = fib_n1 + fib_n2;
      fib_n1 = fib_n2;
      fib_n2 = aux;
      printf("%d ", fib_n2);
    }  // Fim do for
  }  // Fim do else
}  // Fim Funcao Fibonacci()
