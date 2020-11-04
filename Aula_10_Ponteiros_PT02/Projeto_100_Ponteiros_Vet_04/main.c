#include <stdio.h>
//Funcao main() 
int main(){
  int vetor[] = {1,2,3,4,5};
  int *ptrVetor;
  for(int i=0; i<5; i++){
    printf("%d\t",*(vetor+i));
  }//Fim do for()
  printf("\n");
  ptrVetor=vetor;
  for(int i=0; i<5; i++){
    printf("%d\t",ptrVetor[i]);
  }//Fim do for()
  return 0;
}//Fim da funcao main()
