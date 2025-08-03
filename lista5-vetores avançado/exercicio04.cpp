#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>

/*
Lê dois vetores A e B com 12 valores cada, ordena ambos, 
soma elemento a elemento e armazena o resultado no vetor C, também ordenado.
*/

int comparar(const void *a, const void *b){
	return (*(int*)a - *(int *)b);
}

int main(void){
	
	int vetorA[12];
	int vetorB[12];
	int vetorC[12];

	printf("Digite os valores do vetor A: ");
	printf("\n");
	for(int i = 0;i < 12;i++){
		printf("Valores %d: ", i + 1);
		scanf("%d",&vetorA[i]);
	}
	
	printf("\nDigite os valores do vetor B: ");
	printf("\n");
	for(int i = 0;i < 12;i++){
		printf("Valores %d: ", i + 1);
		scanf("%d",&vetorB[i]);
	}
	
	qsort(vetorA, 12, sizeof(int), comparar);
	qsort(vetorB,12,sizeof(int),comparar);
	
	for(int i = 0;i < 12;i++){
		vetorC[i] = vetorA[i] + vetorB[i];		
	}
	
	qsort(vetorC,12,sizeof(int),comparar);
	
	printf("Valores da matriz C: ");
	printf("\n");
	for(int i = 0;i < 12;i++){
		printf("%d; ",vetorC[i]);
	}
}
