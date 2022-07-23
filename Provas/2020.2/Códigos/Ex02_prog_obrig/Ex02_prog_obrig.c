#include <stdio.h>
#include <stdlib.h>
int main(){
    char texto[200], alfabeto[26], parada = '1';
    int tam = 0, cont=0;
    printf("Escreva seu texto, digite ~ para parar:\n");
    do{
      parada = fgetc(stdin);

      if(parada == '~'){
        texto[tam] = '\0';
        tam++;
      }
      else if (parada == 13){
        putchar('\n');
      }
      else{
        texto[tam] = parada;
        tam++;
      }
    }while(parada != '~');
    for(int i=0; i<26; i++)
        alfabeto[i]=0;

    while(texto[cont]!='\0'){
        if(texto[cont]>='A'&& texto[cont]<='Z' || texto[cont]>='a'&& texto[cont]<='z')
            alfabeto[(texto[cont] | ' ') - 'a']++;
        cont++;
    }//Fim do while(texto[cont]!='\0')

    //Imprimi as ocorrências
    printf("\n\nOcorrencias:\n");
    printf("Letras:\t\t");
    for(char i='a'; i<='z'; i++)
        printf(" %2c", i);

    printf("\nN Vezes:\t");
    for(int i=0; i<26; i++)
        printf(" %2d", alfabeto[i]);

    putchar('\n');
    return 0;
}//Fim da funcao main()
