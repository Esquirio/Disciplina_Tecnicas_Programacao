#include <stdio.h>
int main() {
  const int x = 5;
  int y;
  const int *const ptr = &x;

  printf("%d\n", *ptr);
  *ptr = 7; /* erro: *ptr é const; não pode associar novo valor */
  ptr = &y; /* erro: ptr é const; não pode associar um novo endereço */
  return 0;
}
