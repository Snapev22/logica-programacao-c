#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

// Calcula a soma acumulada de todos os números pares de 1 a 500 e imprime os valores parciais.
int main(void){
	
	int soma;
	
	for(int i =1;i<=500;i++){
		if(i % 2 == 0){
			soma+=i;
			printf("\n%i", soma);
		}
	}
}

