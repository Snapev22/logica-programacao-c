#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

//Calcula a média final de um aluno com base em quatro notas bimestrais, utilizando média aritmética simples.

int main(void){
      
      float n1,n2,n3,n4;
      
      printf("Digite a primeira nota: ");
      scanf("%f", &n1);
      
      printf("Digite a segunda nota: ");
      scanf("%f", &n2);
      
      printf("Digite a terceira nota: ");
      scanf("%f", &n3);
            
      printf("Digite a quarta nota: ");
      scanf("%f", &n4);
      
      float media = (n1 + n2 + n3 + n4) / 4;
      
      printf("Média final do aluno: %.2f", media );   
}
