#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

//Lê 5 valores no vetor A e armazena no vetor B os valores de A multiplicados por 3.
int main(void){
	
	int a[5];
	int b[5];
	
	for(int i = 0;i < 5;i++){
		printf("Digite a %iº do vetor A: ", i);
		scanf("%d",&a[i]);
		for(int j = 0;j < 5;j++){
			b[j] = a[j] * 3;
		}
	}
	
	for(int i = 0;i < 5;i++){
		printf("\n%iº elemento do vetor B: %i",i,b[i]);
	}
}

