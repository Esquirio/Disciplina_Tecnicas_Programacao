#include <stdio.h>
// Prototipo da funcao 
int Quadrado(int num);

int main() {
  int resultado;
  resultado = Quadrado(3);  // Chamada da funcao
  printf("O valor do quadrado de 3 eh: %d", resultado);
  return 0;
}  // Fim da funcao int main()

int Quadrado(int num) {
  int resp;
  resp = num * num;
  return resp;
}  // Fim da funcao int quadrado()
