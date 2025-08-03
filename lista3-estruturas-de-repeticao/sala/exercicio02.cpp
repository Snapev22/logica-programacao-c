#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

//Calcula e exibe a soma de todos os números de 1 a 100.
int main(void){

	int soma;

	for(int i=1;i<=100;i++){
		soma+=i;	
	}
	printf("%i", soma);
}
}
