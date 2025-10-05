#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

// Calcula e exibe a soma dos números de 1 até N, imprimindo o valor acumulado a cada passo.
double somatoria(){
	
	int soma;
	int n;
	
	printf("Digite um valor inteiro: ");
	scanf("%i", &n);
	
	for(int i = 1;i <= n;i++){
		soma+= i;
		printf("\n%i", soma);
	}
	printf("\nSoma de 1 até N: %i", soma);
	return soma;
}

int main(void){
	setlocale(LC_ALL, "Portuguese");
	somatoria();
}
