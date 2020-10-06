#include <stdio.h>
//Prototipo de funcoes
void incremento();
void incremento2();

int x = 0; // variavel global
//Funcao main()
int main(){
    int x = 0;
    printf("de x dentro da funcao main: %d\n", x);
    incremento();
    printf("de x dentro da funcao main: %d\n", x);
    incremento2();
    return 0;
}//Fim da funcao main()
//Funcao incremento1()
void incremento(){
    int x;
    x = 1;
    x++;
    printf("de x dentro da funcao incremento: %d\n", x);
}//Fim da funcao incremento1()
//Funcao incremento2()
void incremento2(){
  x++;
  printf("de x dentro da funcao incremento2: %d\n", x);
}//Fim da funcao incremento2()


