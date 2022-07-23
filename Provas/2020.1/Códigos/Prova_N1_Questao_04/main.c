#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char letra, texto[200], alfabeto[26];
    int tam = 0, cont=0;
    printf("Escreva seu texto:\n");
    scanf("%[^\n]", texto);
    tam = strlen(texto);

    for(int i=0; i<26; i++)
        alfabeto[i]=0;

    //Percorrendo a string
    for(int i=0; i<tam; i++){
        letra = texto[i];
        if(letra>='A'&& letra <='z')
            alfabeto[tolower(letra) - 'a']++;
    }//Fim for(int i=0; i<tam; i++)

    //Imprimi as ocorrências
    printf("\n\nOcorrencias:\n");
    printf("Letras:\t\t");
    for(char i='a'; i<='z'; i++)
        printf(" %2c", i);

    printf("\nN Vezes:\t");
    for(int i=0; i<26; i++)
        printf(" %2d", alfabeto[i]);

    putchar('\n');
    return 0;
}//Fim da funcao main()
