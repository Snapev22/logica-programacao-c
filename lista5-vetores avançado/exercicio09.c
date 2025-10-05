#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>

/*
Lê 5 nomes e os ordena de acordo com o comprimento (tamanho) de cada nome, em ordem crescente.
*/
int compararTamanho(const void *a, const void *b) {
    const char *str1 = (const char *)a;
    const char *str2 = (const char *)b;
    return strlen(str1) - strlen(str2);
}


int main(void){
	
	char nomes[5][20];
	
	printf("Digite os nomes : ");
	printf("\n");
	for(int i = 0;i < 5;i++){
		printf("%dº nome: ", i + 1);
		fgets(nomes[i], 20, stdin);
		
		nomes[i][strcspn(nomes[i], "\n")] = '\0';
	}
	
	qsort(nomes,5,sizeof(nomes[0]),compararTamanho);
	
	printf("Nomes ordenados: ");
	printf("\n");
	for(int i = 0; i < 5; i++){
		printf("\n%s",nomes[i]);
	}
}

