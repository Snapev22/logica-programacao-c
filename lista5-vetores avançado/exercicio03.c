#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>

/*Lê 15 valores no vetor A, calcula o fatorial de cada valor positivo e armazena 
no vetor B, que é então ordenado e exibido.
*/

int comparar(const void *a, const void *b){
	return (*(int*)a - *(int *)b);
}

int fatorial(int n){
	int resultado = 1;
	for(int i = 2;i <= n;i++){
		resultado *= i;
	}
	return resultado;
}

int main(void){
	
	int vetorA[15];
	int vetorB[15];
	
	printf("Digite os valores do vetor a: ");
	printf("\n");
	for(int i = 0;i < 15;i++){
		printf("Valor %d:", i + 1);
		scanf("%d",&vetorA[i]);
	}
	
	for(int i = 0;i < 15;i++){
		
		if(vetorA[i] > 0){
			vetorB[i] = fatorial(vetorA[i]);
		}
	}
	
	qsort(vetorB,15,sizeof(int), comparar);
	printf("Valores da matriz B: ");
	printf("\n");
	for(int i = 0;i < 15;i++){
		printf("%d; ",vetorB[i]);
	}
}

