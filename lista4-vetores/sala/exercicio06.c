#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

//Lê 8 valores no vetor A e armazena no vetor B os quadrados dos respectivos elementos de A.
int main(void){
	
	int a[8];
	int b[8];
	
	for(int i =0 ;i < 8;i++){
		printf("Digite %dº elemento do vetor A: ",i);
		scanf("%d", &a[i]);
	}
	
	for(int i = 0;i < 8;i++){
		b[i] = pow(a[i], 2);
	}
	
	for(int i = 0;i < 8;i++){
		printf("\n%dº elemento do vetor C: %d",i,b[i]);
	}
}

