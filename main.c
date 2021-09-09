#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	setlocale(LC_ALL,"portuguese");
	//Calloc possui a mesma fun��o do malloc com a diferen�a de que ele "limpa" o espa�o alocado, deixando os valores j� existentes em zero at� voce inserir algum dado
	int *p;
	
	//(tipo do retorno)calloc(n� de espa�os,tamanhoDe(tipoEspa�o))
	p = (int *)calloc(5,sizeof(int)); //Aqui foi alocado um tamanho de 4 bits(int) 
	
	int i;
	//p possui 5 espa�os p[0] p[1] p[2] p[3] p[4]
	//por conta disso para retornar todos, foi colocado p+1 at� o limite de 4 que � corresponde ao numero de espa�oes alocados
	for (i=0; i<5; i++){
		printf("Endere�o de p%i = %d | Valor de p%i = %d\n", i, (p+i), i, *(p+i));
	}	

		
	return 0;
}
