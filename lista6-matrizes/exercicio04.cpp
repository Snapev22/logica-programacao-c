#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>

/*
Lê dois vetores com 4 elementos cada (A e B), e preenche a 
matriz 4x2 (C) com: o dobro dos valores de A e os valores de B subtraídos de 5.
*/
int main(void){
	
	int vetorA[4];
	int vetorB[4];
	int vetorC[4][2];
	
	printf("Digite os valores do vetor A: ");
	printf("\n");
	for(int i = 0;i < 4;i++){
		printf("%dº valor: ", i+1);
		scanf("%d",&vetorA[i]);
	}
	
	printf("Digite os valores do vetor B: ");
	printf("\n");
	for(int i = 0;i < 4;i++){
		printf("%dº valor: ", i+1);
		scanf("%d",&vetorB[i]);
	}
	
	for(int i = 0;i < 4;i++){
		for(int j = 0;j < 2;j++){
			if(j == 0){
				vetorC[i][j] = vetorA[i] *2;
			}else{
				vetorC[i][j] = vetorB[i] - 5;
			}
		}
	}
	printf("\n");
	printf("Matriz C: ");
	printf("\n");
	for(int i = 0;i < 4;i++){
		for(int j = 0;j < 2;j++){
			printf("%d; ", vetorC[i][j]);
		}
		 printf("\n");
	}
}

