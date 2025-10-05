#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

//Calcula a média de 2 notas e, se necessário, solicita a nota do exame. Informa se o aluno foi aprovado direto, aprovado em exame ou reprovado.

int main(void){
	
	float n1, n2, media, exame;
	
	printf("Digite as duas notas: ");
	scanf("%f %f", &n1, &n2);
	
	media = (n1 + n2)/ 2;
	
	if(media >= 6){
		printf("Aprovado com media: %.2f", media);
	}else {
		printf("Digite a nota do exame: ");
		scanf("%f", &exame);
		media+= exame;
		if(media >= 5){
			printf("Aluno aprovado em exame com media: %.2f", media);
		}else {
			printf("Aluno reprovado em exame com media: %.2f", media);
		}
	}
}
