#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

//Calcula a m�dia de 3 notas e informa se o aluno foi aprovado ou reprovado, exibindo a m�dia final.

int main(void){
	
	float n1, n2, n3, media;
	
	printf("Digite as tr�s notas: ");
	scanf("%f %f %f", &n1, &n2, &n3);
	
	media = (n1 + n2 + n3) / 3;
	printf(media >= 6 ? "Aprovado com media: %.2f": "Reprovado com media: %.2f", media);
	
}
