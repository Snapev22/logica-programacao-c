#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

//L� um n�mero e uma pot�ncia, e calcula o valor do n�mero elevado a essa pot�ncia.
int main(void){
	
	int num, potencia, resultado;
	
	printf("Digite um numero qualquer: ");
	scanf("%i", &num);
	printf("\nDigite a potencia desejada: ");
	scanf("%i", &potencia);
	
	resultado = pow(num, potencia);
	printf("%i^ %i = %i", num,potencia, resultado);
	
}

