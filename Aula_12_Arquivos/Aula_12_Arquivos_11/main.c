#include <stdio.h>

typedef struct Pessoa
{
    char nome[100];
    int idade;
    char sexo;
}Pessoa;

void gravaStruct(FILE *ptrArq, Pessoa *pessoa1);
void leStruct(FILE *ptrArq, Pessoa *pessoa1);

int main(){
    Pessoa jose;
    strcpy(jose.nome,"Jose");
    jose.idade=30;
    jose.sexo='m';
    FILE *ptrArq;
    gravaStruct(ptrArq,&jose);
    Pessoa joao;
    leStruct(ptrArq,&joao);
    return 0;
}//Fim da funcao main()

void gravaStruct(FILE *ptrArq, Pessoa *pessoa1){
    ptrArq = fopen("teste2.txt","wb");
    if(ptrArq!= NULL){
        if(fwrite(pessoa1,sizeof(Pessoa),1,ptrArq)==1){
            printf("Gravacao realizada\n");
        }//Fim do if(fwrite(pessoa1,sizeof(Pessoa),1,ptrArq)==1)
    }//Fim do if(ptrArq!= NULL)
    fclose(ptrArq);
}//Fim do void gravaStruct(FILE *ptrArq, Pessoa *pessoa1)

void leStruct(FILE *ptrArq, Pessoa *pessoa1){
    ptrArq = fopen("teste2.txt","rb");
    if(ptrArq!= NULL){
        if(fread(pessoa1,sizeof(Pessoa),1,ptrArq)==1){
            printf("Leitura realizada com sucesso\n");
        }//FIm do if(fread(pessoa1,sizeof(Pessoa),1,ptrArq)==1)
    }//Fim do if(ptrArq!= NULL)
    fclose(ptrArq);
}//Fim do void leStruct(FILE *ptrArq, Pessoa *pessoa1)
