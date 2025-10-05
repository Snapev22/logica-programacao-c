#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

/*Lê os 9 dígitos de um RA, troca os dígitos nas posições 0 e 1, 7 e 8, 
mantendo os demais, e imprime o resultado final.
*/
int main(void){
	
	char s[10];
	int ra[9];;
	int ran[9];
	int m[9] = {1,0,2,3,4,5,6,8,7};
	
	printf("Informe o RA: ");
	scanf("%s", s);
	
	for(int i = 0;i < 9;i++){
		ra[i] = s[i] - '0';
	}
	
	for(int i = 0;i < 9;i++){
		ran[i] = ra[m[i]];
	}
	
	printf("Novo RA: ");
	for(int i = 0;i < 9;i++){
		printf("%d", ran[i]);
	}	
}
