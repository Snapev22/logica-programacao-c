#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

//Calcula a �rea e o per�metro de um ret�ngulo a partir das medidas dos seus lados.

int main(void){
      
      float a;
      float b;
      
      printf("DIgite a altura do ret�ngulo: ");
      scanf("%f", &a);
      
      printf("Digite a largura do ret�gulo: ");
      scanf("%f", &b);
      
      float area = a * b;
      float perimetro = (2 * a ) * (2 * b);
      
      printf("Area do ret�ngulo %.2f perimetro do retangulo: %.2f ", area, perimetro );
}
