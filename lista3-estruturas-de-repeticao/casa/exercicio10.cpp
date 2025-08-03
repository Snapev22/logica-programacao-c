#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

//Simula uma calculadora que realiza operações básicas (+, -, *, /) até que o usuário digite 'S' ou 's' para encerrar.
int main(void){
	
	float num1, num2, resultado;
	char digitado;
	
	while(digitado !='S' && digitado!='s'){
		printf("\nEscolha a operação desejada ou digite S para encerrar o programa: \n");
		scanf(" %c", &digitado);
		
		if(digitado == '+'){
			printf("Digite o primeiro valor: ");
			scanf("%f", &num1);
			printf("Digite o segundo valor:\n ");
			scanf("%f", &num2);
			resultado = num1+num2;
			printf("%.2f + %.2f = %.2f ",num1,num2,resultado,"\n");
		}else if(digitado == '-'){
			printf("\nDigite o primeiro valor: ");
			scanf("%f", &num1);
			printf("Digite o segundo valor: ");
			scanf("%f", &num2);
			resultado = num1-num2;
			printf("\n%.2ff - %.2ff = %.2ff ",num1,num2,resultado,"\n");
		}else if(digitado == '*'){
			printf("\nDigite o primeiro valor: ");
			scanf("%f", &num1);
			printf("Digite o segundo valor: ");
			scanf("%f", &num2);
			resultado = num1*num2;
			printf("\n%.2f X %.2f = %.2f ",num1,num2,resultado,"\n");
		}else if(digitado == '/'){
			printf("\nDigite o primeiro valor: ");
			scanf("%f", &num1);
			printf("Digite o segundo valor: ");
			scanf("%f", &num2);
			resultado = num1/num2;
			printf("%.2f / %.2f = %.2f ",num1,num2,resultado,"\n");
		}else {
			printf("Operação inexistente");
		}
	}	
	printf("\nPrograma encerrado!");	
}
