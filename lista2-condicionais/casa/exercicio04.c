#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

//Lê três números e identifica qual é o maior, o menor e o número intermediário.

int main(void){
	
	float num1;
	float num2;
	float num3;
	float maior; 
	float menor;
	float meio;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &num1);
	printf("Digite o segundo numero: ");
	scanf("%f", &num2);
	printf("Digite o terceiro numero: ");
	scanf("%f", &num3);
	
	if(num1 > num2 && num1 > num3){
		maior += num1;
	}else if(num2 > num1 && num2 > num3){
		maior += num2;
	}else{
		maior = num3;
	}
	
	if(num1 <= num2 && num1 <= num3){
		menor += num1;
	}else if(num2 <= num1 && num2 <= num3){
		menor += num2;
	}else {
		menor += num3;
	}
	
	meio = (num1 + num2 + num3) - (maior + menor);
	
	printf("Maior numero: %.2f", maior);	
	printf("\nNumero do meio: %.2f", meio);
	printf("\nMenor numero: %.2f", menor);
}

