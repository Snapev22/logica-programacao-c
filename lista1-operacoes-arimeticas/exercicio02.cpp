#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

//Converte um valor em D�lares para Reais utilizando a taxa fixa de c�mbio de R$2,40 por d�lar.

int main (void){
      
      float real= 2.40;
      float dolar;
      
      printf("DIgite o valor em dolares que deseja emn reais: ");
      scanf("%f", &dolar);
      
      float resultado = dolar * real;
      printf("Total em reais: %.2f", resultado);
}
