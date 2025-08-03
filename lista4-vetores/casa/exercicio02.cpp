#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

/* Lê os 9 dígitos de um RA, reverte parcialmente a ordem de alguns 
dígitos com base em um vetor de mapeamento, e exibe o novo RA.
*/
int main(void){
	
	char s[10];
	int ra[9];
	int ran[9];
	int m[9] = {0,1,2,3,4,8,7,6,5};
	
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

