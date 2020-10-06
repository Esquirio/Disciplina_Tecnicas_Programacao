#include <stdio.h>
//Variável Glocal
int num;
//Prototipo de funcoes
int func(int a, int b);

//Funcao main()
void main(){
	int first = 0, sec = 50;
	num = 10;
	printf("Confira! Valor de num = %d\n",num);
	num += func(first, sec);  /* Qual e o valor de num, first e sec */
             	             /* antes e depois da atribuicao?      */
	printf("\n\nConfira! Valor de num = %d\n",num);
}//Fim da funcao main()

//Funcao int func()
int func(int a, int b){
	a = (a+b)/2;  /* Qual e o valor de a apos a atribuicao? */
	num -= a;
	printf("\n\nConfira! Valor de num = %d\n",num);
	return a;
}//Fim da funcao int func()

