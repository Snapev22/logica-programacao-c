#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

// L� um n�mero inteiro e exibe seu m�dulo (valor absoluto).

int main(void){
      
    int num;
      
    printf("Digite um numero: ");
    scanf("%i", &num);
      
    if(num < 0){
    	num = abs(num);
        printf("Modulo do numero: %i", num);
    }else{
        printf("Modulo do numero: %i", num);
	}
}
