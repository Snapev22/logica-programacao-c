#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

//Lê 6 valores no vetor A e armazena no vetor B o fatorial de cada elemento de A.
int main(void){
	
	int a[6];
	int b[6];
	int fat;
	
	for(int i = 0;i < 6;i++){
		printf("Digite o %dº elemento do vetor A: ", i);
		scanf("%d", &a[i]);
	}
	
	for(int i = 0;i < 6;i++){
		int fat = 1;
		for(int j = 1;j <=a[i];j++){
			fat *= j;
		}
		b[i] = fat;
	}
	
	for(int i = 0;i < 6;i++){
		printf("\n%dº elemento do vetor B: %d",i,b[i]);
	}
}

