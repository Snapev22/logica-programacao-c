#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

//Lê 10 valores no vetor A e armazena no vetor B os mesmos elementos de A, porém em ordem invertida.
int main(void){
	
	int a[10];
	int b[10];
	
	
	for(int i =0 ;i < 10;i++){
		printf("Digite %dº elemento do vetor A: ",i);
		scanf("%d", &a[i]);
	}	
	
	int j = 0;
	for(int i = 9;i >= 0;i--){
 		b[i] = a[j];
 		j++;
	}
	
	
	for(int i = 0;i < 10;i++){
		printf("\n%dº elemento do vetor B: %d",i,b[i]);
	}
}
