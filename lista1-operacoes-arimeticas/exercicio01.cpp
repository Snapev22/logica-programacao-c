#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

// Converte um valor em Reais para D�lares utilizando a taxa fixa de c�mbio de R$2,40 por d�lar.

int main (void)
{
      
      float real;
      float dolar = 2.40;
      
      printf("Digite o valor em reais que deseja em dol�res: ");
      scanf("%f", &real);     
      
      float resultado = real / dolar;
      printf("Total em dolares: %.2f", resultado );
}
