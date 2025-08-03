#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

//Imprime os números pares de 2 a 20 utilizando `do-while`.
int main(void){
	
	int num;
	
	do{
		num+=2;
		printf("\n%i", num);
	}while(num < 20);
}

