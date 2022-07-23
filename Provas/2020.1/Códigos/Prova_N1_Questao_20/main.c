#include <stdio.h>
#include <string.h>

int main()
{
    char str_01[10]="", str_02[10]="",str_03[10]="",str_04[10]="", str_ent[40], str_sai[40];
    int cont = 1, indice = 0, tam = 0;
    printf("Digite 4 palavras de uma vez com espaco entre elas: ");
    scanf("%[^\n]", str_ent);
    fflush(stdin);
    //Separando strings
    for(int i=0; i<=strlen(str_ent); i++){
        if (cont == 1){
            if(str_ent[i]==' ' || str_ent[i]=='\0'){
                str_01[indice] = '\0';
                cont = 2;
                indice = 0;
            }//Fim do if
            else{
                str_01[indice] = str_ent[i];
                indice++;
            }
        }//Fim do if
        else if (cont == 2){
            if(str_ent[i]==' ' || str_ent[i]=='\0'){
                str_02[indice] = '\0';
                cont = 3;
                indice = 0;
            }//Fim do if
            else{
                str_02[indice] = str_ent[i];
                indice++;
            }
        }//Fim do if
        else if (cont == 3){
            if(str_ent[i]==' ' || str_ent[i]=='\0'){
                str_03[indice] = '\0';
                cont = 4;
                indice = 0;
            }//Fim do if
            else{
                str_03[indice] = str_ent[i];
                indice++;
            }
        }//Fim do if
        else if (cont == 4){
            if(str_ent[i]==' ' || str_ent[i]=='\0'){
                str_04[indice] = '\0';
                cont = 5;
                indice = 0;
            }//Fim do if
            else{
                str_04[indice] = str_ent[i];
                indice++;
            }
        }//Fim do if

    }//Fim do for

    //Juntando strings
    strcpy(str_sai,str_01);
    strcat(str_sai," ");
    strcat(str_sai,str_02);
    strcat(str_sai," ");
    strcat(str_sai,str_03);
    strcat(str_sai," ");
    strcat(str_sai,str_04);

    printf("String de entrada: %s\n", str_ent);
    printf("String 01: %s\n", str_01);
    printf("String 02: %s\n", str_02);
    printf("String 03: %s\n", str_03);
    printf("String 04: %s\n", str_04);
    printf("String de saida: %s\n\n", str_sai);


    printf("Hello world!\n");
    return 0;
}//Fim da main()

