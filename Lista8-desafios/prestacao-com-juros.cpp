#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#define TAXA 2

// Calcula o valor de uma prestação com juros simples, 
//com base no valor do produto, taxa fixa e quantidade de parcelas.
float prestacao(float valor, int qtdParcela){
	
	float prestacao = 0;
	
	prestacao = valor + (valor * ((float)TAXA / 100) * qtdParcela);
	
	return prestacao;
}	

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	float valor;
	int qtdParcela;
	
	printf("Informe o valor do produto: ");
	scanf("%f",&valor);
	printf("\nQual a quantidade de parcelas: ");
	scanf("%i",&qtdParcela);
	
	printf("Valor das prestações: %.2f", prestacao(valor,qtdParcela));
	
	
}
	
