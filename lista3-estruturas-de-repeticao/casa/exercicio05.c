#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

//Imprime todos os números ímpares de 1 a 20 utilizando `for`.
int main(void){	
	for(int i=1;i<=20;i++){
		if(i %2 !=0){
			printf("\n%i", i);
		}
	}
}

