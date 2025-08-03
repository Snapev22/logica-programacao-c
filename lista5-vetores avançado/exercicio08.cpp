#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>

/*
 L� 4 notas de alunos, ordena as notas e permite ao usu�rio 
 pesquisar uma nota espec�fica dentro do vetor.
*/
int comparar(const void *a, const void *b){
	return (*(int*)a - *(int *)b);
}

void pesquisar(int vetor[], int tamanho) {
    int valor;
    char controle;
    int encontrado;

    do {
        printf("\nDeseja pesquisar um valor? (S/N): ");
        scanf(" %c", &controle); // O espa�o antes de %c consome o ENTER anterior

        if (controle == 's' || controle == 'S') {
            printf("Digite o valor que deseja pesquisar: ");
            scanf("%d", &valor);

            encontrado = 0; // Reseta para cada nova busca

            // Busca no vetor
            for (int i = 0; i < tamanho; i++) {
                if (vetor[i] == valor) {
                    printf("Valor %d encontrado na posi��o: %d\n", valor, i);
                    encontrado = 1;
                    break; // Sai do la�o ap�s encontrar
                }
            }

            // S� exibe essa mensagem uma vez, ap�s a busca completa
            if (!encontrado) {
                printf("Valor %d n�o encontrado no vetor.\n", valor);
            }
        }

    } while (controle == 's' || controle == 'S');
} 

int main(void){
	
	int notas[4];
	
	printf("Digite as notas dos alunos: ");
	printf("\n");
	for(int i = 0;i < 4;i++){
		printf("Valor%d: ", i + 1);
		scanf("%d",&notas[i]);
	}
	
	qsort(notas,4,sizeof(int),comparar);
	
	pesquisar(notas,4);
}

