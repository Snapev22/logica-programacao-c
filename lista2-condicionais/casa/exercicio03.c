#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

// Arredonda a nota digitada com base nas regras da universidade: notas com fra��o acima de 0,5 s�o arredondadas para cima, e iguais ou abaixo, para baixo.

int main(void){
	
	float nota;
	
	printf("Digite a nota: ");
	scanf("%f", &nota);
	
	printf("Nota arredondada: %.2f", round(nota));
	
}
