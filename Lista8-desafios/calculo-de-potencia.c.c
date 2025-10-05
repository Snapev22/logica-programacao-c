#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include<math.h>

/*
Calcula a potência de um número (base^expoente) utilizando a 
função pow da biblioteca math.h.
*/
double potencia(double base, double expoente){
		
	return pow(base, expoente);
}	
	
int main(void){
		
	setlocale(LC_ALL, "Portuguese");
	double base;
	double expoente;
	double resultado;
	
	printf("Informe a base da potencia: ");
	scanf("%lf",&base);
	printf("\nInforme o expoente da potencia: ");
	scanf("%lf",&expoente);
	
	printf("\nResultado: %.2lf", potencia(base,expoente));
}	

