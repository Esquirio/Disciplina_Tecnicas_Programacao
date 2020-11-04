#include <stdio.h>
//Funcao main() 
int main(){
    int numero=10;
    int *ptr;
    int **ptrNivel2;
    ptr = &numero;
    ptrNivel2 = &ptr;
    printf("%d",**ptrNivel2);
    return 0;
}//Fim da funcao main()
