#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

//Lê 20 valores no vetor A e 30 no vetor B, e une os dois vetores em um vetor C de 50 posições.
int main(void){
	int a[20];
	int b[30];
	int c[50];
	
	for(int i = 0;i < 20;i++){
		printf("Digite %dº elemento do vetor A: ",i);
		scanf("%d", &a[i]);
	}
		printf("\n");
		
	for(int i =0 ;i < 30;i++){
		printf("Digite %dº elemento do vetor B: ",i);
		scanf("%d", &b[i]);
	}
	
	for(int i = 0;i < 20;i++){
		c[i] = a[i];
		for(int j = 20;j < 50;j++){
			c[j] = b[j - 20];
		}
	}
	
	for(int i = 0;i < 50;i++){
		printf("\n%dº elemento do vetor C: %d",i,c[i]);
	}

}

