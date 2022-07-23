#include <stdio.h>
#include <string.h>

int main()
{
    char string_01[20], string_02[20];
    int tam = 0;

    printf("Digite um string: ");
    gets(string_01);
    tam = strlen(string_01);
    for(int i=0; string_01[i]!='\0'; i++){
        string_02[tam-i-1] = string_01[i];
    }//Fim do for
    string_02[tam]='\0';

    printf("String_01: %s\n", string_01);
    printf("String_02: %s\n", string_02);
    return 0;
}//Fim da main()
