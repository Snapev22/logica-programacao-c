#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

//Lê um número menor ou igual a 50 e imprime a sequência multiplicando por 3 até ultrapassar 250.
int main(void){
	
	int num;
	int resultado;
	
	printf("Digite um numero inteiro menor ou igual 50: ");
	scanf("%i", &num);
	
	
	if(num < 50){
		resultado = num;
		while(resultado <= 250){
			printf("\n%i", resultado);
			resultado *= 3;
		}
	}else {
		printf("Numero invalido tente novamente");
	}	
}
