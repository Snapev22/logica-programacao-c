#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include<math.h>

#define TAMANHO 12

/*
Lê dois vetores de 12 posições, ordena cada um, soma os elementos correspondentes e 
ordena o vetor resultante.
*/
void registraVetor(int vetor[], int tamanho, char nome){
	
	int temp;

	printf("\nDigite os elementos do vetor %c: ", nome);
	for(int i = 0;i < tamanho;i++){
		printf("\n%iºPosição: ", i + 1);
		scanf("%i", &vetor[i]);
	}
	
	for(int i = 0;i < tamanho;i++){
		for(int j = 0;j < tamanho - i - 1;j++){
			if(vetor[j] > vetor[j+ 1]){
				temp = vetor[j];
				vetor[j] = vetor[j + 1];
				vetor[j + 1] = temp;
			}
		}
	}
}

void juntaVetor(int vetorA[], int vetorB[], int vetorC[], int tamanho){
	
	int temp;
	
	for(int i = 0;i < tamanho;i++){
		vetorC[i] = vetorA[i] + vetorB[i];
	}
	
		for(int i = 0;i < tamanho;i++){
		for(int j = 0;j < tamanho - i - 1;j++){
			if(vetorC[j] > vetorC[j+ 1]){
				temp = vetorC[j];
				vetorC[j] = vetorC[j + 1];
				vetorC[j + 1] = temp;
			}
		}
	}
	
	printf("Elementos do vetor C (Soma de A e B):\n");
	for(int i = 0;i < tamanho;i++){
		printf("\n%i",vetorC[i]);
	}
}

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int vetorA[TAMANHO];
	int vetorB[TAMANHO];
	int vetorC[TAMANHO];
	
	registraVetor(vetorA, TAMANHO, 'A');
	registraVetor(vetorB, TAMANHO, 'B');
	juntaVetor(vetorA,vetorB,vetorC,TAMANHO);
		
}






