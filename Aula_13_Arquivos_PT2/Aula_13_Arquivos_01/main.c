#include <stdio.h>

int main(){
   FILE *pArquivo;
   char str[] = "Dados iniciais!\n", str_2[] = "Dados finais!\n";
   pArquivo = fopen("arquivo.txt", "w");
   fprintf(pArquivo,"%s", str);
   fclose(pArquivo);

   system("Pause");
   pArquivo = fopen("arquivo.txt", "a");
   fprintf(pArquivo,"%s", str_2);
   fclose(pArquivo);

   printf("Dados gravados.\n\n");
   //Lê e imprime os dados do arquivo na tela
   system("TYPE arquivo.txt");
   return(0);
}//Fim da funcao main()
