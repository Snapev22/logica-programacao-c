#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

#define TAM  5

//// Lê dois vetores de tamanho TAM e os junta em um único vetor de tamanho 2*TAM, exibindo os valores combinados.
void preencherVetores(int vetor[], int tamanho, char nome){
	printf("Digie os valores do vetor %c\n");
	for(int i = 0;i < tamanho;i++){
		printf("\n%i: ", i+1);
		scanf("%i", &vetor[i]);
	}
}

void juntaVetor(int vetorA[], int VetorB[], int vetorC[], int tam){
	for(int i = 0;i < tam; i++){
		vetorC[i] = vetorA[i];
	}
	
	for(int i = 0;i < tam;i++){
		vetorC[i + tam] = VetorB[i];
	}
	
	printf("\nVetor C (junção):\n");
    for (int i = 0; i < TAM * 2; i++) {
        printf("C[%d] = %d\n", i, vetorC[i]);
    }
} 

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int vetorA[TAM];
	int vetorB[TAM];
	int vetorC[TAM * 2];
	
	preencherVetores(vetorA,TAM, 'A');
	preencherVetores(vetorB, TAM, 'B');
	juntaVetor(vetorA,vetorB,vetorC,TAM);
}
