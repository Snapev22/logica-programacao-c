#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

//Calcula a velocidade média de um veículo a partir do espaço percorrido e do tempo gasto.

int main(void){
	float distancia;
	float tempoMinutos;
	
	printf("Digite a distancia percorrida em km: ");
	scanf("%f", &distancia);
	
	printf("Digite o tempo gasto em minutos: ");
	scanf("%f", &tempoMinutos);
	
	float tempoHoras = tempoMinutos / 60;

	float velocidadeMedia = distancia / tempoHoras;
	
	printf("Velocidade media = %.2f km/h", velocidadeMedia);	
}
