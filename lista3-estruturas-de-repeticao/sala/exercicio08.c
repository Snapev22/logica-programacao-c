#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

//Imprime os 15 primeiros termos da sequência de Fibonacci.
int main(void){
	
	int a = 1, b = 1;
	int proximo;
	
	 printf("%i \n%i", a, b);
	
	for(int i=3;i<=15;i++){
		proximo = a + b;
		printf("\n%i", proximo);
		a = b;
		b = proximo;
	}
}

