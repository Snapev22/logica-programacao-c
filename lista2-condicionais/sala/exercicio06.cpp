#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

//Resolve uma equa��o do segundo grau (ax� + bx + c), se poss�vel, exibindo as duas ra�zes reais.

int main(void){
	
	float a, b, c;
	float delta;
	float raiz1, raiz2;
	
	printf("Digite o valor de A:");
	scanf("%f", &a);
	printf("Digite o valor de B:");
	scanf("%f", &b);
	printf("Digite o valor de C:");
	scanf("%f", &c);	
	
	delta = (b* b) - 4 * a * c;
	printf("Valor de delta = %.f", delta);
	
	if(delta > 0){
		raiz1 = -b + sqrt(delta)/2 * a;
		raiz2 = -b - sqrt(delta)/2 * a;
		
		printf("\nX1 = %.f", raiz1);
		printf("\nX2 = %.f", raiz2);
	}else{
		printf("Delta n�o possui raiz");
	}
}

