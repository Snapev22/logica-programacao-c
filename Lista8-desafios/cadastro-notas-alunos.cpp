#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


// Cadastro de alunos com nota, com funcionalidades de ordenação por nota, pesquisa, correção e verificação de aprovação.
// Utiliza struct para armazenar nome e nota de até 5 alunos.

typedef struct aluno{
	char nome[20];
	double nota;
}Aluno;

Aluno alunos[5];
int i = 0;

void cadastraAluno(Aluno *aluno){
	
	printf("Digite o nome do aluno: ");
	fgets(aluno->nome, sizeof(aluno->nome),stdin);
	aluno->nome[strcspn(aluno->nome, "\n")] = '\0';
	
	printf("Digite a nota do aluno: ");
	scanf("%lf", &aluno->nota);
	getchar();
	
	alunos[i] = *aluno;
}

void classificaAlunos(Aluno cadastrados[], int qtdCadastros){
	
	Aluno temp;
	
	for(int i = 0;i < qtdCadastros;i++){
		for(int j = 0;j < qtdCadastros - i - 1;j++){
			if(cadastrados[j].nota < cadastrados[j + 1].nota){
				temp = cadastrados[j];
				cadastrados[j] = cadastrados[j + 1];
				cadastrados[j + 1] = temp;
			}
		}
	}
	
	printf("\n----Alunos organizados por nota:\n");
	for(int i = 0;i < qtdCadastros;i++){
		printf("\nNome: %s\n"
			"\nNota: %.2f", cadastrados[i].nome, cadastrados[i].nota);
	}
}

void alterarNotas(char *nome, int qtdCadastros){
	
	int encontrado = 0;
	for(int i = 0;i < qtdCadastros;i++){
		if(strcmp(nome,alunos[i].nome) == 0){
			printf("Digite o nome do aluno: ");
			fgets(alunos[i].nome, sizeof(alunos[i].nome),stdin);
			alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';
	
			printf("Digite a nota do aluno: ");
			scanf("%lf", &alunos[i].nota);
			getchar();
			
			printf("\nCadastro alterado com sucesso :)\n");
			encontrado = 1;
		}	
	}
	if(!encontrado){
		printf("\nAluno nao encontrado");
	}	
}

void pesquisaAluno(char *nome, int qtdCadastros){
	int encontrou = 0;
	for(int i = 0;i < qtdCadastros;i++){
		if(strcmp(nome,alunos[i].nome) == 0){
			printf("\nAluno encontrado: \nNome: %s, Nota: %.2f", alunos[i].nome, alunos[i].nota);
			encontrou = 1;
		}
	}
	
	if(!encontrou){
		printf("\nAluno nao encontrado tente outra vez");
	}
}

void verificaNota(Aluno cadastrados[], int qtdCadastros){
	
	Aluno aprovados[5];
	Aluno reprovados[5];
	int qtdAprovados = 0;
	int qtdReprovados = 0;
	
	for(int i = 0;i < qtdCadastros;i++){
		if(cadastrados[i].nota >= 7){
			aprovados[qtdAprovados] = cadastrados[i];
			qtdAprovados++;
		}else{
			reprovados[qtdReprovados] = cadastrados[i];	
			qtdReprovados++;	
		}	
	}
	printf("\n----Alunos aprovados----\n");
	for(int i = 0;i < qtdAprovados;i++){
		printf("\nNome: %s, nota: %.2f", aprovados[i].nome, aprovados[i].nota);
	}
	
	printf("\n----Alunos reprovados----\n");
	for(int i = 0;i < qtdReprovados;i++){
		printf("\nNome: %s, nota: %.2f", reprovados[i].nome, reprovados[i].nota);
	}
}

int main(void){
	
	Aluno aluno;
	int opcao;
	
	while(1){

		printf("\nMenu de opcoes.\n"
				"1 - Cadastrar aluno.\n"
				"2 - Classificar alunos por notas.\n"
				"3 - Corrigir alunos/e ou notas digitados com erro.\n"
				"4 = Pesquisar aluno por nome.\n"
				"5 - Lista de alunos aprovados e reprovados.\n"
				"6 - Encerrar programa.\n"
				"\nEscolha uma opcao: ");
				scanf("%i",&opcao);
				getchar();
				
				if(opcao == 6){
					break;
				}
				
		switch(opcao){
			case 1: 
				if(i >= 5){
					printf("Quantidade de cadastros maxima atingidada.\n");
					break;
				}else{
					cadastraAluno(&aluno);
					i++;
				}
				break;
		
			case 2:
				classificaAlunos(alunos,i);
				break;
				
			case 3:
				printf("Digite o nome do aluno que deseja alterar: ");
				fgets(aluno.nome,sizeof(aluno.nome),stdin);
				aluno.nome[strcspn(aluno.nome, "\n")] = 0;
				alterarNotas(aluno.nome, i);		
				break;
				
			case 4:
				printf("Digite o nome do aluno que deseja alterar: ");
				fgets(aluno.nome,sizeof(aluno.nome),stdin);
				aluno.nome[strcspn(aluno.nome, "\n")] = 0;
				pesquisaAluno(aluno.nome, i);
				break;
				
			case 5:
				verificaNota(alunos, i);
				break;
				
			default:
				printf("Opcao invalida tente novamente");
				break;
		}		
			// Espera o usuário apertar uma tecla antes de limpar a tela
		printf("\n\nPressione qualquer tecla para continuar...");
		getch();            // Espera uma tecla
		system("cls");      // Agora limpa a tela
		
	}
	printf("Fim do programa :)");

}










