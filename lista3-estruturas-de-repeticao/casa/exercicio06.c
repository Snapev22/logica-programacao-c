#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

//Imprime os n�meros de 1 a 20 indicando se s�o pares ou �mpares, utilizando `for`.
int main(void){
	
	for(int i=1;i<=20;i++){
		if(i %2 == 0){
			printf("\n%i par", i);
		}else {
				printf("\n%i impar", i);
		}
	}
}

