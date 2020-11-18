#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *pArquivo;
    char str[] = "RAs\t\tNome dos Alunos\n", nome[10], ch = 's';
    long num_ra;
    pArquivo = fopen( "arquivo.txt", "w");
    fprintf(pArquivo,"%s", str);
    fclose(pArquivo);

     while (ch != 'n'){
        //Solicita o RA
        printf("Digite o RA do aluno: ");
        scanf("%i", &num_ra);
        fflush(stdin);
        //Solicita o nome
        printf("Digite o nome do aluno: ");
        gets(nome);
        fflush(stdin);

        //Adiciona o RA ao arquivo
        pArquivo = fopen( "arquivo.txt", "a");
        fprintf(pArquivo,"%i\t", num_ra);
        fprintf(pArquivo,"%s\n", nome);
        fclose(pArquivo);
        printf("Deseja continuar: s-sim ou n-nao: ");
        ch = getchar();
     }//Fim do while()

    return 0;
}//Fim da funcao main()
