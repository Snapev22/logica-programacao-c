#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

//Lê um número e uma potência, e calcula o valor do número elevado a essa potência.
int main(void){
	
	int num, potencia, resultado;
	
	printf("Digite um numero qualquer: ");
	scanf("%i", &num);
	printf("\nDigite a potencia desejada: ");
	scanf("%i", &potencia);
	
	resultado = pow(num, potencia);
	printf("%i^ %i = %i", num,potencia, resultado);
	
}

