#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

//Imprime os n�meros de 1 a 20, indicando se cada n�mero � par ou �mpar, usando `while`.
int main(void){
	
	int num = 1;
	
	while(num > 0 && num <=20){
		
		if(num % 2 == 0){
			printf("\n%i par", num);
		}else {
			printf("\n%i impar", num);
		}
		num++;
	}
}
