#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

//Lê dois números e exibe a diferença do maior para o menor.

int main(void){
	
	float val1, val2, dif;
	printf("Digie os dois valores: ");
	scanf("%f %f", &val1, &val2);
	
	dif = val1 - val2;
	dif = abs(dif);
	
	printf("A diferenca dos valores é de: %.2f", dif);	
}
