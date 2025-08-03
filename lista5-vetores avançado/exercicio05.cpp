#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>

/*
Lê 2 valores no vetor A e 3 no vetor B, une os dois no vetor C, ordena C e exibe os valores.
*/
int comparar(const void *a, const void *b){
	return (*(int*)a - *(int *)b);
}

int main(void){
	
	int vetorA[2];
	int vetorB[3];
	int vetorC[5];
	int aux []	= {2,3,4};
	
	printf("Digite os valores do vetor A: ");
	printf("\n");
	for(int i = 0;i < 2;i++){
		printf("Valores %d: ", i + 1);
		scanf("%d",&vetorA[i]);
	}
	
	printf("Digite os valores do vetor B: ");
	printf("\n");
	for(int i = 0;i < 3;i++){
		printf("Valores %d: ", i + 1);
		scanf("%d",&vetorB[i]);
	}
	
	for(int i = 0;i < 2;i++){
			vetorC[i] = vetorA[i];
	}
	for(int i = 0;i < 3;i++){
		vetorC[i + 2] = vetorB[i];
	}
	qsort(vetorC, 5, sizeof(int), comparar);
	printf("Valores do vetor C");
	printf("\n");
	for(int i = 0;i < 5;i++){
		printf("%d; ", vetorC[i]);
	}
}
