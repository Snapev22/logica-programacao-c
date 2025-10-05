#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>

/*
Lê dois vetores com 7 elementos cada (A e B) e armazena os valores 
em uma matriz 7x2 (C), onde cada linha é composta pelos elementos correspondentes de A e B.
*/
int main(void){
	
	int vetorA[7];
	int vetorB[7];
	int vetorC[7][2];
		
	printf("Digite os valores da matriz A: ");
	printf("\n");
	for(int i =0; i < 7; i++){
		printf("\n%dº valor: ", i + 1);
		scanf("%d",&vetorA[i]);
	}
	printf("\n");
	printf("Digite os valores da matriz B: ");
	printf("\n");
	for(int i =0; i < 7; i++){
		printf("\n%dº valor: ", i + 1);
		scanf("%d",&vetorB[i]);
	}
	
	for(int i = 0;i < 7;i++){
		for(int j= 0;j < 2;j++){
			if(j == 0){
				vetorC[i][j] = vetorA[i];
			}else {
				vetorC[i][j] = vetorB[i];
			}
		}
	}
	printf("Matriz C (Mistura A e B):\n");
	for (int i = 0; i < 7; i++) {
    for (int j = 0; j < 2; j++) {
        printf("%d ", vetorC[i][j]);
    }
    printf("\n");
	}
}
