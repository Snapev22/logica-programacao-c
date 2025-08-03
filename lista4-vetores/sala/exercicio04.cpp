#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

//Lê 5 valores em A e 5 valores em B, e une os dois vetores em um vetor C de 10 posições.
int main(void){
	
	int a[5];
	int b[5];
	int c[10];
	
	for(int i = 0;i < 5;i++){
		printf("Digite %dº elemento do vetor A: ",i);
		scanf("%d", &a[i]);
	}
	
	for(int i = 0;i < 5;i++){
		printf("Digite %dº elemento do vetor B: ",i);
		scanf("%d", &b[i]);
	}
	
	for(int i = 0;i < 5;i++){
		c[i] = a[i];
		for(int j = 5;j < 10;j++){
			c[j] = b[j - 5];
		}
	}
	
	for(int i = 0;i < 10;i++){
		printf("\n%dº elemento do vetor C: %d",i,c[i]);
	}
}

