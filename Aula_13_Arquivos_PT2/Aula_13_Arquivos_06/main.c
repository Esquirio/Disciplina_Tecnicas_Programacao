#include <stdio.h>

int main(){
    long posicao_atual;
    char str[]="Teste";
    FILE *fptr;
    //Abre arquivo para leitura e gravacao. Adciona os dados no final
    if((fptr = fopen("teste.Dat", "ab+")) == NULL) exit(1);

    fwrite(str, sizeof(str), 1, fptr);
    posicao_atual = ftell(fptr);
    printf("Primeira gravacao posicao do ponteiro: %ld\n", posicao_atual);

    fwrite(str, sizeof(str), 1, fptr);
    posicao_atual = ftell(fptr);
    printf("Segunda gravacao posicao do ponteiro: %ld\n", posicao_atual);

    fwrite(str, sizeof(str), 1, fptr);
    posicao_atual = ftell(fptr);
    printf("Terceira gravacao posicao do ponteiro: %ld\n", posicao_atual);

    fclose(fptr);
    return 0;
}//Fim funcao main()


