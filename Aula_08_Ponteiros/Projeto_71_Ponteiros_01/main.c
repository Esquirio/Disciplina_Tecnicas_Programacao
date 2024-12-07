#include <stdio.h>
int main() {
  int conta = 1;
  float salario = 40000.0;
  char ch = 'a';

  printf("\nEndereco de conta eh: %x ", &conta);
  printf("\nEndereco de salario eh: %x ", &salario);
  printf("\nEndereco de ch: %x ", &ch);
  return 0;
}
