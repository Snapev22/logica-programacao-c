#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

/*Lê os 9 dígitos de um RA (RAV), reorganiza os dígitos 
conforme uma ordem predefinida e exibe o novo valor.
*/
int main(void){
	
	int rav[9];
	int rac[9];
	char s[10];
	int m[9] = { 0, 1, 7, 6, 4, 5, 2, 3, 8 };
	
	printf("Informe os 9 digitos do RAV: ");
	scanf("%9s", s);
	for(int i = 0;i < 9;i++){
		rav[i] = s[i] - '0';
	}
	
	for(int i = 0;i < 9;i++){
		rac[i]= rav[m[i]]; 
	}	
		
	for(int i = 0;i < 9;i++){
		printf("%d", rac[i]);
	}
}
