#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

//Imprime os n�meros de 1 a 20, indicando se s�o pares ou �mpares, utilizando `do-while` com operador tern�rio.
int main(void){
	
	int num;
	do{
		num++;
		printf("%i %s\n",num,(num % 2 ==0)?"par":"impar");
	}while(num < 20);	
}

