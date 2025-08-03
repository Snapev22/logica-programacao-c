#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>

/* Lê duas matrizes 5x3 (A e B), soma elemento a 
elemento e armazena o resultado na matriz C.
*/
int main(void){
	
	int vetorA[5][3];
	int vetorB[5][3];
	int vetorC[5][3];
	
	printf("Digite os valores da matri A: ");
	printf("\n");
	for(int i =0; i < 5; i++){
		for(int j = 0;j < 3;j++){
			printf("\nDigite o valor para linha %d, coluna %d:",i+1,j+1);
			scanf("%d",&vetorA[i][j]);
		}
	}
	
	printf("Digite os valores da matri B: ");
	printf("\n");
	for(int i =0; i < 5; i++){
		for(int j = 0;j < 3;j++){
			printf("\nDigite o valor para linha %d, coluna %d:",i+1,j+1);
			scanf("%d",&vetorB[i][j]);
		}
	}
	
	for(int i = 0;i < 5;i++){
		for(int j = 0;j < 3;j++){
			vetorC[i][j] = vetorA[i][j] + vetorB[i][j];
		}
	}
	
    printf("Matriz C (soma de A e B):\n");
	for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 3; j++) {
        printf("%d ", vetorC[i][j]);
    }
    printf("\n");
	}
}

