#include <stdio.h>
int main()
{
    int x;
    int y;
    int * const ptr = &x;
    *ptr = 7; /* permitido: *ptr não é const */
    ptr = &y; /* erro: ptr é const; não pode associar um novo endereço*/
    return 0;
}
