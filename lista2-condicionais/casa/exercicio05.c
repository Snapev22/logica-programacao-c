#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

/*
 Calcula o salário líquido de funcionários com base em descontos e adicionais, considerando número de horas trabalhadas 
 e salário bruto, repetindo o processo até que o salário informado seja zero.

*/

int main(void){
	
	float salarioLiquido;
	float salarioBruto;
	float totalSalarios;
	int hrTrabalhadas;
	int hrExtras;
	
	while(1){
		
		printf("\nDigite seu salario bruto: ");
		scanf("%f", &salarioBruto);
		
		if(salarioBruto == 0){
			break;
		}
	
		
		if(salarioBruto <800){
			printf("Salario sem descontos.");
		}else if(salarioBruto >= 800 && salarioBruto <=1600){
			salarioBruto -= (salarioBruto * 0.08) + (salarioBruto * 0.05);
		}else {
			salarioBruto -= (salarioBruto * 0.15) + (salarioBruto * 0.07);
		}
		
		printf("\nDigite a quantidade de horas trabalhadas: ");
		scanf("%i", &hrTrabalhadas);
		
		if(hrTrabalhadas > 160){
			float valorHr =	salarioBruto / 160;
			int hrExtra = hrTrabalhadas - 160;
			salarioBruto += hrExtra * (valorHr * 1.5);
		}else{
			salarioLiquido = salarioBruto;
		}
		
		salarioLiquido = salarioBruto;
		totalSalarios += salarioLiquido;
		printf("Salario liquido do funcionario: %.2f", salarioLiquido);
	}	
	printf("\nTotal geral dos salarios liquidos: %.2f", totalSalarios);
	return 0;
}
