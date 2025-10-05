#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

//Lê 5 valores nos vetores A e B, calcula a subtração de A[i] - B[i] e armazena no vetor C.
int main(void){
	
	int a[5];
	int b[5];
	int c[5];
	
	for(int i = 0;i < 5;i++){
		printf("Digite %dº elemento do vetor A: ",i);
		scanf("%d", &a[i]);
	}
		printf("\n");
	for(int i = 0;i < 5;i++){
		printf("Digite %dº elemento do vetor B: ",i);
		scanf("%d", &b[i]);
	}
	
	for(int i = 0;i < 5;i++){
		c[i] = a[i] - b[i];
	}
	
	for(int i = 0;i < 5;i++){
		printf("\n%dº elemento do vetor C: %d",i,c[i]);
	}
}

