#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

//Calcula a quantidade de azulejos necessários para cobrir uma parede, com base nas dimensões da parede e do azulejo.

int main(void){
      
      float ap;
      float lp;
      float aa;
      float la;
      
      printf("Digite a altura da parede: ");
      scanf("%f", &ap);
      
      printf("DIgite a largura da parede: ");
      scanf("%f", &lp);
      
      printf("Digite a altura do azuleijo: ");
      scanf("%f", &aa);
      
      printf("Digite a largura do azuleijo: ");
      scanf("%f", &la);
      
      float areaParede = ap * lp;
      float areaAzuleijo = aa * la;

      float resultado = areaParede / areaAzuleijo;
      
      printf("Quantidade de azuleijos necessários: %.2f", resultado);
}

