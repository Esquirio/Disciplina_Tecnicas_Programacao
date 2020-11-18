#include <stdio.h>

int main()
{
    FILE *fptr; //Ponteiro para um arquivo
    char ch;
    //Abre arquivo para gravar em modo texto
    fptr = fopen("arqtext.txt", "w");
    //Lê um caractere do teclado
    while((ch=getche())!='\r')
        //Grava o caractere no arquivo
        fputc(ch, fptr);
    fclose(fptr); //Fecha o arquivo
    return 0;
}//Fim da funcao main()

