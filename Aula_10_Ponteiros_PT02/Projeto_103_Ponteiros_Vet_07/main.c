#include <stdio.h>
//Funcao main() 
int main(){
  const char *naipes[4] = { "Copas", "Ouros", "Paus","Espadas"};

  for(int i=0; i<4; i++){
    printf("%s\t",naipes[i]);
  }//Fim do for()
  return 0;
}//Fim da funcao main()
