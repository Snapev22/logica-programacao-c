#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>

/*
Lê 10 valores no vetor A e preenche a matriz 10x3 (B) com: valor + 5, 
fatorial do valor, e o valor ao quadrado.
*/
int fatorial(int n){
	int resultado = 1;
	for(int i = 2;i <= n;i++){
		resultado *= i;
	}
	return resultado;
}

int main(void){
	
	int vetorA[10];
	int vetorB[10][3];
	
	printf("Digite os valores do vetor A: ");
	printf("\n");
	for(int i = 0;i < 10;i++){
		printf("%dº valor: ", i+1);
		scanf("%d",&vetorA[i]);
	}
	
	for(int i = 0;i < 10;i++){
		for(int j = 0;j < 3;j++){
			if(j == 0){
				vetorB[i][j] = vetorA[i] + 5; 
			}else if(j == 1){
				vetorB[i][j] = fatorial(vetorA[i]);
			}else{
				vetorB[i][j] = (int)pow(vetorA[i], 2);
			}
		}
	}
	printf("\n");
	printf("Matriz B: ");
	printf("\n");
	for(int i = 0;i < 10;i++){
		for(int j = 0;j < 3;j++){
			printf("%d; ", vetorB[i][j]);
		}
		 printf("\n");
	}
}

