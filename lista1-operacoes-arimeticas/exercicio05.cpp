#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

//Calcula o �ndice de Massa Corporal (IMC) a partir da massa e altura informadas pelo usu�rio.

int main(void){
      
      float h;
      float m;
      
      printf("Digite sua altura em metros: " );
      scanf("%f", &h);
      
      printf("Digite seu peso em kgs: ");
      scanf("%f", &m);
      
      float imc = m / (h * h) ;
      
      printf("Voc� possui um imc de: %.2f", imc);
}

