#include <stdio.h> //Define FILE
#include <conio.h> //Para getch()

typedef struct Livro
{
    char Titulo[50];
    char Autor[50];
    short NumReg;
    double Preco;
}Livro;

Livro GetLivro(void);

int main(){
    Livro livro01;
    char resp;
    FILE *fptr;
    if((fptr = fopen("Livros.Dat", "wb")) == NULL) exit(1);

    do{
        livro01 = GetLivro();
        if(fwrite(&livro01, sizeof(Livro), 1, fptr)!=1) break;
        printf("Mais um livro (s/n): ");
        resp = getch();
    }while(resp != 'n' && resp != 'N');

    fclose(fptr);
    return 0;
}//Fim funcao main()

Livro GetLivro(void){
    Livro livro;
    printf("\nDigite o titulo: ");
    gets(livro.Titulo);
    printf("Digite o autor: ");
    gets(livro.Autor);
    printf("Digite o numero de registro: ");
    scanf("%hd", &livro.NumReg);
    rewind(stdin);
    printf("Digite o preco: ");
    scanf("%lf", &livro.Preco);
    rewind(stdin);
    return livro;
}//Fim Livro GetLivro(void)
