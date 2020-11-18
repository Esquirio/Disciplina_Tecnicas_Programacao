#include <stdio.h>

int main()
{
    FILE *fptr; //Ponteiro para um arquivo
    short int ch;
    //Abre arquivo para gravar em modo texto
    fptr = fopen("arqtext.txt", "w");

    fputs("Ola meus alunos!\n", fptr);
    fputs("Estamos aprendendo a usar...\n", fptr);
    fputs("arquivos na linguagem C.\n", fptr);

    fclose(fptr); //Fecha o arquivo
    //Lê e imprime os dados do arquivo na tela
    system("TYPE arqtext.txt");
    return 0;
}//Fim da funcao main()

