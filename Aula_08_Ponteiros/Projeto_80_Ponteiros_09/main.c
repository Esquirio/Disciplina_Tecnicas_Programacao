#include <stdio.h>
int main()
{
    int x;
    int y;
    int * const ptr = &x;
    *ptr = 7; /* permitido: *ptr n�o � const */
    ptr = &y; /* erro: ptr � const; n�o pode associar um novo endere�o*/
    return 0;
}
