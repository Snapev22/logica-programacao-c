#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>

//Lê 12 valores inteiros, ordena-os em ordem crescente utilizando `qsort` e exibe o vetor ordenado.

int comparar(const void *a, const void *b){
	return (*(int*)a - *(int *)b);
}

int main(void){
	
	int vetor[12];
	
	printf("Digite os valores do vetor: ");
	printf("\n");
	for(int i = 0;i < 12;i++){
		printf("Valor %d: ", i + 1);
		scanf("%d", &vetor[i]);
	}
	
	qsort(vetor, 12, sizeof(int), comparar);
	
	printf("\nVetor ordenado: ");
	
	for(int i = 0;i < 12;i++){
		printf("%d; ", vetor[i]);
	}
}

