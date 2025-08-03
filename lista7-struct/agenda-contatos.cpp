#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<locale.h>

// Programa de agenda com cadastro, pesquisa por idade, ordenação por nome e edição de registros.
// Utiliza struct para armazenar os dados das pessoas.

typedef struct pessoa {
	char nome[20];
	char endereco[50];
	char telefone[20];
	int idade;
}Pessoa;

Pessoa pessoas[5];
int i = 0;

void cadastroPessoa(Pessoa *p){
	
	pessoas[i] = *p;
	printf("Cadastrado com sucesso!");
	i++;	 
	
	printf("\n");
}

void pesquisaPorIdade(int idade){
	int encontrou = 0;
	for(int i = 0;i < 5;i++){
		if(pessoas[i].idade == idade){
			printf("\n Nome: %s\n"
				"Endereco: %s\n"
				"Telefone: %s\n"
				"Idade: %d",
				pessoas[i].nome,
				pessoas[i].endereco,
				pessoas[i].telefone,
				pessoas[i].idade);		
			encontrou =1;
			
		}
	}
	if(!encontrou){
		printf("Pessoa não encontrada.");
	}
	printf("\n");
}

void ordenacaoAlfabetica(Pessoa cadastradas[], int quantidadeCadastros){
	Pessoa temp;
	
	for(int i = 0;i < quantidadeCadastros;i++){
		for(int j = 0;j < quantidadeCadastros - i - 1;j++){
			if(strcmp(cadastradas[j].nome, cadastradas[j + 1].nome) > 0){
				temp =cadastradas[j];
				cadastradas[j] = cadastradas[j + 1];
				cadastradas[j+ 1] = temp; 
			}
		}
	}
	 printf("\n--- Pessoas em ordem alfabética ---\n");
    for (int i = 0; i < quantidadeCadastros; i++) {
        printf("\nNome: %s\nEndereco: %s\nTelefone: %s\nIdade: %d\n",
            cadastradas[i].nome,
            cadastradas[i].endereco,
            cadastradas[i].telefone,
            cadastradas[i].idade);
	}	
	
	printf("\n");
}

void alteracaoRegistro(int numRegistro, int qtdCadastros){
	if(numRegistro < 0 || numRegistro >= qtdCadastros){
		printf("Número de registro inválido.\n");
    	return;
	}
	
	Pessoa p;
	
	printf("Digite seu nome: ");
	fgets(p.nome,20,stdin);
	p.nome[strcspn(p.nome, "\n")] = '\0';

	
	printf("Digite sua idade");
	scanf("%d",&p.idade);
	getchar(); 
	
	printf("Digite seu endereço: ");
	fgets(p.endereco,50,stdin);
	p.endereco[strcspn(p.endereco, "\n")]= '\0';
	
	printf("Digite seu telefone: ");
	fgets(p.telefone,20,stdin);
	p.telefone[strcspn(p.telefone, "\n")]= '\0';
	
	
	strcpy(pessoas[numRegistro].nome, p.nome);
	pessoas[numRegistro].idade = p.idade;
	strcpy(pessoas[numRegistro].endereco, p.endereco);
	strcpy(pessoas[numRegistro].telefone, p.telefone);
	
	printf("Registro atualizado com sucesso.\n");
}

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int opcao;
	int registro;
	Pessoa p;
	
	do{
		printf("\nMenu de Agenda: \n"
				"1- Cadastro\n"
				"2- Pesquisa de registro por idade\n"
				"3- Classificação alfabetica\n"
				"4- Alteração de registro digitado com erro\n"
				"5- Sair do menu\n"
				"Escolha uma opção:");
				scanf("%d",&opcao);
				getchar();
		if(opcao == 5){
			break;
		}	
		switch(opcao){
			case 1:
				if(i >= 5){
					printf("Limite de pessoas cadastradas.");
					break;
				}
				printf("Digite seu nome: ");
				fgets(p.nome,sizeof(p.nome),stdin);
				p.nome[strcspn(p.nome, "\n")]= '\0';
						
				printf("Digite sua idade: ");
				scanf("%d",&p.idade);
				getchar(); 
						
				printf("Digite seu endereço: ");
				fgets(p.endereco,sizeof(p.endereco),stdin);
				p.endereco[strcspn(p.endereco, "\n")]= '\0';
						
				printf("Digite seu telefone: ");
				fgets(p.telefone,sizeof(p.telefone),stdin);
				p.telefone[strcspn(p.telefone, "\n")]= '\0';
				cadastroPessoa(&p);
				break;
						
			case 2:
				printf("Digite a idade: ");
				scanf("%i",&p.idade);
				getchar();
				pesquisaPorIdade(p.idade);
				break;
						
			case 3:
				ordenacaoAlfabetica(pessoas,i);
					break;
						
			case 4:
				printf("Digite o numero do cadastro que deseja alterar: ");
				scanf("%i",&registro);
				getchar();
				alteracaoRegistro(registro,i);
				break;
					
			default:
				printf("Opção invalida, tente novamente.");
				break;
				}
	}while(1);
	
	printf("Programa encerrado :)");
}




























