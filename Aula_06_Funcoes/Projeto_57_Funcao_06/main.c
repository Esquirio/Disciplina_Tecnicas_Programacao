#include <locale.h>
#include <stdio.h>
// Funcao soma()
int soma() {
  int a = 3, b = 4;  // Variaveis locais a funcao soma()
  return a + b;
}  // Fim da funcao soma()
// Funcao sub()
int sub() {
  int a = 3, b = 4;  // Variaveis locais a funcao sub()
  return a - b;
}  // Fim da funcao sub()
// Funcao main()
int main() {
  setlocale(LC_ALL, "Portuguese");
  int a = 0, b = 0;  // Variaveis locais a funcao main()
  a = soma();
  b = sub();
  printf("A soma é: %d\n", a);
  printf("A subtação é: %d\n", b);
  return 0;
}  // Fim da funcao main()
