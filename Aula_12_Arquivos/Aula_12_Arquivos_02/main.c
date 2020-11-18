#include <stdio.h>

int main()
{
    FILE *fptr; //Ponteiro para um arquivo
    short int ch;
    //Abre arquivo para ler em modo texto
    fptr = fopen("arqtext.txt", "r");
    //Lê um caractere do arquivo
    while((ch=fgetc(fptr))!=EOF)
        //Imprime o caractere na tela
        printf("%c", ch);
    fclose(fptr); //Fecha o arquivo
    return 0;
}//Fim da funcao main()
