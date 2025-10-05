#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

//Calcula e exibe o volume e a área da superfície de uma esfera, dado seu raio.

int main(void){
      
      const float pi = 3.14;
      float raio;
      
      printf("DIgite o valor do raio: ");
      scanf("%f", &raio);
      
      float volume = (4/3) * pi * pow (raio , 3);
      float area = (4 * pi) * (raio * raio);
      
      printf("Volume da circunferencia %.2f Area da circunferência: %.2f", volume, area);
}

