#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>

/*
Lê 3 valores no vetor A, calcula o cubo de cada valor e armazena no vetor B. 
Em seguida, permite ao usuário pesquisar valores dentro de B.
*/
void pesquisar(int vetor[], int tamanho) {
    int valor;
    char controle;
    int encontrado;

    do {
        printf("\nDeseja pesquisar um valor? (S/N): ");
        scanf(" %c", &controle); // O espaço antes de %c consome o ENTER anterior

        if (controle == 's' || controle == 'S') {
            printf("Digite o valor que deseja pesquisar: ");
            scanf("%d", &valor);

            encontrado = 0; // Reseta para cada nova busca

            // Busca no vetor
            for (int i = 0; i < tamanho; i++) {
                if (vetor[i] == valor) {
                    printf("Valor %d encontrado na posição: %d\n", valor, i);
                    encontrado = 1;
                    break; // Sai do laço após encontrar
                }
            }

            // Só exibe essa mensagem uma vez, após a busca completa
            if (!encontrado) {
                printf("Valor %d não encontrado no vetor.\n", valor);
            }
        }

    } while (controle == 's' || controle == 'S');
} 


int main(void){
	
	int vetorA[3];
	int vetorB[3];
	
	printf("Digite os valores do vetor A: ");
	printf("\n");
	for(int i = 0;i < 3;i++){
		printf("Valor%d: ", i + 1);
		scanf("%d",&vetorA[i]);
	}
	
	for(int i = 0;i < 3;i++){
		vetorB[i] = (int)pow(vetorA[i], 3);
	}
	
	pesquisar(vetorB,3);	
	
}

