#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

//Imprime os números de 1 a 20 usando estrutura de repetição `while`.
int main(void){
	
	int num;
	
	while(1){
		if(num > 0){
			printf(" %i \n", num);	
		}
		if(num == 20){
			break;
		}else{
			num ++;
		}	
	}
}
