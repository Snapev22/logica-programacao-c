#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

//Calcula e exibe as potências de 3 de 0 a 15.
int main(void){
	
	int num =3;
	for(int i=0;i<=15;i++){
		int result = pow(num, i);
		printf("\n%i^%i= %i",num,i,result);
	}
}
