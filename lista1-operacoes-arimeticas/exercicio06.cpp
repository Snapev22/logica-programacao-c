#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

//Calcula e exibe a �rea e o comprimento de uma circunfer�ncia a partir do seu raio.

int main(void){
      
      float raio;
      const float pi = 3.14;
      
      printf("DIgite o valor do raio da circunfer�ncia: ");
      scanf("%f", &raio);
      
      float area = pi * (raio * raio);
      float comprimento = (2 * pi) * raio;
      
      printf("Area da circunfer�ncia %.2f comprimento da circunferencia : %.2f", area, comprimento);
}
