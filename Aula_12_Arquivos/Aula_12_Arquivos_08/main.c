#include <stdio.h>

int main(){
    FILE *pArquivo; //Ponteiro para um arquivo
    pArquivo = fopen("arquivo.txt","r");
    //Verifica se o arquivo foi aberto para leitura
    if( pArquivo != NULL)    {
        char string [50],string2 [50];
        int valor;
        //Lê informações do arquivo
        fscanf(pArquivo,"%s %s %d",string, string2, &valor);
        printf("%s\n%s\n%d\n",string, string2, valor);//Imprime na tela
    }//Fim do if
    else{
        printf("Nao foi possivel abrir o arquivo.");
        exit(1);
    }//Fim do else
    fclose(pArquivo);
    return 0;
}//Fim da funcao main()

