#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

// Calcula a dist�ncia entre um n�mero digitado pelo usu�rio e um n�mero-chave definido no programa.

int main(void){
	
	int num;
	int numChave = 20;
	
	printf("Digite um numero inteiro entre 0 e 100: ");
	scanf("%i", &num);
	
	int resposta = numChave - num;
	resposta =  abs(resposta);
	
	printf("Distancia em relacao ao numero chave: %i", resposta);
}
