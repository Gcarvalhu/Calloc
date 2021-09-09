#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	setlocale(LC_ALL,"portuguese");
	//Calloc possui a mesma função do malloc com a diferença de que ele "limpa" o espaço alocado, deixando os valores já existentes em zero até voce inserir algum dado
	int *p;
	
	//(tipo do retorno)calloc(n° de espaços,tamanhoDe(tipoEspaço))
	p = (int *)calloc(5,sizeof(int)); //Aqui foi alocado um tamanho de 4 bits(int) 
	
	int i;
	//p possui 5 espaços p[0] p[1] p[2] p[3] p[4]
	//por conta disso para retornar todos, foi colocado p+1 até o limite de 4 que é corresponde ao numero de espaçoes alocados
	for (i=0; i<5; i++){
		printf("Endereço de p%i = %d | Valor de p%i = %d\n", i, (p+i), i, *(p+i));
	}	

		
	return 0;
}
