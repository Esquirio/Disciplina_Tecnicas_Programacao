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
void PrintLivro(Livro livro);

int main(){
    Livro livro01;
    char resp;
    FILE *fptr;
    //Abre arquivo para leitura e gravacao. Adciona os dados no final
    if((fptr = fopen("Livros.Dat", "ab+")) == NULL) exit(1);

    do{
        livro01 = GetLivro();
        if(fwrite(&livro01, sizeof(Livro), 1, fptr)!=1) break;
        printf("Mais um livro (s/n): ");
        resp = getch();
    }while(resp != 'n' && resp != 'N');

    fflush(fptr);//Esvazia o conteudo do buffer de saida
    fseek(fptr,0,0); //Coloca o ponteiro no inicio do arquivo

    puts("\n\nLISTA DE LIVROS DO ARQUIVO");
    puts("==============================");

    while(fread(&livro01, sizeof(Livro), 1, fptr)==1)
        PrintLivro(livro01);

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

void PrintLivro(Livro livro){
    printf("\nTitulo: %s\n", livro.Titulo);
    printf("Autor: %s\n", livro.Autor);
    printf("No. Reg: %hd\n", livro.NumReg);
    printf("Preco: %.2f\n", livro.Preco);
}//Fim void PrintLivro(Livro livro)


