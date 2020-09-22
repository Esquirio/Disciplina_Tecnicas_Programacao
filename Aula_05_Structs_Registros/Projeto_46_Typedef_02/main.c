#include <stdio.h>  // Fun��es de I/O
struct Aluno       //In�cio da defini��o da estrutura
{
    int nmat;      //N�mero da matr�cula
    float nota[3]; //Tr�s notas
    float media;   //M�dia
    char status [10];
};                 //Fim da defini��o

typedef struct Aluno tAluno;
/* Fun��o main() */
int main()
{
    tAluno Jose;
    Jose.nmat = 4460;
    Jose.nota[0] = 7.5;
    Jose.nota[1] = 5.2;
    Jose.nota[2] = 8.4;

    Jose.media = (Jose.nota[0]+Jose.nota[1]+Jose.nota[2])/3.0;

    if(Jose.media>=7)
        strcpy(Jose.status, "Aprovado");
    else
        strcpy(Jose.status, "Reprovado");

    printf("Matricula:\t%d\n", Jose.nmat);
    printf("Media:\t\t%.2f\n", Jose.media);
    printf("Status:\t\t%s\n", Jose.status);
    return 0;
}//Fim da fun��o main()
