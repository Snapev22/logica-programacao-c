#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

// Sistema de agenda com cadastro, pesquisa por nome, ordenação alfabética, alteração e remoção de registros.
// Utiliza struct para armazenar nome, endereço e telefone de até 5 pessoas.

typedef struct pessoa{
	char nome[20];
	char endereco[50];	
	char telefone[20];
	
}Pessoa;

Pessoa pessoas[5];
int i = 0;

void cadastraPessoa(Pessoa *p){
	
	printf("Digite o nome: ");
	fgets(p->nome,sizeof(p->nome),stdin);
	p->nome[strcspn(p->nome, "\n")] = '\0';	
	
	printf("Digite seu endereço: ");
	fgets(p->endereco,sizeof(p->endereco), stdin);
	p->endereco[strcspn(p->endereco, "\n")] = '\0';
		
	printf("Digite seu telefone: ");
	fgets(p->telefone,sizeof(p->telefone), stdin);
	p->telefone[strcspn(p->telefone, "\n")] = '\0';
	
	pessoas[i] = *p;
	printf("Cdastrado com sucesso!\n");
}

void pesquisaPorNome(char nome[20]){
	int encontrou = 0;
	
	for(int i = 0;i < 5;i++){
		if(strcmp(pessoas[i].nome, nome) == 0){
			printf("\nPessoa encontrada\n"
			"Nome: %s, endereco: %s, telefone: %s\n", pessoas[i].nome, pessoas[i].endereco, pessoas[i]);
			encontrou = 1;
		}
	}

	if(!encontrou){
		printf("Pessoa nao cadastrada tente novamente \n");
	}
}

void alteraRegistro(int numRegistro, int qtdCadastro){
	if(numRegistro < 0 || numRegistro >= qtdCadastro){
		printf("Numero de registro invalido\n.");
		return;
	}
	
	pri  vbntf("Digite o nome: ");
	fgets(pessoas[numRegistro].nome,sizeof(pessoas[numRegistro].nome), stdin);
	pessoas[numRegistro].nome[strcspn(pessoas[numRegistro].nome, "\n")] = '\0';
	
	printf("Digite seu endereco: ");
	fgets(pessoas[numRegistro].endereco,sizeof(pessoas[numRegistro].endereco),stdin);
	pessoas[numRegistro].endereco[strcspn(pessoas[numRegistro].endereco, "\n")] = '\0';
	
	printf("Digite seu telefone: ");
	fgets(pessoas[numRegistro].telefone,sizeof(pessoas[numRegistro].telefone), stdin);
	pessoas[numRegistro].telefone[strcspn(pessoas[numRegistro].telefone, "\n")] = '\0';
	
}

void removerPessoa(int numRegistro, int qtdCadastro){
	if(numRegistro < 0 || numRegistro >= qtdCadastro){
		printf("Numero de registro invalido\n");
		return;
	}
	
	for(int j = numRegistro;j < qtdCadastro - 1;j++){
		pessoas[j] = pessoas[j + 1];
	}
	
	i--;
	printf("Pessoa removida com sucesso.\n");
}

void ordemAlfabetica(Pessoa cadastradas[], int qtdCadastro){

	Pessoa temp;
	
	for(int i = 0;i < qtdCadastro;i++){
		for(int j = 0;j < qtdCadastro - i - 1;j++){
			if(strcmp(cadastradas[j].nome, cadastradas[j + 1].nome) > 0){
				temp = cadastradas[j];
				cadastradas[j] = cadastradas[j + 1];
				cadastradas[j + 1] = temp;	
			}
			
		}
	}
	
	printf("\n--- Pessoas em ordem alfabética ---\n");
	for (int i = 0; i < qtdCadastro; i++) {
        printf("\nNome: %s\nEndereco: %s\nTelefone: %s\n",
            cadastradas[i].nome,
            cadastradas[i].endereco,
			cadastradas[i].telefone);
	}
}

int main(void){
	
	Pessoa p;
	int opcao;
	int numRegistro;
	
	while(1){
		printf("\nMenu de cadastro\n"
			"1 - Cadastro.\n"
			"2 - Pesquisa por nome.\n"
			"3 - Exibir cadastros em ordem alfabetica.\n"
			"4 - Alterar registro digitado com erro.\n"
			"5 - Remover cadastro.\n"
			"6 - Sair do programa.\n"
			"\nEscolha uma opcao: ");
			scanf("%i", &opcao);
			getchar();
		
		if(opcao == 6){
			break;
		}
		
		if(opcao == 1){
			if(i < 5){
				cadastraPessoa(&p);
					i++;
			}else{
				printf("\nNumero maximo de pessoa cadastradas.");
			}
			
		}else if(opcao == 2){
			printf("\nDigite o nome que deseja pesquisar: ");
			fgets(p.nome,sizeof(p.nome), stdin);
			p.nome[strcspn(p.nome, "\n")] = '\0';
			pesquisaPorNome(p.nome);
		}else if(opcao == 3){
			ordemAlfabetica(pessoas,i);
		}else if(opcao == 4){
			printf("\nDigite o numero de cadastro que deseja alterar: ");
			scanf("%i", &numRegistro);
			getchar();
			alteraRegistro(numRegistro,i);
		}else if(opcao == 5){
			printf("\nDigite o numero do cadastro que deseja remover: ");
			scanf("%i", &numRegistro);
			getchar();
			removerPessoa(numRegistro,i);
		}else {
			printf("Opcao invalida tente novamente.");
		}
	}
	printf("Programa encerrado :)");
}













