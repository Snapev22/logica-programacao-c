#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

//Calcula o Índice de Massa Corporal (IMC) a partir da massa e altura informadas pelo usuário.

int main(void){
      
      float h;
      float m;
      
      printf("Digite sua altura em metros: " );
      scanf("%f", &h);
      
      printf("Digite seu peso em kgs: ");
      scanf("%f", &m);
      
      float imc = m / (h * h) ;
      
      printf("Você possui um imc de: %.2f", imc);
}

