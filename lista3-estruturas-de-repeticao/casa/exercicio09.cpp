#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

//Imprime os números de 1 a 20, indicando se são pares ou ímpares, utilizando `do-while` com operador ternário.
int main(void){
	
	int num;
	do{
		num++;
		printf("%i %s\n",num,(num % 2 ==0)?"par":"impar");
	}while(num < 20);	
}

