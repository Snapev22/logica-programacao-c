#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

//L� 5 n�meros inteiros e determina o maior e o menor valor entre eles.
int main(void){
	
	int numeros[5];
    int i, maior, menor;
    
    maior = menor = numeros[0];
    
    for(i = 0; i < 5; i++) {
        printf("Digite o %i� n�mero: ", i + 1);
        scanf("%i", &numeros[i]);
    }
    
     maior = menor = numeros[0];
     
     for(i = 1; i < 5; i++) {
        if(numeros[i] > maior) {
            maior = numeros[i];
        }
        if(numeros[i] < menor) {
            menor = numeros[i];
        }
    }
    
	printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
}
