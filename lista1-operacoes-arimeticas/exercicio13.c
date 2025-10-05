#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

//Calcula a posição final de um corpo em Movimento Uniformemente Variado, com base no tempo informado.

int main(void){
	
	float tempo;
	float distanciaInicial = 2;
	float velocidadeInicial = 3;
	float aceleracao = 10;
	
	printf("Digite o tempo em segundos: ");
	scanf("%f", &tempo);
	
	float distanciaFinal = distanciaInicial + 
	                	   (velocidadeInicial * tempo) +  
							(0.5 * aceleracao * (tempo * tempo));			
	
	printf("Distancia percorrida = %.2f m/s", distanciaFinal);
}
