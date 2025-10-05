#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

//Imprime os números de 1 a 20 utilizando estrutura `do-while`.
int main(void){
	
	int num;
	
	do{
		num++;
		printf("\n%i", num);
	}while(num <20);
}

