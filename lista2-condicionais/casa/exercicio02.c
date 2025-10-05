#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

// Calcula a distância entre um número digitado pelo usuário e um número-chave definido no programa.

int main(void){
	
	int num;
	int numChave = 20;
	
	printf("Digite um numero inteiro entre 0 e 100: ");
	scanf("%i", &num);
	
	int resposta = numChave - num;
	resposta =  abs(resposta);
	
	printf("Distancia em relacao ao numero chave: %i", resposta);
}
