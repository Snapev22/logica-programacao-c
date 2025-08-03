#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

//Lê três números inteiros e exibe os que são divisíveis por 2 e por 3 simultaneamente.

int main(void){
      
    int num1, num2, num3;
      
    printf("Dgitite três números inteiros: ");
    scanf("%i %i %i", &num1, &num2, &num3);
      
    if(num1 % 2 == 0  && num1 % 3 == 0){
        printf("O numero %i é divisivel por 2 e por 3", num1);
    }else{
    	printf("O numero %i não é divisivel por 2 e por 3", num1);
    }  
    if(num2 % 2 == 0  && num1 % 3 == 0){
        printf("\nO numero %i é divisivel por 2 e por 3", num2);
    }else{
        printf("\nO numero %i não é divisivel por 2 e por 3", num2);
    } 
    if(num3 % 2 == 0  && num1 % 3 == 0){
        printf("\nO numero %i é divisivel por 2 e por 3", num3);
    }else{
        printf("\nO numero %i não é divisivel por 2 e por 3", num3);
    }     
}
