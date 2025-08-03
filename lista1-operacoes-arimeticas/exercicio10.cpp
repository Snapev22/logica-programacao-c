#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

//Troca os valores entre duas variáveis utilizando uma terceira variável auxiliar.

int main(void){
      float a;
      float b;
      
      printf("Digite o valor de A: ");
      scanf("%f", &a);
      
      printf("Digite o valor de B: ");
      scanf("%f", &b);
      
      printf("Valor de A antes de ser alterado:  %.2f Valor de B antes de ser alterado: %.2f", a, b);
      
      float c = a;
      a = b;
	  b = c;
      
       printf("\nValor de A apos  ser alterado:  %.2f Valor de B apos ser alterado: %.2f", a, b);
}
