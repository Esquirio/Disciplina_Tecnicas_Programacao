#include <stdio.h>

int main(){
   FILE *pArquivo;
   char str[] = "Teste da funcao fwrite!\n";
   pArquivo = fopen( "arquivo.txt", "w");
   fwrite(str, sizeof(str), 1, pArquivo);
   fclose(pArquivo);

   printf("Dados gravados.\n\n");
   //Lê e imprime os dados do arquivo na tela
   system("TYPE arquivo.txt");
   return(0);
}//Fim da funcao main()


