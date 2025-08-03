#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>jj

// Lê um código numérico e exibe o nome de um curso correspondente (ou mensagem de erro), utilizando estrutura switch-case.

int main(void){
	
	int codigo;
	
	printf("Digite o codigo do curso que deseja visualizar: ");
	scanf("%i", &codigo);
	
	switch(codigo){
		case 1:
			printf("O codigo %i corresponde ao curso de Engenharia.", codigo);
			break;
		case 2:
			printf("O codigo %i corresponde ao curso de Edificações.", codigo);
			break;
		case 3:
			printf("O codigo %i corresponde ao curso de Sistemas Elétricos.", codigo);
			break;
		case 4:
			printf("O codigo %i corresponde ao curso de  Turismo.", codigo);
			break;
		case 5:
			printf("O codigo %i corresponde ao curso de Análise de Sistemas.", codigo);
			break;
		default :
			printf("O codigo  diitado e invalido tente novamente.");
			break;
	}	
}
