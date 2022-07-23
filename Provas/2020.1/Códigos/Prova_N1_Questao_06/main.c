#include <stdio.h>

int main()
{
    /* Letra A
    int *number;
    printf("%d\n", *number);
    */

    /* Letra B
    float *realPtr;
    long *integerPtr;
    integerPtr = realPtr;
    */

    /* Letra C
    int *x,y;
    x=y;
    */

    /* Letra D
    char s[] = "este eh um array de caracteres";
    char *cont;
    cont = s;
    for (; *cont!='\0'; cont++)
        printf("%c ", *cont);
    */

    /* Letra E
    short *numPtr, result;
    void *genericPtr = numPtr;
    result = *genericPtr;
    */

    /* Letra F
    float x = 19.34;
    float *xPtr = &x;
    printf("%f\n", *xPtr);
    */

    /* Letra G
    char *s, a[]="Oi alunos!";
    s = a;
    printf("%s\n", s);
    */

    return 0;
}
