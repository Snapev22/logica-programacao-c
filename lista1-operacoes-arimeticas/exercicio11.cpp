#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

//Troca os valores entre duas variáveis sem utilizar uma terceira variável auxiliar (desafio).

int main(void){
	float a ;
	float b;
	
	printf("Digite o valor de A: ");
	scanf("%f", &a);
		
	printf("Digite o valor de B: ");
	scanf("%f", &b);
	
	printf("Valor inicial de A: %.2f", a); 
	printf("\nValor inicial de B: %.2f", b); 
	
 	a = b + a;
	b = a - b; 
	a = a - b;  
	
	printf("\nValor atual de A: %.2f", a); 
	printf("\nValor atual de B: %.2f", b); 
}
