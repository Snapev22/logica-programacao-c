#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

//L� dois n�meros inteiros e exibe os que s�o divis�veis por 4 e por 5.
int main(void){
      
    int num1, num2;
      
    printf("Dgitite dois n�meros inteiros: ");
    scanf("%i %i", &num1, &num2);
      
    if(num1 % 4 == 0  && num1 % 5 == 0){
        printf("O numero %i � divisivel por 4 e por 5", num1);
    }else{
        printf("O numero %i n�o � divisivel por 4 e por 5", num1);
    }
    if(num2 % 4 == 0  && num2 % 5 == 0){
        printf("\nO numero %i � divisivel por 4 e por 5", num2);  
    }else{
        printf("\nO numero %i n�o � divisivel por 4 e por 5", num2);
    }
}
