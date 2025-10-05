#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

//Calcula a média semestral de um aluno com base nas notas de duas provas e uma atividade, considerando pesos diferentes.

int main(void){
      float p1;
      float p2;
      float ativ;
      
      printf("DIgite a nota da p1");
      scanf("%f", &p1);
      
      printf("DIgite a nota da p2: ");
      scanf("%f", &p2);
            
      printf("DIgite a nota da atividade: ");
      scanf("%f", &ativ);
      
      float media = (p1 * 4) + (p2 * 4) + (ativ * 2) / 10;
      
      printf("Média final do aluno: %.2f", media);
}
