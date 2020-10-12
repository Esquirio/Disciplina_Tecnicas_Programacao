#include <stdio.h>
int main()
{
   const int x = 5;
   int y;
   const int *const ptr = &x;

   printf( "%d\n", *ptr );
   *ptr = 7; /* erro: *ptr � const; n�o pode associar novo valor */
   ptr = &y; /* erro: ptr � const; n�o pode associar um novo endere�o */
   return 0;
}
