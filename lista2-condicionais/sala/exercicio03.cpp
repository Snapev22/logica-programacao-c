#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

//L� dois n�meros e exibe a diferen�a do maior para o menor.

int main(void){
	
	float val1, val2, dif;
	printf("Digie os dois valores: ");
	scanf("%f %f", &val1, &val2);
	
	dif = val1 - val2;
	dif = abs(dif);
	
	printf("A diferenca dos valores � de: %.2f", dif);	
}
