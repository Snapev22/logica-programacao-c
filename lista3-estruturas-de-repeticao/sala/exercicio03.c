#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

//Lê um número e imprime sua tabuada de multiplicação de 0 a 10.

,int main(void){
	
	int num;
	
	printf("Digite o numero para a tabuada: ");
	scanf("%i", &num);
	
	for(int i=0;i<=10;i++){
		printf("%i x %i = %i \n", i,num, (i * num));
	}	
}
