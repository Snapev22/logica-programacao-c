#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

//L� tr�s n�meros inteiros e exibe os que s�o divis�veis por 2 e por 3 simultaneamente.

int main(void){
      
    int num1, num2, num3;
      
    printf("Dgitite tr�s n�meros inteiros: ");
    scanf("%i %i %i", &num1, &num2, &num3);
      
    if(num1 % 2 == 0  && num1 % 3 == 0){
        printf("O numero %i � divisivel por 2 e por 3", num1);
    }else{
    	printf("O numero %i n�o � divisivel por 2 e por 3", num1);
    }  
    if(num2 % 2 == 0  && num1 % 3 == 0){
        printf("\nO numero %i � divisivel por 2 e por 3", num2);
    }else{
        printf("\nO numero %i n�o � divisivel por 2 e por 3", num2);
    } 
    if(num3 % 2 == 0  && num1 % 3 == 0){
        printf("\nO numero %i � divisivel por 2 e por 3", num3);
    }else{
        printf("\nO numero %i n�o � divisivel por 2 e por 3", num3);
    }     
}
