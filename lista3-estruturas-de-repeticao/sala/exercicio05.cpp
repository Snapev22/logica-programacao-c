#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

//Imprime todos os n�meros de 1 a 199 que s�o divis�veis por 4.
int main(void){
	
	for(int i=1;i<200;i++){
		if(i % 4 == 0){
			printf("\n%i", i);
		}
	}
}
