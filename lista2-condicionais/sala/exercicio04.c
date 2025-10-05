#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

//Lê três valores e verifica se formam um triângulo. Caso formem, identifica o tipo: equilátero, isósceles ou escaleno.

int main(void){
	
	float a, b, c;
	
	printf("Digite os 3 valores dos lados dos triangulos: ");
	scanf("%f %f %f", &a, &b, &c);
	
	if(a < b+c && b < a+c && c < a+b){
		if(a == b && a != c || a == c && a != b || b == c && b != a){
			printf("Tipo de triangulo: isoceles");
		}else if(a != b && b != c){
			printf("Tipo de triangulo: escaleno");
		}else if(a == b && a == c && b == c){
			printf("Tipo de triangulo: equilatero");
		}
	}else {
		printf("Triangulo impossivel, tente novamente com outros valores.");
	}
}
