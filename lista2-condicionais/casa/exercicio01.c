#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

// Verifica se o n�mero digitado pelo usu�rio � par ou �mpar.
 
int main(void){
	
	int num;
	
	printf("Digite o n�mero: ");
	scanf("%i", &num);
	
	if(num % 2 == 0){
		printf("O n�mero %i e par!", num);
	}else{
		printf("O n�mero %i e impar!", num);
	}
}
