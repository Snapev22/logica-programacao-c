#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

//Imprime os números pares de 2 a 20 utilizando `while`.
int main(void){
	
	int num = 2;
	
	while(num % 2 == 0){
		printf(" %i \n", num);	
		num +=2;
		
		if(num > 20){
			break;
		}
	
	}
}
