#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

// Verifica se o número digitado pelo usuário é par ou ímpar.
 
int main(void){
	
	int num;
	
	printf("Digite o número: ");
	scanf("%i", &num);
	
	if(num % 2 == 0){
		printf("O número %i e par!", num);
	}else{
		printf("O número %i e impar!", num);
	}
}
