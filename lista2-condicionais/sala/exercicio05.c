#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

//Lê três valores e exibe os números em ordem crescente.

int main(void){
	float a, b, c;
	printf("Digite tres valores numericos: ");
	scanf("%f %f %f", &a, &b, &c);
	
	if(a < b && a < c && b < c){
		printf("Valores em ordem crescente: %.2f, %.2f, %.2f", a, b , c);
	}else if(a < b && a < c && c < b){
		printf("Valores em ordem crescente: %.2f, %.2f, %.2f", a, c , b);
	}else if(b < a && b < c && a < c){
		printf("Valores em ordem crescente: %.2f, %.2f, %.2f", b, a, c);
	}else if(b < a && b < c && a > c){
		printf("Valores em ordem crescente: %.2f, %.2f, %.2f",b, c , a);
	}else if(c < a && c < b  && a < b){
		printf("Valores em ordem crescente: %.2f, %.2f, %.2f", c, a , b);
	}else if (c <  a && c < b && b < a){
		printf("Valores em ordem crescente: %.2f, %.2f, %.2f", c, b , a);
	}
	else {
		printf("Digite novamente os valores");
	}	
}
