#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

//Calcula a área e o perímetro de um retângulo a partir das medidas dos seus lados.

int main(void){
      
      float a;
      float b;
      
      printf("DIgite a altura do retângulo: ");
      scanf("%f", &a);
      
      printf("Digite a largura do retâgulo: ");
      scanf("%f", &b);
      
      float area = a * b;
      float perimetro = (2 * a ) * (2 * b);
      
      printf("Area do retângulo %.2f perimetro do retangulo: %.2f ", area, perimetro );
}
