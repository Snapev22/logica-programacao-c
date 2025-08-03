#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

// Converte um valor em Reais para Dólares utilizando a taxa fixa de câmbio de R$2,40 por dólar.

int main (void)
{
      
      float real;
      float dolar = 2.40;
      
      printf("Digite o valor em reais que deseja em doláres: ");
      scanf("%f", &real);     
      
      float resultado = real / dolar;
      printf("Total em dolares: %.2f", resultado );
}
